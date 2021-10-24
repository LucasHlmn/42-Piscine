/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*	ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucashoulmann <lucashoulmann@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/18 12:41:17 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	increment;

	increment = 0;
	while (*(src + increment) != '\0')
	{
		*(dest + increment) = *(src + increment);
		increment++;
	}
	*(dest + increment) = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*str_cpy;

	str_cpy = (char *) malloc(sizeof(*src) * ft_strlen(src) + 1);
	if (str_cpy == NULL)
		return (0);
	else
		str_cpy = ft_strcpy(str_cpy, src);
	return (str_cpy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*array;

	array = malloc(sizeof(*array) * (ac + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[i].size = 0;
	array[i].str = 0;
	array[i].copy = 0;
	return (array);
}

// int					main(void)
// {
// 	int					index;
// 	int					ac;
// 	char				**av;
// 	struct s_stock_str	*structs;

// 	ac = 3;
// 	av = (char **)malloc((ac + 1) * sizeof(char *));
// 	av[0] = "Test1";
// 	av[1] = "Test2";
// 	av[2] = "Test3";
// 	structs = ft_strs_to_tab(ac, av);
// 	index = 0;
// 	while (index < ac)
// 	{
// 	printf("%d\n", index);
// 	printf("\t| ori : %s @ %p\n", structs[index].str, structs[index].str);
// 	printf("\t| cop : %s @ %p\n", structs[index].copy, structs[index].copy);
// 	printf("\t| size : %d\n", structs[index].size);
// 	index++;
// 	}
// }

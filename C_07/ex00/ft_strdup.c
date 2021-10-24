/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*	ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucashoulmann <lucashoulmann@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/13 14:48:39 by lucashoulma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char	*s1)
{
	int	count;

	count = 0;
	while (*s1 != '\0')
	{
		s1++;
		count++;
	}
	return (count);
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
	static char	*str_cpy;

	str_cpy = (char *) malloc(sizeof(*src) * ft_strlen(src) + 1);
	if (str_cpy == NULL)
		return (NULL);
	else
		str_cpy = ft_strcpy(str_cpy, src);
	return (str_cpy);
}

/*int	main(void)
{
	char *str_example;
	char *copy;

	str_example = "Hello World";
	copy = ft_strdup(str_example);
	printf("original: %s\n", str_example);
	printf("copy: %s\n", copy);
	return (0);
}*/
// str_cpy variable must be static 
//otherwise the string will be lost after the function finish
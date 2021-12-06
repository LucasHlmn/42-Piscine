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

void	ft_put_str(char *c)
{
	while (*c)
	{
		write(1, c, 1);
		c++;
	}
}
//need to swap element of a 2d array, therefore need to pass 2d arguments
//so you can swap whole subargument

void	swap_str(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// if a value >0 is returned, 
//it means s1 ascii value is higher in the ascii table than s2
// so s1 need to be swap with s2
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

void	ft_sort_str_list(char **str, int list_size)
{
	int	i;
	int	count;

	count = 0;
	while (count < list_size)
	{
		i = 1;
		while (i < list_size)
		{
			if (ft_strcmp(str[i], str[i + 1]) > 0)
				swap_str(&str[i], &str[i + 1]);
			i++;
		}
		count++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	ft_sort_str_list(argv, argc - 1);
	i = 1;
	while (i < argc)
	{
		ft_put_str(argv[i]);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}

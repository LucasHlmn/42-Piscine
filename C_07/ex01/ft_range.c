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

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	range = (int *) malloc(sizeof(*range) * (max - min));
	if (min >= max || range == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (min < max)
		{
			range[i] = min;
			i++;
			min++;
		}
	}
	return (range);
}

/*int	main(void)
{
	int	i;
	int	min;
	int	max;

	min = 0;
	max = 11;
	i = 0;
	while (i < max)
	{
		printf("%d\n",ft_range(min, max)[i]);
		i++;
	}
	return (0);
}*/
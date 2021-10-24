/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*	ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucashoulmann <lucashoulmann@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/22 17:29:52 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	index;
	int	*results;

	results = malloc(length * sizeof(int));
	if (results == NULL)
		return (NULL);
	index = 0;
	while (index < length)
	{
		results[index] = (*f)(tab[index]);
		index++;
	}
	return (results);
}

/*int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		return (nb * ft_recursive_factorial((nb - 1)));
	}		
	else
		return (0);
}*/

/*int	main(void)
{
	int	index;
	int	*tab;
	int	length;
	int	*results;

	length = 10;
	tab = malloc(length * sizeof(int));
	index = 0;
	while (index < length)
	{
		tab[index] = index;
		index++;
	}
	results = ft_map(tab, length, &ft_recursive_factorial);
	index = 0;
	while (index < length)
	{
		printf("[mapped] factorial(%d) = %d\n", index, results[index]);
		index++;
	}
}*/

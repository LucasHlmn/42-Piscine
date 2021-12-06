/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*	ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucashoulmann <lucashoulmann@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/22 17:27:56 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

/*void	ft_put_nbr(int number)
{
	if (number > 9)
		ft_put_nbr(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	if (length <= 0)
		return ;
	(*f)(tab[0]);
	ft_foreach(tab + 1, length - 1, f);
}

/*int	main(void)
{
	int	index;
	int	*tab;
	int	length;

	length = 10;
	tab = malloc(length * sizeof(int));
	index = 0;
	while (index < length)
	{
		tab[index] = index;
		index++;
	}
	ft_foreach(tab, length, &ft_put_nbr);
}*/

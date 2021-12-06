/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*	ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucashoulmann <lucashoulmann@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/14 09:59:24 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	num;

	if (nb <= 0 || nb == 1)
		return (0);
	if (nb > 0)
	{
		num = 2;
		while (num < nb)
		{
			if (nb % num == 0)
				return (0);
			else
				num++;
		}
	}
	return (1);
}
//Logic : check if any number gives remainder to the given number nb 
/*int main ()
{
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(10));
	printf("%d\n", ft_is_prime(50198));
	printf("%d\n", ft_is_prime(50199));
	printf("%d\n", ft_is_prime(50200));
	printf("%d\n", ft_is_prime(50201));
	printf("%d\n", ft_is_prime(50202));
	printf("%d\n", ft_is_prime(50203));
	printf("%d\n", ft_is_prime(50204));
	return (0);
}*/

//Moulinette result
// 50198 -> 0$
//  50199 -> 0$
//  50200 -> 0$
// +50201 -> 0$
//  50202 -> 0$
// +50203 -> 0$
//  50204 -> 0$
//  50205 -> 0$

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*	ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucashoulmann <lucashoulmann@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/14 10:00:34 by lhoulman         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	n;

	n = 0;
	if (nb <= 0)
		return (2);
	while (!ft_is_prime(nb + n))
		n++;
	return (nb + n);
}
//Logic : check if given number nb is prime, else increment index num 

/*int main (void)
{
	printf("%d\n", ft_find_next_prime(2147483647));
	printf("%d\n", ft_find_next_prime(356011));
	printf("%d\n", ft_find_next_prime(39947));
	printf("%d\n", ft_find_next_prime(24589));
	printf("%d\n", ft_find_next_prime(100890));
	printf("%d\n", ft_find_next_prime(394779));
	printf("%d\n", ft_find_next_prime(205341));
	printf("%d\n", ft_find_next_prime(39966));
	printf("%d\n", ft_find_next_prime(125478));
	printf("%d\n", ft_find_next_prime(390696));
	printf("%d\n", ft_find_next_prime(257585));
	return (0);
}*/

//Moulinette
// 2147483647 -> 2147483647$
// +356011 -> 356023$
// 39947 -> 39953$
// +24589 -> 24593$
// +100890 -> 100907$
// +394779 -> 394787$
// +205341 -> 205357$
// +39966 -> 39971$
// +125478 -> 125497$
// +390696 -> 390703$
// +257585 -> 257591$

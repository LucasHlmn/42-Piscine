/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*	ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucashoulmann <lucashoulmann@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/14 10:00:16 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long long int	nb2;
	long long int	start;
	long long int	mid;
	long long int	end;

	start = 0;
	end = nb;
	nb2 = nb;
	if (nb == 0 || nb == 2)
		return (0);
	if (nb == 1)
		return (1);
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (mid * mid == nb2)
			return (mid);
		if (mid * mid < nb2)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (0);
}
// Logic : set a range where of number used to check the sqr == nb given.
//max range = nb given
//min at 0. Check if sqr of midpoint is < or > than nb and change the range 
/*int main ()
{
	printf("%d\n", ft_sqrt(-3486));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(1640045925));
	printf("%d\n", ft_sqrt(2147395600));
	printf("%d\n", ft_sqrt(2147483646));
	printf("%d\n", ft_sqrt(2040961329));
	printf("%d\n", ft_sqrt(1158777153));
	printf("%d\n", ft_sqrt(1317544804));
	printf("%d\n", ft_sqrt(1378860162));
	printf("%d\n", ft_sqrt(174530521));
	printf("%d\n", ft_sqrt(1968953947));
	printf("%d\n", ft_sqrt(139358025));
	printf("%d\n", ft_sqrt(1711000510));
	printf("%d\n", ft_sqrt(257121225));
	printf("%d\n", ft_sqrt(667574383));
	return (0);
}*/
// Moulinette result
//qrt of -3486 is 0
// sqrt of 0 is 0
// sqrt of 1 is 1
// sqrt of 2 is 0
// sqrt of 1640045925 is 0
// sqrt of 2147395600 is 46340
// sqrt of 2147483646 is 0
// sqrt of 2040961329 is 45177
// sqrt of 1158777153 is 0
// sqrt of 1317544804 is 36298
// sqrt of 1378860162 is 0
// sqrt of 174530521 is 13211
// sqrt of 1968953947 is 0
// sqrt of 139358025 is 11805
// sqrt of 1711000510 is 0
// sqrt of 257121225 is 16035
// // sqrt of 667574383 is 0

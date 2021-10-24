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

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
	{
		return (nb * (ft_recursive_power(nb, (power - 1))));
	}
	return (nb);
}

// int main ()
// {
// 	printf("%d\n", ft_recursive_power(2,0));
// 	printf("%d\n", ft_recursive_power(2,1));
// 	printf("%d\n", ft_recursive_power(2,2));
// 	printf("%d\n", ft_recursive_power(2,3));
// 	printf("%d\n", ft_recursive_power(2,4));
// 	printf("%d\n", ft_recursive_power(2,100));
// 	printf("%d\n", ft_recursive_power(2,-1));
// 	return (0);
// }
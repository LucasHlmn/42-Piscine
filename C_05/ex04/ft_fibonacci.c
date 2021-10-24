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

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
// int main ()
// {
// 	printf("%d\n", ft_fibonacci(0));
// 	printf("%d\n", ft_fibonacci(1));
// 	printf("%d\n", ft_fibonacci(2));
// 	printf("%d\n", ft_fibonacci(3));
// 	printf("%d\n", ft_fibonacci(4));
// 	printf("%d\n", ft_fibonacci(5));
// 	printf("%d\n", ft_fibonacci(30));
// 	return (0);
// }
	// int	num[100];

	// num[0] = 0;
	// num[1] = 1;
	// num[2] = 1;
	// num[3] = 2;
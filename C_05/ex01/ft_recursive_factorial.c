/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucashoulmann <lucashoulmann@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/13 18:28:57 by lucashoulma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		return (nb * ft_recursive_factorial((nb - 1)));
	}		
	else
		return (0);
}

// int main ()
// {
// 	printf("%d\n", ft_recursive_factorial(0));
// 	printf("%d\n", ft_recursive_factorial(1));
// 	printf("%d\n", ft_recursive_factorial(2));
// 	printf("%d\n", ft_recursive_factorial(3));
// 	printf("%d\n", ft_recursive_factorial(4));
// 	printf("%d\n", ft_recursive_factorial(10));
// 	printf("%d\n", ft_recursive_factorial(-1));
// 	return (0);
// }
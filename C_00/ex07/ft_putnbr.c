/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucashoulmann <lucashoulmann@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 16:56:07 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/21 09:48:31 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	long long int	nbr2;

	nbr2 = nbr;
	if ((nbr2 < 0 || nbr2 == -2147483648))
	{
		write(1, "-", 1);
		nbr2 *= -1;
	}
	if (nbr2 == -2147483648 )
	{
		if (nbr2 != 0)
		{
			ft_putnbr(-(nbr2 / 10));
			ft_putchar('0' + nbr2 % 10);
		}
	}
	else
	{
		if (nbr2 != 0)
		{
			ft_putnbr(nbr2 / 10);
			ft_putchar('0' + nbr2 % 10);
		}
	}
}

// int	main(void)
// {

// 	ft_putnbr(-2147483648);
// 	ft_putchar('\n');

// 	ft_putnbr(-30);
// 	ft_putchar('\n');

// 	ft_putnbr(2147483647);
// 	ft_putchar('\n');
// return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 22:37:47 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/04 10:35:43 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int	n)
{
	char	negative;
	char	positive;

	negative = 'N';
	positive = 'P';
	if (n < 0 )
	{
		write(1, &negative, 1 );
	}
	else
	{
		write(1, &positive, 1 );
	}
}

int	main(void)
{
	ft_is_negative(5);
	write(1,'\n',2);
	ft_is_negative(-5);
	return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 22:37:47 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/02 23:06:41 by lhoulman         ###   ########.fr       */
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

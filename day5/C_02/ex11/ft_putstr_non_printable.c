/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/07 13:55:47 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char	*str)
{
	int		increment;
	char	*pos;

	increment = 0;
	while (*(str + increment) != '\0')
	{
		pos = (str + increment);
		if (!((32 <= *pos && *pos <= 126)))
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdefg"[*pos / 16]);
			ft_putchar("0123456789abcdefg"[*pos % 16]);
		}
		else
		{
			ft_putchar(*pos);
		}
		increment++;
	}
}

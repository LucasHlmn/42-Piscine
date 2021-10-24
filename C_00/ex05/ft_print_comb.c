/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 22:37:47 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/05 09:56:20 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
void	ft_final_char(char	a, char	b, char	c)
{
	write (1, &a, 1 );
	write (1, &b, 1 );
	write (1, &c, 1 );
}

void	ft_write_3_char(char a, char b, char c)
{
	write (1, &a, 1 );
	write (1, &b, 1 );
	write (1, &c, 1 );
}

void	ft_while_loops(char	a, char	b, char	c)
{
	while (a <= '7' )
	{
		while (b <= '8' )
		{
			while (c <= '9' )
			{
				if (a == '7' && b == '8' && c == '9')
				{
					ft_final_char(a, b, c);
					break ;
				}
				else
				{
					ft_write_3_char(a, b, c);
					write (1, ", ", 2);
					c++;
				}
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
}

void	ft_print_comb(void)
{
	char	number1;
	char	number2;
	char	number3;

	number1 = '0';
	number2 = '1';
	number3 = '2';
	ft_while_loops(number1, number2, number3);
}

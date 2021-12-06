/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2v.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucashoulmann <lucashoulmann@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 22:37:47 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/21 09:47:18 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_write_3_char(char a, char b, char c, char d)
{
	write (1, &a, 1 );
	write (1, &b, 1 );
	write (1, " ", 1 );
	write (1, &c, 1 );
	write (1, &d, 1 );
}

void	ft_if_function(char a, char b, char c, char d)
{
	if (a == '9' && b == '8' && c == '9' && d == '9')
	{
		ft_write_3_char(a, b, c, d);
	}
	else
	{
		ft_write_3_char(a, b, c, d);
		write (1, ", ", 2);
	}
}

void	ft_while_loops(char a, char b, char c, char d)
{
	while (a <= '9' )
	{
		while (b <= '9' )
		{
			while (c <= '9' )
			{
				while (d <= '9' )
				{
					ft_if_function(a, b, c, d);
					d++;
				}
				c++;
				d = '0';
			}
			b++;
			c = a;
			d = b + 1;
		}
		a++;
		b = '0';
		c = a;
		d = b + 1;
	}
}

void	ft_print_comb2(void)
{
	char	number1;
	char	number2;
	char	number3;
	char	number4;

	number1 = '0';
	number2 = '0';
	number3 = '0';
	number4 = '1';
	ft_while_loops(number1, number2, number3, number4);
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return(0);
// } 

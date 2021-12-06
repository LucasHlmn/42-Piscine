/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 22:37:47 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/04 10:22:03 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
void	ft_putchar(char a)
{
	write (1, &a, 1 );
}

void  ft_print_combn(int i)
{
if (i==9)
{
   	ft_putchar('0'+ i);
}
else
{
	ft_putchar('0'+ i);
	i++;
	ft_print_combn(i);
}
}
int main ()
{
	return(0);
}

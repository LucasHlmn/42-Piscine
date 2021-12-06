/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/08 20:14:35 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
void	ft_putstr(char	*str)
{
	while (*str != '\0')
	{
		write (1,str,1);
		str++;
	}
}
int main(void)
{
	char *s1;
	s1="Hello Worldeuwhfdiuwehdiuwhef";
	ft_putstr(s1);
	return (0);
}

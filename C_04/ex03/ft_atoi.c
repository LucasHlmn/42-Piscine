/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucashoulmann <lucashoulmann@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/12 23:43:58 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

bool	ft_in_string(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (true);
		str++;
	}
	return (false);
}

bool	ft_is_num(char c)
{
	return (c <= '9' && c >= '0');
}

bool	ft_is_space(char c)
{
	return (ft_in_string(c, "\t\n\v\f\r "));
}

bool	ft_is_op(char c)
{
	return (c == '+' || c == '-' );
}

int	ft_atoi(char	*str)
{
	int	operator;
	int	final_res;

	final_res = 0;
	operator = 1;
	while (ft_is_space(*str))
	{
		str++;
	}
	while (ft_is_op(*str))
	{
		if (*str == '-')
		{
			operator *= -1;
		}
		str++;
	}
	while (ft_is_num(*str))
	{
		final_res *= 10;
		final_res += (*str - '0');
		str++;
	}		
	return (final_res * operator);
}
/*
int	main(int argc, char **argv)
 {
	 char *str;
	 str="1234";
 	printf("made:%d\n",ft_atoi(str));
 	printf("original:%d",atoi(str));
	return (0);
 }*/

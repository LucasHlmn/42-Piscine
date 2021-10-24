/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/07 13:35:43 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

bool	is_letter(char c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}

bool	is_lowcase(char c)
{
	return ('a' <= c && c <= 'z');
}

bool	is_number(char	c)
{
	return ('0' <= c && c <= '9' );
}

bool	check_prev(char c)
{
	return (is_letter(c) || is_number(c));
}

char	*ft_strcapitalize(char	*str)
{
	int		ind;
	char	temp;
	char	prev_ind;

	ind = 0;
	while (str[ind] != '\0')
	{
		prev_ind = str[ind - 1];
		temp = str[ind];
		if (!(is_letter(prev_ind) || is_number(prev_ind)) && is_lowcase(temp))
		{
			str[ind] = temp - 32;
		}
		else if (!(is_lowcase(temp)) && check_prev(prev_ind) && is_letter(temp))
		{
			str[ind] = temp + 32;
		}
		ind++;
	}
	return (str);
}

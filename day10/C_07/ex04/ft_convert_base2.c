/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucashoulmann <lucashoulmann@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/16 14:53:11 by lucashoulma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

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

bool	ft_is_space(char c)
{
	return (ft_in_string(c, "\t\n\v\f\r "));
}

bool	ft_has_rep_char(char *c)
{
	int	i;
	int	j;

	i = 0;
	while (c[i] != '\0')
	{
		j = i + 1;
		while (c[j] != '\0')
		{
			if (c[i] == c[j])
			{
				return (true);
			}
			j++;
		}
		i++;
	}
	return (false);
}

bool	is_error(char	*c)
{
	if (*c == '\0' || ft_strlen(c) == 1)
		return (true);
	if (ft_has_rep_char(c))
		return (true);
	while (*c != '\0')
	{
		if ((*c == '+') || (*c == '-'))
			return (true);
		if (*c == '\t' || *c == '\n' || *c == '\v' || *c == '\f' || *c == '\r')
			return (true);
		c++;
	}
	return (false);
}

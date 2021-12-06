/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/07 13:44:32 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned	int	ft_strlcpy(char	*dest, char	*src, unsigned int	size)
{
	unsigned int	increment;
	unsigned int	str_len;

	increment = 0;
	str_len = 0;
	while (*(src + str_len) != '\0')
	{
		str_len++;
	}
	if (size != 0)
	{
		while (*(src + increment) != '\0' && increment < (size - 1))
		{
			*(dest + increment) = *(src + increment);
			increment++;
		}
		*(dest + increment) = '\0';
	}
	return (str_len);
}

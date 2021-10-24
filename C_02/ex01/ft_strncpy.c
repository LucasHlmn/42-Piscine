/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/07 09:35:33 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char	*dest, char	*src, unsigned int	n	)
{
	unsigned int	increment;

	increment = 0;
	while (*(src + increment) != '\0' && increment < n)
	{
		*(dest + increment) = *(src + increment);
		increment++;
	}
	while (increment < n)
	{
		*(dest + increment) = '\0';
		increment++;
	}
	return (dest);
}

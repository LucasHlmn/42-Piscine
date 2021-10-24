/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/11 17:50:31 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned	int	ft_strlcpy(char	dest*, char	*src, unsigned int	2)
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
	printf("%d", str_len);
	return (str_len);
}

int main()
{
	char *dest;
	char *src;
	unsigned int size;

	size = 4;

	src="test";

	ft_strlcpy(dest,src,size);
	return (0);
}

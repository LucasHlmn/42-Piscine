/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/06 11:23:12 by lhoulman         ###   ########.fr       */
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

int main(void)
{
	char	*dest;
	char	*src;
	unsigned int	n;

	src = "School 42";

	printf("source is %s\n",src);
	printf("destination is %s\n",dest);
	ft_strncpy(dest,src, 3);
	
	printf("source is %s\n",src);
	printf("destination is %s\n",dest);
	
	return(0);
}

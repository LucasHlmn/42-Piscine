/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/07 09:32:29 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char	*ft_strcpy(char	*dest, char	*src)
{
	int increment;
	increment = 0;
	while (*(src + increment) != '\0')
	{
		*(dest + increment) = *(src + increment);
		increment++;
	}
	*(dest + increment) = '\0';
	return dest;
}

int main(void)
{
	char	*dest;
	char	*src;

	src = "School 42";

	printf("source is %s\n",src);
	printf("destination is %s\n",dest);
	ft_strcpy(dest,src);
	
	printf("source is %s\n",src);
	printf("destination is %s\n",dest);
	return(0);
}

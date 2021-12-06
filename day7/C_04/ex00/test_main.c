/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/12 08:26:28 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int	ft_strlen(char	*s1)
{
	int count;

	count = 0;
	while (*s1 != '\0')
	{
		s1++;
		count++;
	}
	printf("%d",count);
	return (count);
}
int main(void)
{
	char *s1;
	s1="Hello Worldeuwhfdiuwehdiuwhef";

printf("%lu\n",strlen(s1));
	ft_strlen(s1);
	return (0);
}

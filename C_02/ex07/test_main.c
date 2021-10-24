/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/06 17:48:40 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

char	*ft_strupcase(char	*str)
{
	int increment;
	char	temp;

	increment = 0;
	while (str[increment] != '\0')
	{
		temp = str[increment];
		if ('a' <= temp && temp <= 'z')
		{
			str[increment] = temp - 32;
		}
		increment++;
	}
	printf("after: %s\n", str);
	return (str);
}

int main(void)
{
	char	*str_base;
	char	str_upper[10];
	int		index;
	str_base = "School 42";
	index = 0;
	while (index < 10)
	{
		str_upper[index] = str_base[index] + 0;
		index++;
	}
	ft_strupcase(&str_upper[0]);
	printf("before    : %s\n", str_base);
	printf("after: %s\n", str_upper);
return(0);
}

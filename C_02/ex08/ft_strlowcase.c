/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/06 17:54:14 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

char	*ft_strlowcase(char	*str)
{
	int		increment;
	char	temp;

	increment = 0;
	while (str[increment] != '\0')
	{
		temp = str[increment];
		if ('A' <= temp && temp <= 'Z')
		{
			str[increment] = temp + 32;
		}
		increment++;
	}
	return (str);
}

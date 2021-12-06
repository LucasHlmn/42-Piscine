/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/12 14:08:51 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char	*str, char	*to_find)
{
	char	*ptr;
	char	*ptr2;

	if (*to_find == '\0')
		return (str);
	ptr = str;
	ptr2 = to_find;
	while (*ptr != '\0')
	{
		if (*ptr == *ptr2)
		{
			ptr2++;
		}
		ptr++;
		if (*ptr2 == '\0')
		{
			return (ptr - (ptr2 - to_find));
		}
		if (*(ptr) != *ptr2)
		{
			ptr2 = to_find;
		}
	}
	return (NULL);
}

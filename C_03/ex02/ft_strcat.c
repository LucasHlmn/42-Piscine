/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/18 17:17:40 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void	ft_put_src_to_dest(char	*dest, char	*src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}

char	*ft_strcat(char	*dest, char	*src)
{
	char	*dest_tmp;

	dest_tmp = dest;
	if (*dest_tmp == '\0')
	{
		ft_put_src_to_dest(dest_tmp, src);
	}
	else
	{
		while (*dest_tmp != '\0')
		{
			dest_tmp++;
		}
		ft_put_src_to_dest(dest_tmp, src);
	}
	return (dest);
}

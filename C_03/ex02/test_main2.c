/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/08 16:59:38 by lhoulman         ###   ########.fr       */
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
	printf("%s", dest);
	return (dest);
}

int main(void)
{

	char s1[]="hello";
	    char s2[]="Hello again";
		ft_strcat(s1,s2);
		    return (0);
}

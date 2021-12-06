/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/08 12:00:11 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void	ft_put_nsrc_to_dest(char	*dest, char	*src, unsigned int nb)
{
	unsigned int count;

	count = 0;
	while ((*src != '\0') && (count < nb))
	{
		*dest = *src;
		src++;
		dest++;
		count++;
	}
	*dest = '\0';
}

char	*ft_strncat(char	*dest, char	*src, unsigned int	nb)
{
	char	*dest_tmp;

	dest_tmp = dest;
	if (*dest_tmp == '\0')
	{
		ft_put_nsrc_to_dest(dest_tmp, src, nb);
	}
	else
	{
		while (*dest_tmp != '\0')
		{
			dest_tmp++;
		}
		ft_put_nsrc_to_dest(dest_tmp, src, nb);
	}
	printf("%s", dest);
	return (dest);
}

int main(void)
{

	char s1[]="hello";
	    char s2[]="Hello again";

		ft_strncat(s1,s2,5);
		    return (0);
}

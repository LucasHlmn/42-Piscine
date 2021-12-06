/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman </var/mail/lhoulman>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:53:50 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/12 14:54:14 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_str_length(char *dest)
{
	unsigned int	count;

	count = 0;
	while (dest[count] != '\0')
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*dst;
	char			*src_start;
	unsigned int	dst_length;
	unsigned int	max;

	dst = dest;
	src_start = src;
	max = size;
	while (max-- != 0 && *dst != '\0')
		dst++;
	dst_length = dst - dest;
	max = size - dst_length;
	if (max == 0)
		return (dst_length + ft_str_length(src));
	while (*src != '\0')
	{
		if (max > 1)
		{
			*dst++ = *src;
			max--;
		}
		src++;
	}
	*dst = '\0';
	return (dst_length + (src - src_start));
}

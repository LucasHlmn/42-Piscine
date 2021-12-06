/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*	ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucashoulmann <lucashoulmann@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/18 18:05:10 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_put_src_to_dest(char *dest, char *src, char *sep)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	while (*sep != '\0')
	{
		*dest = *sep;
		sep++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char **src, int size, char *sep)
{
	int		i;
	char	*dest_tmp;

	dest_tmp = dest;
	i = 0;
	while (i < (size - 1))
	{
		dest_tmp = ft_put_src_to_dest(dest_tmp, src[i], sep);
		i++;
	}
	dest_tmp = ft_put_src_to_dest(dest_tmp, src[i], "\0");
	return (dest);
}

int	ft_str_full_len(char	**s1, int size)
{
	int	count;
	int	i;
	int	j;

	count = 0;
	i = 0;
	j = 0;
	while (s1[i][j] < size)
	{
		while (s1[i][j] != '\0')
		{
			j++;
			count++;
		}
		i++;
		j = 0;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*final_str;
	int		full_size;

	full_size = (ft_str_full_len(strs, size) + (size * ft_strlen(sep) + 1));
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	final_str = malloc(sizeof(char *) * full_size);
	if (final_str == NULL)
		return (0);
	return (ft_strcat(final_str, strs, size, sep));
}

// int		main(void)
// {
// 	int		index;
// 	char	**strs;
// 	char	*separator;
// 	char	*result;

// 	strs = (char**)malloc(4 * sizeof(strs));
// 	strs[0] = "lol";
// 	strs[1] = "1234";
// 	strs[2] = "poiuic";
// 	strs[3] = "1234";
// 	separator = "";
// 	index = 0;
// 	while (index < 4)
// 	{
// 		result = ft_strjoin(index, strs, separator);
// 		printf("result with size = %d : $%s$\n", index, result);
// 		printf("len = %lu \n", strlen(ft_strjoin(index, strs, separator)));
// 		free(result);
// 		index++;
// 	}
// }

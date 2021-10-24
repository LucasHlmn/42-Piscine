/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucashoulmann <lucashoulmann@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/12 23:45:43 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

int	ft_add_final_res(char *c, char *base, int final_res)
{
	int		i;

	final_res = 0;
	while (*c)
	{
		i = 0;
		while (base[i])
		{
			if (*c == base[i])
			{
				final_res *= ft_strlen(base);
				final_res += i;
			}
			i++;
		}
		c++;
	}
	return (final_res);
}

bool	ft_has_rep_char(char *c)
{
	int	i;
	int	j;

	i = 0;
	while (c[i] != '\0')
	{
		j = i + 1;
		while (c[j] != '\0')
		{
			if (c[i] == c[j])
			{
				return (true);
			}
			j++;
		}
		i++;
	}
	return (false);
}

bool	is_error(char	*c)
{
	if (*c == '\0' || ft_strlen(c) == 1)
		return (true);
	if (ft_has_rep_char(c))
		return (true);
	while (*c != '\0')
	{
		if ((*c == '+') || (*c == '-'))
			return (true);
		if (*c == '\t' || *c == '\n' || *c == '\v' || *c == '\f' || *c == '\r')
			return (true);
		c++;
	}
	return (false);
}

int	ft_atoi_base(char	*str, char	*base)
{
	int		operator;
	int		final_res;
	char	*c;

	operator = 1;
	c = str;
	if (is_error(base))
		return (0);
	while (*c == '\t' || *c == '\n' || *c == '\v' || *c == '\f' || *c == '\r')
	{
		c++;
	}
	while ((*c == '+') || (*c == '-'))
	{
		if (*c == '-')
			operator *= -1;
		c++;
	}
	final_res = ft_add_final_res(str, base, final_res);
	return (final_res * operator);
}
/*int main()
{	
	printf("1st test:%d\n",ft_atoi_base("", "0123456789"));
	printf("2nd test:%d\n",ft_atoi_base("4", "0123456789"));
	printf("3rd test:%d\n",ft_atoi_base("4543", "0123456789"));
	printf("4th test:%d\n",ft_atoi_base("---899", "+ds"));
	printf("5th test:%d\n",ft_atoi_base("--56", "-ju"));
	printf("6th test:%d\n",ft_atoi_base("abc3", "abcui"));
	return(0);
}*/

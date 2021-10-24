/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucashoulmann <lucashoulmann@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/18 18:07:52 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

int		ft_strlen(char *str);
bool	ft_in_string(char c, char *str);
bool	ft_is_space(char c);
bool	ft_has_rep_char(char *c);
bool	is_error(char	*c);

int	g_index = 0;

char	*ft_putnbr_base(int nbr, char *base, char *final_string)
{	
	long long int	nbr2;

	nbr2 = nbr;
	if (nbr2 < 0)
	{
		final_string[g_index] = '-';
		g_index++;
		nbr2 *= -1;
	}
	if (nbr2 != 0)
	{
		ft_putnbr_base(nbr2 / ft_strlen(base), base, final_string);
		final_string[g_index] = base[nbr2 % ft_strlen(base)];
		g_index++;
	}
	final_string[g_index] = '\0';
	return (final_string);
}

int	ft_add_final_res(char *c, char *base, int final_res, int check_base)
{
	int	i;

	final_res = 0;
	while (*c)
	{
		i = 0;
		check_base = 0;
		while (base[i])
		{
			if (*c == base[i])
			{
				final_res *= ft_strlen(base);
				final_res += i;
				check_base++;
			}
			i++;
		}
		if (check_base == 0)
		{
			return (final_res);
			break ;
		}
		c++;
	}
	return (final_res);
}

int	ft_atoi_base(char	*str, char	*base)
{
	int		operator;
	int		final_res;
	char	*c;

	final_res = 0;
	operator = 1;
	c = str;
	while (ft_is_space(*c))
	{
		c++;
	}
	while ((*c == '+') || (*c == '-'))
	{
		if (*c == '-')
			operator *= -1;
		c++;
	}
	final_res = ft_add_final_res(c, base, final_res, 0);
	return (final_res * operator);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num_ft_atoi;
	char	*string;

	if (is_error(base_from) || is_error(base_to))
		return (NULL);
	num_ft_atoi = ft_atoi_base(nbr, base_from);
	string = malloc(sizeof(char) * 32);
	g_index = 0;
	if (num_ft_atoi == 0)
	{
		string[0] = base_to[num_ft_atoi];
		return (string);
	}
	string = ft_putnbr_base(num_ft_atoi, base_to, string);
	return (string);
}

// int main()
// {	
// 	printf("%s\n",ft_convert_base("-2147483648","0123456789","0123456789"));
// 	printf("%s\n",ft_convert_base("2147483647","0123456789","abcdefghij"));
// 	printf("%s\n",ft_convert_base("0","0123456789","0123456789ABCDEF"));
// 	printf("%s\n",ft_convert_base("-0","abcdefghij","0123456789"));
// 	printf("%s\n",ft_convert_base("--+-23r45","0123456789","0123456789ABCDEF"));
// 	printf("-----Error check--------\n");
// 	printf("%s\n",ft_convert_base("   --+-23r45","0123456789","0"));
// 	printf("%s\n",ft_convert_base("   --+-23r45","0123456789",""));
// 	printf("%s\n",ft_convert_base("   --+-23r45","0123456789","01123456789"));
// 	printf("%s\n",ft_convert_base("   --+-23r45","0","0123456789"));
// 	printf("%s\n",ft_convert_base("   --+-23r45","","0123456789"));
// 	printf("%s\n",ft_convert_base("   --+-23r45","01123456789","0123456789"));
// 	return(0);
// }

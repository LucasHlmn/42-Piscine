/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucashoulmann <lucashoulmann@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/12 23:44:22 by lhoulman         ###   ########.fr       */
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

bool	ft_is_op(char c)
{
	return (c == '+' || c == '-' );
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
	if (*c == '\0' || ft_strlen(c) <= 1)
	{
		return (true);
	}
	if (ft_has_rep_char(c))
	{
		return (true);
	}
	while (*c != '\0')
	{
		if (ft_is_op(*c))
		{
			return (true);
		}
		c++;
	}
	return (false);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long int	nbr2;

	nbr2 = nbr;
	if ((nbr2 < 0 || nbr2 == -2147483648) && !is_error(base))
	{
		write(1, "-", 1);
		nbr2 *= -1;
	}
	if (nbr2 == -2147483648 && !is_error(base))
	{
		if (nbr2 != 0 && !is_error(base))
		{
			ft_putnbr_base(-(nbr2 / ft_strlen(base)), base);
			write(1, &base[nbr2 % ft_strlen(base)], 1);
		}
	}
	if (nbr2 >= ft_strlen(base) && !is_error(base))
	{
		ft_putnbr_base(nbr2 / ft_strlen(base), base);
		write(1, &base[nbr2 % ft_strlen(base)], 1);
	}
	else if (!is_error(base))
		write(1, &base[nbr2], 1);
}
/*
int main()
{
	ft_putnbr_base(-2147483648,"0123456789");
	printf("\n");
	ft_putnbr_base(2147483647,"0123456789");
	printf("\n");
	ft_putnbr_base(0,"0123456789");
	printf("\n");
	ft_putnbr_base(-12345,"0123456789");
	printf("\n");
	ft_putnbr_base(2,"0123456789");
	printf("\n");
	ft_putnbr_base(0,"abcdefghij");
	printf("\n");
	ft_putnbr_base(0,"01");
	printf("\n");
	ft_putnbr_base(2,"01");
	printf("\n");
	printf("Error check\none");
	ft_putnbr_base(10,"");
	printf("\ntwo");
	ft_putnbr_base(10,"0");
	printf("\nthree");
	ft_putnbr_base(1,"011");
	printf("\nfour");
	ft_putnbr_base(1,"+0123456789");
	printf("\nfive");
	ft_putnbr_base(1,"-0123456789");
	return(0);
}*/

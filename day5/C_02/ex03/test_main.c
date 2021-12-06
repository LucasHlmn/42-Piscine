/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/06 15:25:59 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

int	ft_str_is_numeric(char	*str)
{
	char	*pos;
	int		increment;
	int		check;

	check = 0;
	increment = 0;
	while (*(str + increment) != '\0')
	{
		pos = (str + increment);
		if (!(('0' <= *pos && *pos <= '9')))
		{
			check++;
			break ;
		}
		increment++;
	}
	if (check == 0)
	{
		printf("%d",1);
		return (1);
	}
	else
	{
		printf("%d",0);
		return (0);
	}
}

int main()
{
	char *str;
	str="re";
	printf("string is: %s\n",str);
	ft_str_is_numeric(str);
	return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/07 00:22:27 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

int	ft_str_is_printable(char	*str)
{
	int		increment;
	int		check;
	char	*pos;

	check = 0;
	increment = 0;
	while (*(str + increment) != '\0')
	{
		pos = (str + increment);
		if (!((32 <= *pos && *pos <= 126)))
		{
			check++;
			break ;
		}
		increment++;
	}
	if (check == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

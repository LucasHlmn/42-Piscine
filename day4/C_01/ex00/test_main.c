/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/04 16:16:06 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int	*nbr)
{
	*nbr = 42;
}

int main(void)
{
	int a;
	ft_ft(&a);
	printf("%d",a);
	return(0);
}
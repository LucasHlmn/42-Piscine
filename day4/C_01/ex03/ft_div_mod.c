/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/04 14:33:12 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int	a, int	b, int	*div, int	*mod)
{
	*div = a / b;
	*mod = a % b;
}

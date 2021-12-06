/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/04 15:15:38 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	temp_a;
	int	temp_b;

	temp_a = *a / *b;
	temp_b = *a % *b;
	*a = temp_a;
	*b = temp_b;
}

int	main(void)
{
	int	a = 32;
	int	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n%d", a, b);
	return (0);

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*	ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucashoulmann <lucashoulmann@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/22 17:34:23 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int		i;
	int		haut;
	int		bas;

	i = 0;
	haut = 0;
	bas = 0;
	while (i < lenght - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			haut++;
		if ((*f)(tab[i], tab[i + 1]) <= 0)
			bas++;
		i++;
	}
	if (haut == i || bas == i)
		return (1);
	return (0);
}

/*int	ft_sort(int a, int b)
{
	if (a < b)
		return (-1);
	if (a == b)
		return (0);
	else
		return (1);
}
 int	main(void)
 {
 	int tab[7] = {1, 2, 3, 4, 5, 6, 7};
 	printf("is sorted? %d\n", ft_is_sort(tab, 7, &ft_sort));
 	int tab2[7] = {10, 9, 9, 8, 7, 5, 2};
 	printf("is sorted? %d\n", ft_is_sort(tab2, 7, &ft_sort));
 }*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/05 15:11:56 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int	*tab, int	size)
{
	int	temp;
	int	index;

	index = 0;

	while (index < size/2)
	{
	temp = tab[index];
	tab[index] = tab[size - 1 - index];//logic, if size 10, then last position is 9 position. so original position = size -1.  new index= original position - index(i.e 9 --> 0, 8-->1 etc.)
	tab[size - 1 - index] = temp;
	index++;

	}
}

int	main()
{
	int tab_size = 10;
	int *tab;
	int index;
	index = 0;
	printf("table is:\n");
	while (index < tab_size)
	{
		tab[index] = index;
		printf("%d\n", tab[index]);
		index++;
	}
	printf("BEFORE:value at position 0 in table is:%d\n",tab[0]);
	ft_rev_int_tab(&tab[0], tab_size);
	printf("AFTER: value at position 0 is:%d\n",tab[0]);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*	ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucashoulmann <lucashoulmann@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/18 18:04:13 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	array_size;
	int	index;
	int	*buffer;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	array_size = max - min;
	buffer = malloc(array_size * sizeof(int));
	if (buffer == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	index = 0;
	while (index < array_size)
	{
		buffer[index] = min + index;
		index++;
	}
	return (array_size);
}

// void	print_array(int numbers[], int size)
// {
// 	int index;

// 	printf("[ ");
// 	index = 0;
// 	while (index < size)
// 	{
// 		printf("%d", numbers[index]);
// 		if (index != size - 1)
// 		{
// 			printf(", ");
// 		}
// 		index++;
// 	}
// 	printf(" ]");
// }

// int		main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*range;
// 	int	array_size;

// 	min = 4053;
// 	max = 4053;
// 	array_size = ft_ultimate_range(&range, min, max);
// 	printf("min = %d, max = %d -> (array size = %d) ", min, max, array_size);
// 	print_array(range, array_size + 2);
// }
// Image:
//      **range                *range                buffer 
//     +---+                 +---+                +---+
// pt: |   | --------------->|   | pt[0] -------->|   | pt[0][0]
//     +---+                 +---+                +---+
//                           			          |   | pt[0][1]
//                           		               +---+
//                           			          |   | pt[0][2]
//                           		               +---+
//                          		                ...
//                           		               +---+
//                           			          |   | pt[0][9]
//                          		               +---+

// run_test(3067, -2524, 0);
//         run_test(4053, 4053, 0);
//         run_test(2147483647, -1112, 0);
//         run_test(0, 0, 0);
//         run_test(0, 1, 1);
//         run_test(0, 166, 166);
//         run_test(15, 166, 151);
//         run_test(16, 17, 1);
//         run_test(1, 2, 1);
//         run_test(3, 3, 0);
//         run_test(4, 8, 4);
//         run_test(7, 9, 2);
//         run_test(8, 12, 4);
//         run_test(10, 13, 3);
//         run_test(-5, 16, 21);
//         run_test(-1, 19, 20);

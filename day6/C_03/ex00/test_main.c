/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/08 16:56:43 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int	ft_strcmp(char	*s1, char	*s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	printf("%d",*(unsigned  char*)s1 - *(unsigned   char*)s2);
	return (*(unsigned	char*)s1 - *(unsigned	char*)s2);
}
int main(void)
{
	char *s1;
	char	*s2;
	s1="Hello World";
	s2="Hello School 42!";

printf("%d\n",strcmp(s1,s2));
	ft_strcmp(s1,s2);
	return (0);
}

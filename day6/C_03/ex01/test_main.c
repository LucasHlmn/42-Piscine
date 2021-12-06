/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhoulman <lhoulman@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:01:25 by lhoulman          #+#    #+#             */
/*   Updated: 2021/10/09 12:47:59 by lhoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int	ft_strncmp(char	*s1, char	*s2, unsigned int	n)
{
		while ((*s1 != '\0') && (*s2 != '\0') && (0 < n))
		{
			if (*s1 != *s2)
				break ;
			s1++;
			s2++;
			n--;
		}
		if (n == )
		{
			printf("%d\n",0);
			return (0);
		}
		else
		{printf("%c\n",*(unsigned char *)s1);
		printf("%c\n", *(unsigned char *)s2);
		printf("%d\n:",*(unsigned char *)s1 - *(unsigned char *)s2);
		return (*(unsigned char *)s1 - *(unsigned char *)s2);}
}
int main()
{
	char *s1;
	char *s2;
	unsigned int n;

	s1="dsaw";
	s2="dsa";

	n=0;
	printf("%d\n",strncmp(s1,s2,n));
	ft_strncmp(s1,s2,n);
	return(0);

}

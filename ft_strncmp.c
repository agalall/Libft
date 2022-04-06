/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalall <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:23:06 by agalall           #+#    #+#             */
/*   Updated: 2021/10/05 22:15:10 by agalall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp( const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n-- > 1 && (unsigned char)*s1 == (unsigned char)*s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if ((unsigned char)*s1 == (unsigned char)*s2)
		return (0);
	else
		return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
int main(void)
{
	char str1[] = "abDef\0d";
	char str2[] = "abDef\0c";
	printf("%d\n",strncmp(str1,str2,8));
	printf("%d\n",ft_strncmp(str1,str2,8));
}
*/

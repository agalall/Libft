/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalall <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:26:50 by agalall           #+#    #+#             */
/*   Updated: 2021/10/05 21:06:51 by agalall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t			i;

	i = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char str1[] = "abcd\0e";
	char str2[] = "abcd\0d";
	printf("%d\n", memcmp(str1,str2,6));
	printf("%d\n", ft_memcmp(str1,str2,6));
}
*/

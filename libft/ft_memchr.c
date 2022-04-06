/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalall <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:25:11 by agalall           #+#    #+#             */
/*   Updated: 2021/09/29 16:25:27 by agalall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	while (n-- > 0)
	{
		p = (unsigned char *)s;
		if (*p == (unsigned char)c)
		{
			return (p);
		}
		s++;
	}
	return (NULL);
}
/*
int main(void)
{
	const char b[] = "abcde";
	const char c[] = "abcde";
	printf("%s\n", memchr(b,100,7));
	printf("%s\n", ft_memchr(c,100,7));
}
*/

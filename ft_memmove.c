/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalall <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:09:11 by agalall           #+#    #+#             */
/*   Updated: 2021/10/05 21:22:13 by agalall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*a;
	char	*b;
	size_t	n;

	n = 0;
	a = (char *)src;
	b = (char *)dst;
	if (src < dst)
	{
		n = len;
		while (n > 0)
		{
			n--;
			b[n] = a[n];
		}
	}
	else
		ft_memcpy(b, a, len);
	return (dst);
}

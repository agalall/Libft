/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalall <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:06:57 by agalall           #+#    #+#             */
/*   Updated: 2021/10/05 17:37:04 by agalall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*a;
	char	*b;
	size_t	i;

	i = 0;
	if (!dst)
		return (NULL);
	a = (char *)dst;
	b = (char *)src;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}
/*int main(void)
{
	char dest[] = "oldstring";
	const char src[] = "nestring";
	printf("before memcpy dest = %s, src = %s\n", dest, src);
	ft_memcpy(dest, src, 9);
	printf("afrter memcpy dest = %s, src = %s\n", dest, src);
	return(0);
}
*/

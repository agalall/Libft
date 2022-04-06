/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalall <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:17:21 by agalall           #+#    #+#             */
/*   Updated: 2021/09/29 16:21:41 by agalall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	if (s[i + 1] == c)
		return ((char *)s + (i + 1));
	else
		return (NULL);
}
/*int main(void)
{
	const char b[] = "abcdb";
	const char c[] = "abcdb";
	printf("%s\n",strrchr(b,0));
	printf("%s\n",ft_strrchr(c,0));
}
*/

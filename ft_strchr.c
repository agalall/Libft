/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalall <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:15:10 by agalall           #+#    #+#             */
/*   Updated: 2022/01/23 16:02:51 by agalall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == c)
		return ((char *)s + i);
	else
		return (NULL);
}
/*
int main(void)
{
	const char b[] = "abcde";
	const char c[] = "abcde";
	printf("%s\n",strchr(b,101));
	printf("%s\n",ft_strchr(c,101));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalall <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:39:16 by agalall           #+#    #+#             */
/*   Updated: 2021/10/05 20:43:01 by agalall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_substrr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;

	i = 0;
	s2 = malloc(len + 1);
	if (!s2)
		return (NULL);
	while (s[start] && i < len)
		s2[i++] = s[start++];
	s2[len] = 0;
	return (s2);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	size_t	beg;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	beg = 0;
	while (s1 && ft_strchr(set, s1[beg]))
		beg++;
	end = ft_strlen(s1) - 1;
	while (end && ft_strchr(set, s1[end]))
		end--;
	if (end >= beg)
		len = end - beg + 1;
	else
		len = 0;
	return (ft_substrr(s1, beg, len));
}
/*
int main(void)
{
	char arr[] = "zyzyxvxvaaaaabbbbaaaazzxvxvzyzy";
	char *arr2;
	arr2 = ft_strtrim(arr, "zyxv");
	printf("%s\n", arr2);
	printf("%lu\n", strlen(arr2));
}
*/

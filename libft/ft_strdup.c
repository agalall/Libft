/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalall <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:33:47 by agalall           #+#    #+#             */
/*   Updated: 2021/12/13 15:02:35 by agalall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;
	int		size;

	i = 0;
	size = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(char) * size + 1);
	if (!s2)
		return (NULL);
	while (i < size)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
int main(void)
{
	char *str = "Helloworld";
	char *result;

	result = ft_strdup(str);
	printf("The string : %s\n", result);
	return (0);
}
*/

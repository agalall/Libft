/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalall <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:53:14 by agalall           #+#    #+#             */
/*   Updated: 2021/09/29 17:09:42 by agalall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int num)
{
	size_t	len;

	if (num <= 0 )
		len = 1;
	else
		len = 0;
	while (num != 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

int	ft_to_positive(int num)
{
	if (num < 0)
		return (-num);
	else
		return (num);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	int		sign;

	if (n < 0)
		sign = -1;
	else
		sign = 1;
	len = ft_len(n);
	s = (char *)malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (0);
	s[len] = '\0';
	len--;
	while (len >= 0)
	{
		s[len] = '0' + ft_to_positive(n % 10);
		n = ft_to_positive(n / 10);
		len--;
	}
	if (sign == -1)
		s[0] = '-';
	return (s);
}
/*int main(void)
{
	int	num;
	num = 12345;
	printf("integer: %i\n", num);
	printf("Ascii: %s\n", ft_itoa(num));
}
*/

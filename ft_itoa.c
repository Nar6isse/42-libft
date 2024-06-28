/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouchet <ebouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:05:16 by ebouchet          #+#    #+#             */
/*   Updated: 2023/11/13 14:39:32 by ebouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nb_len(int n)
{
	int	len;

	len = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		nb_len;
	long	temp_nb;

	i = 0;
	temp_nb = (long)n;
	nb_len = ft_nb_len(temp_nb);
	str = malloc(nb_len * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	if (temp_nb < 0)
	{
		str[i] = '-';
		temp_nb *= -1;
	}
	while (temp_nb > 9)
	{
		str[nb_len - i - 1] = temp_nb % 10 + '0';
		temp_nb = temp_nb / 10;
		i++;
	}
	str[nb_len - i - 1] = temp_nb % 10 + '0';
	str[nb_len] = '\0';
	return (str);
}

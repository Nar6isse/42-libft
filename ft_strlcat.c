/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouchet <ebouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:45:43 by ebouchet          #+#    #+#             */
/*   Updated: 2023/11/02 17:42:26 by ebouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	i;
	unsigned int	j;
	unsigned int	full_length;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dest[j] && j < size)
		j++;
	full_length = j + ft_strlen(src);
	if (size > 0)
	{
		dest_len = ft_strlen(dest);
		while (dest_len < size - 1 && src[i] != '\0')
		{
			dest[dest_len] = src[i];
			dest_len++;
			i++;
		}
		dest[dest_len] = '\0';
	}
	return (full_length);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouchet <ebouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:16:43 by ebouchet          #+#    #+#             */
/*   Updated: 2023/11/02 17:40:22 by ebouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src_copy;
	unsigned char	*dest_copy;

	i = 0;
	src_copy = (unsigned char *) src;
	dest_copy = (unsigned char *) dest;
	if ((dest_copy == 0 && src_copy == 0) || n == 0)
		return (dest_copy);
	if (src < dest)
	{
		i = n - 1;
		while ((long long) i >= 0)
		{
			dest_copy[i] = src_copy[i];
			i--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest_copy);
}

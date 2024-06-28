/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouchet <ebouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:05:51 by ebouchet          #+#    #+#             */
/*   Updated: 2023/11/02 17:15:36 by ebouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src_copy;
	unsigned char	*dest_copy;

	i = 0;
	src_copy = (unsigned char *) src;
	dest_copy = (unsigned char *) dest;
	if ((dest_copy == 0 && src_copy == 0) || n == 0)
		return (dest_copy);
	while (i < n)
	{
		dest_copy[i] = src_copy[i];
		i++;
	}
	return (dest_copy);
}

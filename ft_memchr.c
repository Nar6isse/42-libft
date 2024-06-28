/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouchet <ebouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:17:26 by ebouchet          #+#    #+#             */
/*   Updated: 2023/11/02 18:12:03 by ebouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_copy;	
	unsigned char	c_copy;

	i = 0;
	s_copy = (unsigned char *) s;
	c_copy = (unsigned char) c;
	if (n == 0)
		return (NULL);
	while (i < n - 1 && s_copy[i] != c_copy)
	{
		i++;
	}
	if (s_copy[i] == c_copy)
		return ((void *)(&s_copy[i]));
	return (0);
}

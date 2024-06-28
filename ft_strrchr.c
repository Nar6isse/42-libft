/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouchet <ebouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:05:27 by ebouchet          #+#    #+#             */
/*   Updated: 2023/11/13 14:44:24 by ebouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	*s_copy;

	s_copy = (unsigned char *) s;
	i = ft_strlen((const char *)s_copy);
	while (s_copy[i] != (unsigned char) c && i > 0)
	{
		i--;
	}
	if (s_copy[i] == (unsigned char) c)
		return ((char *) &s_copy[i]);
	return (NULL);
}

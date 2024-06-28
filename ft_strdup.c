/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouchet <ebouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:44:44 by ebouchet          #+#    #+#             */
/*   Updated: 2023/11/02 17:34:10 by ebouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dest;
	char	*src_cpy;

	src_cpy = (char *)src;
	dest = malloc(ft_strlen(src_cpy) * sizeof(char) + 1);
	i = 0;
	if (dest == NULL)
		return (NULL);
	while (src_cpy[i])
	{
		dest[i] = src_cpy[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

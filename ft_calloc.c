/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouchet <ebouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:49:26 by ebouchet          #+#    #+#             */
/*   Updated: 2023/11/10 15:56:18 by ebouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char				*mem;
	unsigned long long	sz;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if ((long long)nmemb < 0 || (long long)size < 0)
		return (NULL);
	sz = nmemb * size;
	if (sz > MAX_UNSIGNED_LONG)
		return (NULL);
	mem = malloc(sz);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, (size_t)sz);
	return (mem);
}

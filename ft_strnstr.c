/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouchet <ebouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:38:40 by ebouchet          #+#    #+#             */
/*   Updated: 2023/11/10 16:52:08 by ebouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	j;
	size_t	i;

	i = 0;
	if (len == 0 && big == NULL)
		return (NULL);
	if (ft_strlen(little) == 0)
		return ((char *) big);
	while (*big && i < len)
	{
		j = 0;
		while (little[j] && i + j < len && (little[j] == big[j]))
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *) big);
		else
		{
			big++;
			i++;
		}
	}
	return (0);
}

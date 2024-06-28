/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouchet <ebouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:05:11 by ebouchet          #+#    #+#             */
/*   Updated: 2023/11/10 15:59:42 by ebouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while ((unsigned char) s[i] != (unsigned char) c
		&& (unsigned char) s[i] != '\0')
	{
		i++;
	}
	if ((unsigned char) s[i] == (unsigned char) c)
		return ((char *)&s[i]);
	return (NULL);
}

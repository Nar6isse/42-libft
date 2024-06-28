/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouchet <ebouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:05:37 by ebouchet          #+#    #+#             */
/*   Updated: 2023/11/10 17:02:01 by ebouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*s_cpy;

	i = 0;
	if (!s || !f)
		return (NULL);
	s_cpy = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (s_cpy == NULL)
		return (NULL);
	while (s[i])
	{
		s_cpy[i] = f(i, s[i]);
		i++;
	}
	s_cpy[i] = '\0';
	return (s_cpy);
}

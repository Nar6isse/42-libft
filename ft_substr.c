/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouchet <ebouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:03:38 by ebouchet          #+#    #+#             */
/*   Updated: 2023/11/10 16:52:08 by ebouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;	
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start < 0 || start >= ft_strlen(s))
		len = 0;
	else if (len + start > (ft_strlen(s)))
		len = ft_strlen(s + start);
	new_s = malloc((len + 1) * sizeof(char));
	if (new_s == NULL)
		return (NULL);
	while (i < len)
	{
		new_s[i] = s[start];
		i++;
		start++;
	}
	new_s[i] = '\0';
	return (new_s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouchet <ebouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:00:14 by ebouchet          #+#    #+#             */
/*   Updated: 2023/11/13 14:37:59 by ebouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_b_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_s1;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!set || !s1)
		return (NULL);
	while (ft_b_strchr(set, s1[i]) == 1)
		s1++;
	i = ft_strlen(s1);
	while (ft_b_strchr(set, s1[i - 1]) == 1 && i > 0)
		i--;
	new_s1 = malloc((i * sizeof(char)) + 1);
	if (new_s1 == NULL)
		return (NULL);
	while (j < i)
	{
		new_s1[j] = s1[j];
		j++;
	}
	new_s1[j] = '\0';
	return (new_s1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouchet <ebouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:02:59 by ebouchet          #+#    #+#             */
/*   Updated: 2023/11/13 14:37:10 by ebouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cnt_words(char const *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			cnt++;
		i++;
	}
	return (cnt);
}

static int	ft_cnt_letters(char const *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i] && s[i] != c)
	{
		cnt++;
		i++;
	}
	return (cnt);
}

static char	*ft_fill_tab(char const *src, int *pos, char sep, char **sp_s)
{
	int		i;
	char	*dest;

	i = 0;
	dest = ft_calloc((ft_cnt_letters((src + *pos), sep) + 1), sizeof(char));
	if (dest == NULL)
	{
		while (sp_s[i])
		{
			free(sp_s[i]);
			i++;
		}
		free(sp_s);
		return (NULL);
	}
	while (src[*pos] && src[*pos] != sep)
	{
		dest[i] = src[*pos];
		i++;
		(*pos)++;
	}
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**sp_s;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	sp_s = ft_calloc((ft_cnt_words(s, c) + 1), sizeof(char *));
	if (sp_s == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			sp_s[j] = ft_fill_tab(s, &i, c, sp_s);
			if (sp_s[j] == NULL)
				return (NULL);
			j++;
		}
		else
			i++;
	}
	sp_s[j] = NULL;
	return (sp_s);
}

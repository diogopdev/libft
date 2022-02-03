/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <jguerrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:46:17 by jguerrei          #+#    #+#             */
/*   Updated: 2022/02/02 15:34:10 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*loc_realloc(char *str)
{
	char	*tm;

	tm = malloc(ft_strlen(str) + 1);
	ft_strlcpy(tm, str, ft_strlen(str) + 1);
	free(str);
	return (tm);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1)
		return (0);
	tmp = malloc(ft_strlen(s1) + 1);
	if (!tmp || !set)
		return (0);
	while (set[j])
		if (s1[i] == set[j++] && (++i))
			j = 0;
	j = 0;
	while (s1[i])
		tmp[j++] = s1[i++];
	j -= 1;
	i = 0;
	while (set[i])
		if (tmp[j] == set[i++] && --j)
			i = 0;
	tmp[j + 1] = 0;
	return (loc_realloc(tmp));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <jguerrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:15:02 by jguerrei          #+#    #+#             */
/*   Updated: 2022/02/02 15:34:09 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ocurrence;

	ocurrence = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			ocurrence = (char *)s + i;
		i++;
	}
	if (c == '\0')
		ocurrence = (char *)s + i;
	return (ocurrence);
}

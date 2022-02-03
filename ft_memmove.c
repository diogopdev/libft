/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguerrei <jguerrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:42:32 by jguerrei          #+#    #+#             */
/*   Updated: 2022/02/03 16:12:41 by jguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*aux;
	const char	*str;

	if (dst == NULL)
		return (NULL);
	aux = dst;
	str = src;
	if (dst <= src)
		while (len--)
			*aux++ = *str++;
	else
	{
		aux = aux + len;
		str = str + len;
		while (len--)
			*--aux = *--str;
	}
	return (dst);
}

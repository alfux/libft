/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuchs <afuchs@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:45:13 by afuchs            #+#    #+#             */
/*   Updated: 2022/02/24 17:44:11 by afuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	*ft_data(const char *s, char c, size_t i, size_t n)
{
	size_t	*data;

	while (*(s + i))
	{
		if (*(s + i++) == c)
		{
			data = ft_data(s, c, i, n + 1);
			if (!data)
				return (0x0);
			*(data + n + 2) = i;
			return (data);
		}
	}
	data = ft_calloc(n + 3, sizeof (size_t));
	if (!data)
		return (0x0);
	*data = n + 1;
	*(data + 1) = 0;
	*(data + n + 2) = i + 1;
	return (data);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	size_t	*data;
	size_t	i;

	data = ft_data(s, c, 0, 0);
	if (!data)
		return (0x0);
	split = ft_calloc(*data + 1, sizeof (char *));
	if (!split)
		return (0x0);
	*(split + *data) = 0x0;
	i = 0;
	while (i++ < *data)
		*(split + i - 1) = ft_substr(s, *(data + i),
				*(data + i + 1) - *(data + i) - 1);
	free(data);
	return (split);
}

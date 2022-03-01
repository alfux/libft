/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuchs <afuchs@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:08:45 by afuchs            #+#    #+#             */
/*   Updated: 2022/02/28 13:58:14 by afuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_rec(const char *s, char (*f)(unsigned int, char), size_t n)
{
	char	*str;

	if (*s)
		str = ft_rec(s + 1, (*f), n + 1);
	else
	{
		str = ft_calloc(n + 1, sizeof (char));
		return (str);
	}
	if (str)
		*(str + n) = (*f)((unsigned int)n, *s);
	return (str);
}

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	return (ft_rec(s, (*f), 0));
}

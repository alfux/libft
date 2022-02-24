/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuchs <afuchs@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:38:39 by afuchs            #+#    #+#             */
/*   Updated: 2022/02/24 17:41:32 by afuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"
#define TEST 8

void	ft_showstr(char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
		write(1, str + i++, 1);
}

void	ft_strcpy(char *dst, char *src)
{
	unsigned int	i;

	i = 0;
	while (*(src + i++))
		*(dst + i - 1) = *(src + i - 1);
	*(dst + i - 1) = '\0';
}

void	print_mem(void *str, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
		printf("%c", *((char *)str + i++));
}

int	main(int argc, char **argv)
{
	char	**cpy;
	size_t	i;

	if (argc != 3)
		return (1);
	i = 0;
	cpy = ft_split(*(argv + 1), **(argv + 2));
	if (!cpy)
		ft_showstr("noob");
	while (*(cpy + i))
	{
		ft_showstr(*(cpy + i));
		free(*(cpy + i++));
		ft_showstr("\n");
	}
	free(*(cpy + i));
	free(cpy);
	return (0);
}

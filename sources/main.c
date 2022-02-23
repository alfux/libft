/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuchs <afuchs@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:38:39 by afuchs            #+#    #+#             */
/*   Updated: 2022/02/23 12:55:18 by afuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"
#define TEST 1

void	ft_showstr(char *str)
{
	unsigned int	i;

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
	if (argc != 3)
		return (1);
	printf("%s - %s = %i\n", *(argv + 1), *(argv + 2), ft_strncmp(*(argv + 1),
			*(argv + 2), TEST));
	printf("%s - %s = %i\n", *(argv + 1), *(argv + 2), strncmp(*(argv + 1),
			*(argv + 2), TEST));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuchs <afuchs@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:38:39 by afuchs            #+#    #+#             */
/*   Updated: 2022/02/24 11:01:02 by afuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"
#define TEST 8

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
	char			*cpy;
	unsigned int	i;

	if (argc != 2)
		return (1);
	i = 0;
	cpy = ft_strdup(*(argv + 1));
	while (*(cpy + i))
		write(1, cpy + i++, 1);
	if (*(cpy + i) == '\0')
		printf("\nYEAHMOFO\n adresse de *argv : %p\n adresse de *cpy : %p\n",
			*(argv + 1), cpy);
	free(cpy);
	return (0);
}

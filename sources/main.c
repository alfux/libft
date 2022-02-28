/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuchs <afuchs@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:38:39 by afuchs            #+#    #+#             */
/*   Updated: 2022/02/28 15:31:03 by afuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <fcntl.h>
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

void	test(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = 'x';
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc != 2)
		return (1);
	fd = open("test", O_RDWR | O_CREAT, 00777);
	if (fd == -1)
		return (1);
	ft_putnbr_fd(ft_atoi(*(argv + 1)), fd);
	if (close(fd) == -1)
		return (1);
	return (0);
}

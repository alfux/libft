/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuchs <afuchs@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:39:11 by afuchs            #+#    #+#             */
/*   Updated: 2022/02/22 18:15:34 by afuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

short			ft_isalpha(char c);
short			ft_isdigit(char c);
short			ft_isalnum(char c);
short			ft_isascii(char c);
short			ft_isprint(char c);
int				ft_strlen(char *str);
void			*ft_memset(void *b, int c, unsigned int len);
void			ft_bzero(void *s, unsigned int n);
void			*ft_memcpy(void *dst, const void *src, unsigned int n);
void			*ft_memmove(void *dst, const void *str, unsigned int n);
unsigned int	ft_strlcpy( char *dst, char *src, unsigned int dstsize);

#endif

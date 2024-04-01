/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:59:48 by ael-maaz          #+#    #+#             */
/*   Updated: 2024/04/01 22:37:00 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <fcntl.h>


int		ft_strlen(char *s);
void	ft_putchar(char c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_putstr(char *s);
char	**ft_split(char const *s, char c);
void	ft_putnbr(int n);

#endif
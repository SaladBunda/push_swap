/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_func1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 19:46:58 by ael-maaz          #+#    #+#             */
/*   Updated: 2024/04/08 18:48:27 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	recurs(long n)
{
	if (n < 10)
		ft_putchar(n + '0');
	else
	{
		recurs(n / 10);
		ft_putchar((n % 10) + '0');
	}
}

void	ft_putnbr(int n)
{
	long	nbr;

	nbr = (long)n;
	if (nbr >= 0)
		recurs(nbr);
	else if (n < 0)
	{
		ft_putchar('-');
		recurs(-nbr);
	}
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i]; 
		i++;
	}
	return (dst);
}

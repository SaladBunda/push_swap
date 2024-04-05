/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:59:48 by ael-maaz          #+#    #+#             */
/*   Updated: 2024/04/05 22:28:37 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <fcntl.h>

typedef struct s_stack
{
	int		*stack;
	int		top;
	int		size;
}	t_stack;

int		ft_strlen(char *s);
void	ft_putchar(char c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_putstr(char *s);
char	**ft_split(char const *s, char c);
void	ft_putnbr(int n);
int		ft_atoi(const char *s);
void	pb(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	bubble_sort(t_stack *a);
void range(t_stack *a, t_stack *b);
int is_sorted(t_stack *a);
void sort_three(t_stack *a);
int get_max_index(t_stack *b);
void sort_four(t_stack *a, t_stack *b);
void sort_five(t_stack *a, t_stack *b);

#endif
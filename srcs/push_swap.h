/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:59:48 by ael-maaz          #+#    #+#             */
/*   Updated: 2024/04/12 20:45:27 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int		*stack;
	int		top;
	int		size;
}	t_stack;

void	ft_putchar(char c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_putstr(char *s);
void	ft_putnbr(int n);
void	pb(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	bubble_sort(t_stack *a);
void	range(t_stack *a, t_stack *b);
void	sort_three(t_stack *a);
void	sort_five(t_stack *a, t_stack *b);
void	sort_four(t_stack *a, t_stack *b);
int		ft_strlen(char *s);
char	**ft_split(char const *s, char c);
int		ft_atoi(char *s, int *error);
int		is_sorted(t_stack *a);
int		get_max_index(t_stack *b);
int		get_range(int size);

#endif
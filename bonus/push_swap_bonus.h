/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:59:48 by ael-maaz          #+#    #+#             */
/*   Updated: 2024/04/17 21:55:35 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

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
void	rrr(t_stack *a, t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	ss(t_stack *a, t_stack *b);
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
void	ft_strncat(char *dst, char *src, int size);
void	*ft_memfunc(void *b, void *s, int c, size_t len);
char	*ft_strdup(char *s1);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strchr(const char *s, int c);
char	*get_next_line(int fd, int *error);
int		fcmp(char *s1, char *s2);
int		read_input(t_stack *a, t_stack *b);

#endif
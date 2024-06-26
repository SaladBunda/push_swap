/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 02:34:02 by ael-maaz          #+#    #+#             */
/*   Updated: 2024/04/05 23:02:35 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack *a, t_stack *b)
{
	if (a->top > -1)
	{
		b->top++;
		b->stack[b->top] = a->stack[a->top];
		a->top--;
		ft_putstr("pb\n");
	}
}

void	pa(t_stack *a, t_stack *b)
{
	if (b->top > -1)
	{
		a->top++;
		a->stack[a->top] = b->stack[b->top];
		b->top--;
		ft_putstr("pa\n");
	}
}

void	sa(t_stack *a)
{
	int	tmp;

	if (a->top > 0)
	{
		tmp = a->stack[a->top];
		a->stack[a->top] = a->stack[a->top -1];
		a->stack[a->top -1] = tmp;
		ft_putstr("sa\n");
	}
}

void	sb(t_stack *b)
{
	int	tmp;

	if (b->top > 0)
	{
		tmp = b->stack[b->top];
		b->stack[b->top] = b->stack[b->top - 1];
		b->stack[b->top -1] = tmp;
		ft_putstr("sb\n");
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 02:34:02 by ael-maaz          #+#    #+#             */
/*   Updated: 2024/04/09 01:55:07 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	pb(t_stack *a, t_stack *b)
{
	if (a->top > -1)
	{
		b->top++;
		b->stack[b->top] = a->stack[a->top];
		a->top--;
	}
}

void	pa(t_stack *a, t_stack *b)
{
	if (b->top > -1)
	{
		a->top++;
		a->stack[a->top] = b->stack[b->top];
		b->top--;
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
	}
}

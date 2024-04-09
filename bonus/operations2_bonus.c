/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:37:55 by ael-maaz          #+#    #+#             */
/*   Updated: 2024/04/09 01:55:23 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rra(t_stack *a)
{
	int	tmp;
	int	i;

	i = 0;
	if (a->top > 0)
	{
		tmp = a->stack[0];
		while (i < a->top)
		{
			a->stack[i] = a->stack[i + 1];
			i++;
		}
		a->stack[a->top] = tmp;
	}
}

void	rrb(t_stack *b)
{
	int	tmp;
	int	i;

	i = 0;
	if (b->top > 0)
	{
		tmp = b->stack[0];
		while (i < b->top)
		{
			b->stack[i] = b->stack[i + 1];
			i++;
		}
		b->stack[b->top] = tmp;
	}
}

void	ra(t_stack *a)
{
	int	tmp;
	int	i;

	i = a->top;
	if (a->top > 0)
	{
		tmp = a->stack[a->top];
		while (i > 0)
		{
			a->stack[i] = a->stack[i - 1];
			i--;
		}
		a->stack[0] = tmp;
	}
}

void	rb(t_stack *b)
{
	int	tmp;
	int	i;

	i = b->top;
	if (b->top > 0)
	{
		tmp = b->stack[b->top];
		while (i > 0)
		{
			b->stack[i] = b->stack[i - 1];
			i--;
		}
		b->stack[0] = tmp;
	}
}

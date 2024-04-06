/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 01:07:40 by ael-maaz          #+#    #+#             */
/*   Updated: 2024/04/06 02:07:10 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_index(t_stack *x)
{
	int	i;
	int	max[2];

	max[0] = x->stack[x->top];
	i = x->top;
	max[1] = i;
	while (i >= 0)
	{
		if (max[0] < x->stack[i])
		{
			max[0] = x->stack[i];
			max[1] = i;
		}
		i--;
	}
	return (max[1]);
}

int	get_median(t_stack *b)
{
	int	i;

	i = (b->top + 1) / 2;
	return (i);
}

void	pushing_back(t_stack *a, t_stack *b, int median, int index)
{
	while (b->top > -1)
	{
		median = get_median(b);
		index = get_max_index(b);
		if (index < median)
		{
			while (index != b->top)
			{
				rrb(b);
				index = get_max_index(b);
			}
			pa(a, b);
		}
		else
		{
			while (index != b->top)
			{
				rb(b);
				index = get_max_index(b);
			}
			pa(a, b);
		}
	}
}

void	push_to_b(t_stack *a, t_stack *b, int rng)
{
	int	min;
	int	max;

	min = 0;
	while (a->top > -1)
	{
		max = min + rng;
		if (a->stack[a->top] >= min && a->stack[a->top] <= max)
		{
			pb(a, b);
			if (max < a->size)
				min++;
		}
		else if (a->stack[a->top] > max)
		{
			ra(a);
		}
		else if (a->stack[a->top] < min)
		{
			pb(a, b);
			rb(b);
			if (max < a->size)
				min++;
		}
	}
}

void	range(t_stack *a, t_stack *b)
{
	if (a->size > 500)
		push_to_b(a, b, 38);
	else if (a->size <= 501 && a->size > 101)
		push_to_b(a, b, 33);
	else if (a->size <= 101 && a->size > 30)
		push_to_b(a, b, 15);
	else if (a->size <= 30 && a->size > 5)
		push_to_b(a, b, 7);
	else if (a->size == 5)
		sort_five(a, b);
	else if (a->size == 4)
		sort_four(a, b);
	else if (a->size == 3)
		sort_three(a);
	else if (a->size == 2)
		sa(a);
	pushing_back(a, b, 0, 0);
}

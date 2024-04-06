/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:57:20 by ael-maaz          #+#    #+#             */
/*   Updated: 2024/04/05 23:06:34 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *a)
{
	int	i;

	i = a->top;
	while (is_sorted(a) == 1)
	{
		i = a->top;
		if (a->stack[i] < a->stack[i - 1] && is_sorted(a) == 1)
			rra(a);
		else if (a->stack[i] > a->stack[i - 1] && is_sorted(a) == 1)
			sa(a);
	}
}

int	get_min_index(t_stack *x)
{
	int	i;
	int	min[2];

	min[0] = x->stack[x->top];
	i = x->top;
	min[1] = i;
	while (i >= 0)
	{
		if (min[0] > x->stack[i])
		{
			min[0] = x->stack[i];
			min[1] = i;
		}
		i--;
	}
	return (min[1]);
}

void	sort_four(t_stack *a, t_stack *b)
{
	int	i;

	i = get_min_index(a);
	while (i != a->top)
	{
		if (i > 1)
		{
			ra(a);
		
		}
		else
		{
			rra(a);
			
		}
		i = get_min_index(a);
	}
	pb(a, b);
	// printf("pb\n");
	sort_three(a);
	pa(a, b);
	// printf("pa\n");
}

void	sort_five(t_stack *a, t_stack *b)
{
	int	i;

	i = get_min_index(a);
	while (i != a->top)
	{
		if (i > 2)
		{
			ra(a);
			// printf("ra\n");
		}
		else
		{
			rra(a);
			// printf("rra\n");
		}
		i = get_min_index(a);
	}
	pb(a, b);
	// printf("pb\n");
	sort_four(a, b);
	pa(a, b);
	// printf("pa\n");
}

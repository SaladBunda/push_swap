/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 01:07:40 by ael-maaz          #+#    #+#             */
/*   Updated: 2024/04/05 22:29:04 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_max_index(t_stack *x)
{
	int i;
	int max[2];
	max[0] = x->stack[x->top];
	i = x->top;
	max[1] = i;
	while(i >= 0)
	{
		if(max[0] < x->stack[i])
		{
			max[0] = x->stack[i];
			max[1] = i;
		}
		i--;
	}
	return (max[1]);

}

int get_median(t_stack *b)
{
	int i;
	
	i = (b->top + 1)/2;
	return (i);
}
void pushing_back(t_stack *a, t_stack *b)
{
	int median;
	int index;

	index = 0;
	while(b->top > -1)
	{
		median = get_median(b);
		index = get_max_index(b);
		if(index < median)
		{
			while(index != b->top)
			{
				rrb(b);
				printf("rrb\n");
				index = get_max_index(b);
			}
			pa(a,b);
			printf("pa\n");
		}
		else
		{
			while(index != b->top)
			{
				rb(b);
				printf("rb\n");
				index = get_max_index(b);
			}
			pa(a,b);
			printf("pa\n");
		}
	}
}

void push_to_b(t_stack *a, t_stack *b, int rng)
{
	int min;
	int max;

	min = 0;
	while(a->top > -1)
	{
		max = min + rng;
		if(a->stack[a->top] >= min && a->stack[a->top] <= max)
		{
			pb(a,b);
			printf("pb\n");
			if(max < a->size)
				min++;
		}
		else if(a->stack[a->top] > max)
		{
			ra(a);
			printf("ra\n");
		}
		else if (a->stack[a->top] < min)
		{
			pb(a,b);
			rb(b);
			printf("pb\nrb\n");
			if (max < a->size)
				min++;
		}
	}
}

void range(t_stack *a, t_stack *b)
{
	if (a->size > 500)
		push_to_b(a, b, 38);
	else if(a->size <= 500 && a->size > 100)
		push_to_b(a, b, 33);
	else if (a->size <= 100 && a->size > 30)
		push_to_b(a, b, 15);
	else if (a->size <= 30 && a->size > 5)
		push_to_b(a, b, 8);
	else if (a->size == 5)
		sort_five(a, b);
	else if (a->size == 4)
		sort_four(a, b);
	else if (a->size == 3)
		sort_three(a);
	else if (a->size == 2)
	{
		sa(a);
		printf("sa\n");
	}
	pushing_back(a, b);
}
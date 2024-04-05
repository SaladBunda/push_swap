/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 01:07:40 by ael-maaz          #+#    #+#             */
/*   Updated: 2024/04/04 23:58:58 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_max_index(t_stack *b)
{
	int i;
	int max[2];
	max[0] = b->stack[b->top];
	i = b->top;
	max[1] = i;
	while(i >= 0)
	{
		if(max[0] < b->stack[i])
		{
			max[0] = b->stack[i];
			max[1] = i;
		}
		i--;
	}
	// printf("max is :%d\nindex is:%d\n",max[0],max[1]);
	return (max[1]);

}

int get_median(t_stack *b)
{
	int i;
	
	i = (b->top + 1)/2;
	// printf("median is:%d\n",i);
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

void range(t_stack *a, t_stack *b)
{
	int min;
	int rng;
	int max;
	min = 0;
	if(a->size <= 500 && a->size > 100)
		rng = 33;
	else if (a->size <= 100 && a->size > 50)
		rng = 15;
	else if (a->size <= 50 && a->size > 5)
		rng = 5;
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
			if(max < a->size)
				min++;
		}
	}
	pushing_back(a, b);
}
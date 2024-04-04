/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 01:07:40 by ael-maaz          #+#    #+#             */
/*   Updated: 2024/04/04 01:58:02 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	else if (a->size <= 50 && a->size > 10)
		rng = 5;
	while(a->top > -1)
	{
		printf("a->top=%d\n",a->top);
		max = min + rng;
		if(a->stack[a->top] >= min && a->stack[a->top] <= max)
		{
			pb(a,b);
			if(max < a->size)
				rng++;
		}
		else if(a->stack[a->top] > max)
			ra(a);
		else
		{
			pb(a,b);
			rb(b);
			if(max < a->size)
				rng++;
		}
	}
}
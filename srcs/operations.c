/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 02:34:02 by ael-maaz          #+#    #+#             */
/*   Updated: 2024/04/03 02:44:08 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pb(t_stack *a, t_stack *b)
{
	if(a->top > -1)
	{
		b->top++;
		b->stack[b->top] = a->stack[a->top];
		a->top--;
	}
}

void pa(t_stack *a, t_stack *b)
{
	if(b->top > -1)
	{
		a->top++;
		a->stack[a->top] = b->stack[b->top];
		b->top--;
	}
}
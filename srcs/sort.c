/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:46:57 by ael-maaz          #+#    #+#             */
/*   Updated: 2024/04/09 02:43:34 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *a)
{
	int	i;

	i = 0;
	while (i < a->top)
	{
		if (a->stack[i] < a->stack[i + 1])
			return (1);
		i++;
	}
	return (0);
}

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sort(int *arr, int size)
{
	int	swapped;
	int	i;

	i = 0;
	swapped = 1;
	while (swapped > 0)
	{
		swapped = 0;
		i = 0;
		while (i < size - 1)
		{
			if (arr[i] > arr[i + 1])
			{
				swap(&arr[i], &arr[i + 1]);
				swapped = 1;
			}
			i++;
		}
		size--;
	}
}

void	put_indexes(int *arr, t_stack *a)
{
	int	i;
	int	j;

	i = 0;
	while (i < a->size)
	{
		j = 0;
		while (j < a->size)
		{
			if (a->stack[i] == arr[j])
			{
				a->stack[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
}

void	bubble_sort(t_stack *a)
{
	int	*arr;
	int	i;

	i = 0;
	arr = malloc(sizeof(int) * a->size);
	if (!arr)
		return ;
	while (i < a->size)
	{
		arr[i] = a->stack[i];
		i++;
	}
	sort(arr, a->size);
	put_indexes(arr, a);
	free(arr);
}

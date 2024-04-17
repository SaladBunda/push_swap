/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:58:38 by ael-maaz          #+#    #+#             */
/*   Updated: 2024/04/17 18:20:57 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	mallocing(t_stack *a, t_stack *b, int *error)
{
	a->stack = malloc(sizeof(int) * a->size);
	if (!a->stack)
		*error = 1;
	b->size = a->size;
	b->stack = malloc(sizeof(int) * b->size);
	if (!b->stack)
		*error = 1;
	b->top = -1;
}

int	fill_stack(char **av, int ac, t_stack *stack_a, int i)
{
	int		j;
	int		k;
	char	**arg;
	int		error;

	error = 0;
	k = stack_a->size - 1;
	stack_a->top = -1;
	while (++i < ac)
	{
		j = -1;
		if (av[i][0] == 0)
			error = 1;
		arg = ft_split(av[i], ' ');
		if (!arg[0])
			error = 1;
		while (arg[++j])
		{
			stack_a->top++;
			stack_a->stack[k--] = ft_atoi(arg[j], &error);
			free(arg[j]);
		}
		free(arg);
	}
	return (error);
}

int	duplicates(t_stack stack_a)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack_a.size)
	{
		j = 0;
		while (j < i)
		{
			if (stack_a.stack[j] == stack_a.stack[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	init_stacks(char **av, int ac, t_stack *stack_a, t_stack *stack_b)
{
	int		i;
	int		j;
	char	**arg;
	int		error;

	i = 0;
	stack_a->size = 0;
	while (++i < ac)
	{
		j = -1;
		arg = ft_split(av[i], ' ');
		while (arg[++j])
		{
			stack_a->size++;
			free(arg[j]);
		}
		free(arg);
	}
	mallocing(stack_a, stack_b, &error);
	if (error == 1)
		return (1);
	error = fill_stack(av, ac, stack_a, 0);
	return (error);
}

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;

	if (ac > 1)
	{
		if (init_stacks(av, ac, &a, &b) == 1)
			return (free(a.stack), free(b.stack), write(2, "Error\n", 6), 0);
		if (duplicates(a) == 0)
			return (free(a.stack), free(b.stack), write(2, "Error\n", 6), 0);
		bubble_sort(&a);
		if (read_input(&a, &b) == -1)
			return (free(a.stack), free(b.stack), write(2, "Error\n", 6), 0);
		if (is_sorted(&a) == 0 && b.top == -1)
			return (free(a.stack), free(b.stack), write(1, "OK\n", 3), 0);
		else
			return (free(a.stack), free(b.stack), write(1, "KO\n", 3), 0);
		free(a.stack);
		free(b.stack);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:58:38 by ael-maaz          #+#    #+#             */
/*   Updated: 2024/04/06 02:53:07 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	test_argv(char **argv, int argc)
// {
// 	int	i;
// 	int	j;

// 	i = 1;
// 	while (i < argc)
// 	{
// 		j = 0;
// 		while (argv[i][j])
// 		{
// 			if ((argv[i][j] < '0' || argv[i][j] > '9')
// 			&& argv[i][j] != ' ' && argv[i][j] != '-')
// 				return (0);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (1);
// }

void	fill_stack(char **av, int ac, t_stack *stack_a, int i)
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
		arg = ft_split(av[i], ' ');
		while (arg[++j])
		{
			stack_a->top++;
			stack_a->stack[k--] = ft_atoi(arg[j], &error);
		}
	}
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

void	init_stacks(char **av, int ac, t_stack *stack_a, t_stack *stack_b)
{
	int		i;
	int		j;
	char	**arg;

	i = 0;
	stack_a->size = 0;
	while (++i < ac)
	{
		j = -1;
		arg = ft_split(av[i], ' ');
		while (arg[++j])
			stack_a->size++;
	}
	stack_a->stack = malloc(sizeof(int) * stack_a->size);
	stack_b->size = stack_a->size;
	stack_b->stack = malloc(sizeof(int) * stack_b->size);
	stack_b->top = -1;
	fill_stack(av, ac, stack_a, 0);
	return ;
}

// void	print_stacks(t_stack a,t_stack b)
// {
// 	printf("-----------------stack a-----------\n");
// 	while(a.top >= 0)
// 		printf("%d\n", a.stack[a.top--]);
// 	printf("-----------------stack b------------\n");
// 	while(b.top >= 0)
// 		printf("%d\n", b.stack[b.top--]);
// }

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;

	if (ac > 1)
	{
		// if (test_argv(av, ac) == 1)
		// {
			init_stacks(av, ac, &a, &b);
			if (duplicates(a) == 0)
				return (write(2, "Error\n", 6), 0);
			if (is_sorted(&a) == 0)
				return (0);
			bubble_sort(&a);
		// 	range(&a, &b);
		// }
		// else
		// 	write(2, "Error\n", 6);
	}
}

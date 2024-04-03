/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:58:38 by ael-maaz          #+#    #+#             */
/*   Updated: 2024/04/03 02:00:53 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int test_argv(char **argv, int argc)
{
	int i = 1;
	int j;
	while(i < argc)
	{
		j = 0;
		while(argv[i][j])
		{
			
			if((argv[i][j]< '0' || argv[i][j] >'9') && argv[i][j] != ' ' && argv[i][j] != '-')
				return 0;
			j++;
		}
		i++;
	}
	return 1;
}

void fill_stack(char **av, int ac, t_stack *stack_a)
{
	int i = 0;
	int j ;
	int k = ;
	stack_a->top = -1;
	char **arg;
	while(++i < ac)
	{
		j = -1;
		arg = ft_split(av[i], ' ');
		while(arg[++j])
		{
			stack_a->top++;
			stack_a->stack[k++] = ft_atoi(arg[j]);
		}
	}
	int l = 0;
	while(l < stack_a->size)
		printf("%d\n",stack_a->stack[l++]);
}

void something(char **av, int ac, t_stack *stack_a)
{
	// printf("ac = %d\n", ac);
	int i = 0;
	int j;
	char **arg;
	stack_a->size = 0;
	while(++i < ac)
	{
		j = -1;
		arg = ft_split(av[i], ' ');
		while(arg[++j])
			stack_a->size++;
	}
	stack_a->stack = malloc(sizeof(int) * stack_a->size);
	// printf("%d\n", stack_a->size);
	fill_stack(av,ac,stack_a);
	return ;
}

int	main(int ac, char **av)
{
	t_stack a;
	// t_stack b;
	if (ac > 1)
	{
		if(test_argv(av, ac) == 1)
		{
			write(1, "valid\n", 6);
			something(av, ac, &a);
		}
		else
			write(1, "Error\n", 6);
	}
	else
		write(2, "Invalid Arguments\n",18);
}
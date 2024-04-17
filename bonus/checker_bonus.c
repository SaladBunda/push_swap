/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 02:48:47 by ael-maaz          #+#    #+#             */
/*   Updated: 2024/04/14 22:47:27 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	test_line(char *str, t_stack *a, t_stack *b)
{
	if (fcmp(str, "pa\n") == 0)
		pa(a, b);
	else if (fcmp(str, "pb\n") == 0)
		pb(a, b);
	else if (fcmp(str, "sa\n") == 0)
		sb(a);
	else if (fcmp(str, "sb\n") == 0)
		sb(b);
	else if (fcmp(str, "ss\n") == 0)
		ss(a, b);
	else if (fcmp(str, "ra\n") == 0)
		ra(a);
	else if (fcmp(str, "rb\n") == 0)
		rb(b);
	else if (fcmp(str, "rr\n") == 0)
		rr(a, b);
	else if (fcmp(str, "rra\n") == 0)
		rra(a);
	else if (fcmp(str, "rrb\n") == 0)
		rrb(b);
	else if (fcmp(str, "rrr\n") == 0)
		rrr(a, b);
	else
		return (-1);
	return (0);
}

int	read_input(t_stack *a, t_stack *b)
{
	char	*line;
	int		error;

	error = 0;
	while (error != -1)
	{
		line = get_next_line(0, &error);
		if (!line)
			break ;
		if (line[0] == '\0')
			break ;
		if (test_line(line, a, b) == -1)
			return (free(line),-1);
		free(line);
	}
	if (error == -1)
		return (-1);
	return (1);
}

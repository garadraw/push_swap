/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:19:04 by vsimeono          #+#    #+#             */
/*   Updated: 2022/02/02 22:47:04 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	more_than_int(int argc, char **argv)
{
	while (--argc > 0)
		if (ft_atoi(argv[argc]) < INT_MIN || ft_atoi(argv[argc]) > INT_MAX)
			return (1);
	return (0);
}

int	has_duplicates(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	more_than_digits(int argc, char **argv)
{
	int	i;

	while (--argc)
	{
		i = 0;
		while (argv[argc][i])
		{
			if (ft_isdigit(argv[argc][i]) || argv[argc][i] == '-' || \
				argv[argc][i] == '+')
				i++;
			else
				return (1);
		}
	}
	return (0);
}

int		is_sorted(t_stack ** stack)
{
	t_stack		*temp;
	int			i;
	int			count;

	i = 1;
	count = len_stack(stack);
	while(temp->next != NULL)
	{
		temp = temp->next;
		if (i == temp->index)
			i++;
	}
	if (i == count)
		return (1);
	return (0);
}
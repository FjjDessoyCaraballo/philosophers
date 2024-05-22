/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:23:30 by fdessoy-          #+#    #+#             */
/*   Updated: 2024/05/08 14:49:36 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

// number_of_philosopers (argv[1]) is also the number of forks
// time_to_die self-explanatory (argv[2]) (in miliseconds)
// time_to_eat self-explanatory (argv[3]) (in miliseconds)
// time_to_sleep self-explanatory (argv[4]) (in miliseconds)
// OPTIONAL? number_of_times_each_philosopher_must_eat

void parsing(int argc, char **argv)
{
	count_arg(argc);
	arg_syntax(argv);
	zero_phil(argv);
}

// first I should work to parse the four first arguments
void		count_arg(int argc)
{
	if (argc > 6 || argc < 5)
	{
		ft_putstr_fd(ERR_ARG, 2);
		exit(EXIT_FAILURE);
	}
}

//Only positive integers should be taken into account in all args
void		arg_syntax(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				j++;
			else
			{
				ft_putstr_fd(ERR_SYN, 2);
				exit(EXIT_FAILURE);
			}
		}
		i++;
	}
}

void zero_phil(char **argv)
{
	if (ft_atoi(argv[1]) == 0)
	{
		ft_putstr_fd(ERR_PHIL, 2);
		exit(EXIT_FAILURE);
	}
}
	// printf("argv[0] :%i\n", ft_atoi(argv[0]));
	// printf("argv[1] :%i\n", ft_atoi(argv[1]));
	// printf("argv[2] :%i\n", ft_atoi(argv[2]));
	// printf("argv[3] :%i\n", ft_atoi(argv[3]));
	// printf("argv[4] :%i\n", ft_atoi(argv[4]));
	// printf("argv[5] :%i\n", ft_atoi(argv[5]));
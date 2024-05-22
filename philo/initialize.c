/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:25:25 by fdessoy-          #+#    #+#             */
/*   Updated: 2024/05/08 14:57:05 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	initialize(char **argv, t_info *info)
{
	info->num_of_philos = ft_atoi(argv[1]);
	info->time_to_die = ft_atoi(argv[2]);
	info->time_to_eat = ft_atoi(argv[3]);
	info->time_to_sleep = ft_atoi(argv[4]);
	if (argv[5])
		info->num_times_to_eat = ft_atoi(argv[5]);
	else
		info->num_times_to_eat = 0;
	info->start_time = what_time_is_it();
	printf("argv[5]: %zu\n", info->num_times_to_eat);
}
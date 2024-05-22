/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:05:55 by fdessoy-          #+#    #+#             */
/*   Updated: 2024/05/08 14:53:38 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
/* TO DO:
1. Initialize philo struct (table)
2. */
int main(int argc, char **argv)
{
	t_info info;

	parsing(argc, argv);
	initialize(argv, &info);
	// philosophers(&philo, &prog, argv);
	
	return (0);
}
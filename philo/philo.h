/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:09:48 by fdessoy-          #+#    #+#             */
/*   Updated: 2024/05/08 14:51:08 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

/*************************************************/
/* external libraries ****************************/
/*************************************************/
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <pthread.h>
# include <sys/time.h>
# include <string.h>

/*************************************************/
/* error macro **********************************/
/*************************************************/
# define ERR_MAL "Error: Memory allocation failure\n"
# define ERR_ARG "Error: Wrong number of arguments\n"
# define ERR_SYN "Error: Wrong syntax: provide only positive integers\n"
# define ERR_PHIL "Error: 0 philosophers is an invalid parameter\n"
# define ERR_TIME "Error: gettimeofday() got whack\n"

/*************************************************/
/* structs ***************************************/
/*************************************************/
typedef struct s_info
{
	size_t				time_to_die;
	size_t				time_to_eat;
	size_t				time_to_sleep;
	size_t				num_of_philos;
	size_t				num_times_to_eat;
	size_t				start_time;
}	t_info;

typedef struct s_table
{
	
}			t_table;

/*************************************************/
/* functions *************************************/
/*************************************************/

/* in philosophers.c                             */
// void	philosophers(t_table *philo, t_prog *prog, char **argv);

/* in parsing.c                                  */
void 	parsing(int argc, char **argv);
void	count_arg(int argc);
void	arg_syntax(char **argv);
void 	zero_phil(char **argv);

/* in utils.c                                    */
void	ft_putstr_fd(char *str, int fd);
int		ft_atoi(const char *s);
void	malloc_failure(void *ptr);

/* in utils2.c                                   */
void	*ft_calloc(size_t count, size_t size);
size_t	what_time_is_it(void);

/* in initialize.c                               */
void	initialize(char **argv, t_info *info);

#endif
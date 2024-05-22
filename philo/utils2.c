/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:54:06 by fdessoy-          #+#    #+#             */
/*   Updated: 2024/05/08 12:14:54 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	a;

	a = count * size;
	if (a < count && a < size)
		return (NULL);
	ptr = malloc(a);
	if (!ptr)
		return (NULL);
	if (ptr)
		memset(ptr, 0, a);
	return (ptr);
}

size_t	what_time_is_it(void)
{
	struct timeval	time;

	if(gettimeofday(&time, NULL) == -1)
		ft_putstr_fd(ERR_TIME, 2);
	return (time.tv_sec * 1000 + time.tv_usec / 1000);
}
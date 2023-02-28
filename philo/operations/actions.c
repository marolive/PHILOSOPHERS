/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 08:01:14 by marolive          #+#    #+#             */
/*   Updated: 2023/02/23 19:55:54 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

void sleeping(t_data *data)
{
    print_act(data, "Durminu!");
    usleep(data->time_to_sleep * 1000);
}

void thinking(t_data *data)
{
    print_act(data, "Pensanu!");
}

void eating(t_data *data)
{
    t_philo *philo;
    
    philo = NULL;
    pthread_mutex_lock(&data->mutex_fork[philo->l_fork]);
    pthread_mutex_lock(&data->mutex_fork[philo->r_fork]);
    print_act(data, "pego u gafu!");  
    print_act(data, "pego u gafu!");  
    print_act(data, "comenu!");  
    pthread_mutex_unlock(&data->mutex_fork[philo->l_fork]);
    pthread_mutex_unlock(&data->mutex_fork[philo->r_fork]);
    
}


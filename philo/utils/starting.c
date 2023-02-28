/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   starting.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:55:27 by marolive          #+#    #+#             */
/*   Updated: 2023/02/25 15:36:56 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

void start(int argc, char **argv)
{
    t_philo *philo;
    int i = 1;
   
    //int        number_of_threads;
    int        philos_size;
   // t_philo    *philo;
   // t_philo    *lst_philos;
    t_data    data;

    initial(&data, argc, argv);
    philos_size = data.number_of_philos;
    printf("philos %d\n", philos_size);
    while (i<= philos_size)
    {
        create_philo(&philo, data, philos_size);
        i++;
    }
    
    while (i <= philos_size)
    {
        pthread_create(&philo->philo, NULL, &routine, &philo);
        i++;
    }
    

}
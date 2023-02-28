/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:27:50 by marolive          #+#    #+#             */
/*   Updated: 2023/02/23 21:19:25 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

void *routine(void *arg)
{
    t_data *data;
    
    data = (t_data *)arg;
    while(42)
    {
        eating(data);
        sleeping(data);
        thinking(data);
    }
    
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_act.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:53:44 by marolive          #+#    #+#             */
/*   Updated: 2023/02/24 23:18:32 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

void print_act(t_data *data, char *str)
{
    pthread_mutex_lock(&data->mutex_printf);
    printf("%ld, %s\n", get_time(), str);
    pthread_mutex_unlock(&data->mutex_printf);
}
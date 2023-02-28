/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:57:51 by marolive          #+#    #+#             */
/*   Updated: 2023/02/25 15:26:28 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <pthread.h>
# include <sys/time.h>
/*
typedef struct s_data t_data;

typedef struct s_data
{
    int             time_to_eat;
    int             time_to_die;
    int             time_to_sleep;
    int             number_of_philos;
    int             num_time_eating;
    pthread_mutex_t *mutex_fork;
    pthread_mutex_t mutex_print;
    pthread_mutex_t *mutex_monitor;
}       t_data;

typedef struct  s_philo
{
    int         id;
    int         name_philo;
    int         l_fork;
    int         r_fork;
    long        last_meal;
    t_data      *table;
    pthread_t   philo;
}               t_philo;
*/
typedef struct s_data
{
    time_t             init_t;
    int                number_of_philos;
    int                time_to_die;
    int                time_to_eat;
    int                time_to_sleep;
    int                num_time_eating;
    int                is_dead;
    pthread_mutex_t    *mutex_fork;
    pthread_mutex_t    mutex_printf;
    pthread_mutex_t    fed_the_stomachdded;
    pthread_mutex_t    mutex_is_dead;
    pthread_mutex_t    mutex_last_meal;
}    t_data;

typedef struct s_philo
{
    int                id;
    int                philo_is_full;
    int                number_of_eat;
    int                l_fork;
    int                r_fork;
    long int           first_time;
    long int           last_meal;
    pthread_t          philo;
    struct s_philo     *next;
    t_data             *data;
}    t_philo;

int valid_digit(char **argv);
int validation(int argc, char **argv);
void initial(t_data *data, int argc, char **argv);
void create_philo(t_philo **lst_philo, t_data data, int num);
void value(t_data *data);
void print_act(t_data *data, char *str);
time_t get_time();
void start(int argc, char **argv);
int atoi_ws(const char *str);
void *routine(void *arg);
void eating(t_data *data);
void thinking(t_data *data);
void sleeping(t_data *data);

#endif
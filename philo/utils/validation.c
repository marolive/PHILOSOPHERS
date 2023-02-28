/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:43:07 by marolive          #+#    #+#             */
/*   Updated: 2023/02/23 18:36:31 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

int valid_digit(char **argv)
{
    int i;
    int j;

    i = 1;
    while(argv[i])
    {
        j = 0;
        while (argv[i][j])
        {
            if(argv[i][j] >= '1' && argv[i][j] <= '9')
                return (1);
            j++;
        }
    }
    return (0);
}

int validation(int argc, char **argv)
{
    if (argc != 5 && argc != 6)
    {
        printf("Number of arguments invalid!");
        return (0);
    }
    if(!valid_digit(argv))
    {
        printf("Invalid Digit!");
        return (0);
    }
    return (1);
}

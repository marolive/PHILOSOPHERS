/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_ws.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 08:48:45 by marolive          #+#    #+#             */
/*   Updated: 2023/02/23 20:33:51 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

int	atoi_ws(const char *str)
{
	int			resul;
	int			i;
	int			neg;

	neg = 1;
	resul = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		printf("not's needed sign!\n");
		return (0);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resul = resul * 10 + str[i] - '0';
		i++;
	}
	return (resul * neg);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melee <melee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:56:06 by melee             #+#    #+#             */
/*   Updated: 2023/08/29 14:56:07 by melee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	rotate_left(t_data *data)
{
	double		tmpX;

	tmpX = data->ray.dirX;
	data->ray.dirX = data->ray.dirX * cos(-ROTSPEED) - data->ray.dirY * sin(-ROTSPEED);
	data->ray.dirY = tmpX * sin(-ROTSPEED) + data->ray.dirY * cos(-ROTSPEED);
	tmpX = data->ray.planeX;
	data->ray.planeX = data->ray.planeX * cos(-ROTSPEED) - data->ray.planeY * sin(-ROTSPEED);
	data->ray.planeY = tmpX * sin(-ROTSPEED) + data->ray.planeY * cos(-ROTSPEED);
}

void	rotate_right(t_data *data)
{
	double		tmpX;

	tmpX = data->ray.dirX;
	data->ray.dirX = data->ray.dirX * cos(ROTSPEED) - data->ray.dirY * sin(ROTSPEED);
	data->ray.dirY = tmpX * sin(ROTSPEED) + data->ray.dirY * cos(ROTSPEED);
	tmpX = data->ray.planeX;
	data->ray.planeX = data->ray.planeX * cos(-ROTSPEED) - data->ray.planeY * sin(ROTSPEED);
	data->ray.planeY = tmpX * sin(ROTSPEED) + data->ray.planeY * cos(ROTSPEED);
}
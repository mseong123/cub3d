/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melee <melee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:56:02 by melee             #+#    #+#             */
/*   Updated: 2023/08/29 14:56:03 by melee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	up(t_data *data)
{
	if(ft_strchr("0NSEW", data->map[(int)data->player.posY][(int)(data->player.posX + data->ray.dirX * MOVESPEED * COLLISION_MOD)]))
		data->player.posX += data->ray.dirX * MOVESPEED;
    if(ft_strchr("0NSEW", data->map[(int)(data->player.posY + data->ray.dirY * MOVESPEED * COLLISION_MOD)][(int)data->player.posX])) 
		data->player.posY += data->ray.dirY * MOVESPEED;
}

void	down(t_data *data)
{
	if(ft_strchr("0NSEW", data->map[(int)data->player.posY][(int)(data->player.posX - data->ray.dirX * MOVESPEED * COLLISION_MOD)]))
		data->player.posX -= data->ray.dirX * MOVESPEED;
    if(ft_strchr("0NSEW", data->map[(int)(data->player.posY - data->ray.dirY * MOVESPEED * COLLISION_MOD)][(int)data->player.posX])) 
		data->player.posY -= data->ray.dirY * MOVESPEED;
}

void	left(t_data *data)
{
	if(ft_strchr("0NSEW", data->map[(int)data->player.posY][(int)(data->player.posX + data->ray.dirY * MOVESPEED * COLLISION_MOD)]))
		data->player.posX += data->ray.dirY * MOVESPEED;
    if(ft_strchr("0NSEW", data->map[(int)(data->player.posY - data->ray.dirX * MOVESPEED * COLLISION_MOD)][(int)data->player.posX])) 
		data->player.posY -= data->ray.dirX * MOVESPEED;
}

void	right(t_data *data)
{
	if(ft_strchr("0NSEW", data->map[(int)data->player.posY][(int)(data->player.posX - data->ray.dirY * MOVESPEED * COLLISION_MOD)]))
		data->player.posX -= data->ray.dirY * MOVESPEED;
    if(ft_strchr("0NSEW", data->map[(int)(data->player.posY + data->ray.dirX * MOVESPEED * COLLISION_MOD)][(int)data->player.posX])) 
		data->player.posY += data->ray.dirX * MOVESPEED;
}

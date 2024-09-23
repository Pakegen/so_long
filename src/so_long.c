/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:58:42 by quenalla          #+#    #+#             */
/*   Updated: 2024/09/23 14:17:55 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	so_long(void)
{
	void	*mlx;
	void	*mlx_win;

	mlx = mlx_init();
	if (!mlx)
		return ;
	mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello World!");
	if (!mlx_win)
		return ;
	mlx_loop(mlx);
}

int	main(void)
{
	so_long();
	return (0);
}

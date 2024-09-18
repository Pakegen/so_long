/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testcaca.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quenalla <quenalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:58:42 by quenalla          #+#    #+#             */
/*   Updated: 2024/09/18 14:24:42 by quenalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<fcntl.h>
#include"./mlx.h"
#include<X11/X.h>
#include<X11/keysym.h>

void	test(void)
{
	void	*mlx;
	void	*mlx_win;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello World!");
	mlx_loop(mlx);

}

int	main(void)
{
	test();
	return (0);
}

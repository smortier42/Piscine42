/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:10:40 by smortier          #+#    #+#             */
/*   Updated: 2017/08/18 13:59:44 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		y;

	y = 1;
	while (y < argc)
	{
		str = argv[y];
		i = -1;
		while (str[++i])
		{
			ft_putchar(str[i]);
		}
		ft_putchar('\n');
		y++;
	}
	return (0);
}

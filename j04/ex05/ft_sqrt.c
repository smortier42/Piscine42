/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 20:11:10 by smortier          #+#    #+#             */
/*   Updated: 2017/08/08 14:08:27 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		result;
	int		i;
	int		f;

	result = 0;
	i = 1;
	f = 1;
	if (!nb)
		return (0);
	while (f <= nb)
	{
		f += i;
		i += 2;
		result++;
	}
	return ((result * result == nb) ? result : 0);
}
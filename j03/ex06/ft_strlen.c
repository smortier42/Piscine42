/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 09:40:51 by smortier          #+#    #+#             */
/*   Updated: 2017/08/07 14:46:04 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		nbrchar;

	nbrchar = 0;
	while (*str != '\0')
	{
		nbrchar++;
		str++;
	}
	return (nbrchar);
}

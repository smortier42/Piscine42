/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smortier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 21:50:10 by smortier          #+#    #+#             */
/*   Updated: 2017/08/14 16:32:51 by smortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned	int		i;
	int					res;

	res = 0;
	i = 0;
	while ((i < n) && (s1[i] == s2[i]))
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			return (0);
		if (i + 1 == n)
			return (0);
		i++;
	}
	res = s1[i] - s2[i];
	return (res);
}

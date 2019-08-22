/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcormier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 14:16:22 by mcormier          #+#    #+#             */
/*   Updated: 2019/08/20 10:20:28 by mcormier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int entry;
	int res;

	entry = 0;
	res = 0;
	if (nb < 1)
		return (0);
	while (entry < nb && entry < 46340)
	{
		res = nb - (entry * entry);
		if (res == 0)
			return (entry);
		if (res < 0)
			return (0);
		entry++;
	}
	return (entry);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcormier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 09:38:27 by mcormier          #+#    #+#             */
/*   Updated: 2019/08/15 13:54:06 by mcormier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{

	int	i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122)
			|| (str[i - 1] == ' '))
		{
			str[i] = str[i] - 32;

			while (str[i] != ' ')
			{
				if (str[j] >= 65 && str[j] <= 90)
				{
					str[j] = str[j] + 32;;
					j++;
				}
				i++;
			}
		}
		i++;
	}
	return (str);
}

int		main()
{
	char c[] = "salut je suis moi";
	printf("%s", ft_strcapitalize(c));
	return (0);
}

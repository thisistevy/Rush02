/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-bri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:58:29 by jode-bri          #+#    #+#             */
/*   Updated: 2022/10/01 23:10:54 by jode-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	**alloc_tab(char *str)
{
	char	**tab;
	int	i;
	int	j;

	i = ft_strlen(str);
	if ( i % 3 != 0)
	{
		tab = malloc(sizeof(char *) * ((i / 3 + 1) + 1));
		i = i / 3 + 1;
	}
	else
	{
		tab = malloc(sizeof(char *) * (i / 3 + 1));
		i = i / 3;
	}
	j = -1;
	while (++j < i)
	{
		tab[j] = malloc(sizeof(char) * (3 + 1));
		tab[j][3] = '\0';		
	}
	tab[j] = NULL;
	return (tab);
}

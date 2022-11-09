/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-bri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 23:32:16 by jode-bri          #+#    #+#             */
/*   Updated: 2022/10/02 00:23:50 by jode-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

#include <stddef.h>
#include <stdio.h>


void	fill_tab(char **tab, char *str)
{
	int	i;
	int	j;
	int	a;

	a = ft_strlen(str);
	if (a % 3 != 0)
	{
		j = (a % 3) - 1;
		i = a / 3;
		if (j == 1)
			tab[i][2] = '\0';
		else
			tab[i][1] = '\0';
		goto jump;
	}
	else
		i = a / 3 - 1;
	while (i >= 0)
	{
		j = 2;
jump:
		while (j >= 0)
			tab[i][j--] = str[--a];
		i--;
	}
	for(i = 0; tab[i] != NULL; i++)
		for(j = 0; j < 3 && tab[i][j] != '\0'; j++)
			printf("%c", tab[i][j]);
	printf("\n");
}

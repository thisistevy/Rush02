/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-bri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:38:24 by jode-bri          #+#    #+#             */
/*   Updated: 2022/10/02 17:56:06 by jode-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>


int	ft_strlen(char *str);

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

int     ft_strcmp_modify(char *s1, char *s2)
{
        int     i;

        i = -1;
        while (s1[++i])
                if (s1[i] != s2[i])
                        return (1);
        return (0);
}

char    *ft_strstr(char *str, char *to_find)
{
        int     i;

        i = -1;
        while (str[++i])
                if (str[i] == to_find[0])
                        if (ft_strcmp_modify(to_find, str + i) == 0)
                                return (str + i);
        return ('\0');
}
void	find_numbers(int fd, char *to_find)
{
	char	*lu;
	char	*parse;
	int	i;
	int	ret;
	
	lu = malloc(sizeof(char) * (100 + 1));
	while (ret = read(fd, lu, 100))
	{
		lu[ret] = '\0';
		if (parse = ft_strstr(lu, to_find))
		{
			i = 0;
			lseek(fd, 0, SEEK_SET);
			while (parse[i] != '\n' && parse[i] != '\0')
				i++;
			parse[i] = '\0';
			parse += ft_strlen(to_find) + 2;
			ft_putstr(parse);
			ft_putstr("\n");
			break;
		}
	}
	if (!parse)
		ft_putstr("Dict Error\n");
	free(lu);
}
/*
int	main(int argc,char **argv)
{
	int	i;
	int	fd;
	
	if (argc < 2)
	{	
		ft_putstr("Usage: ./a.out {dictionnaire} {nb1} {nbn}\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == 0)
		ft_putstr("Error\n");
	i = 1;
	while (++i < argc)
		find_numbers(fd, argv[i]);
	close(fd);
	return (0);
}*/

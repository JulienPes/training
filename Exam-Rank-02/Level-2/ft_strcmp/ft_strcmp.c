/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:57:01 by jpes              #+#    #+#             */
/*   Updated: 2023/06/19 14:27:17 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
   unsigned int	i;
	unsigned int	j;


	i = 0;
	j = 0;
	while (s1[i] == s2[i])
		i ++;
	return(s1[i] - s2[i]);
}

// int   main(int	argc, char **argv)
// {
// 	if (argc == 3)
// 	{
// 		printf("La mienne %d\n", ft_strcmp(argv[1], argv[2]));
// 		printf("La vrai %d\n", strcmp(argv[1], argv[2]));
// 	}
// }
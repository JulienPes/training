/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:58:55 by jpes              #+#    #+#             */
/*   Updated: 2023/06/13 16:10:02 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int	i;
	
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == 32 || argv[1][i] == 9)
		{
			i ++;
		}
		while (argv[1][i] != 32 && argv[1][i] != 9 && argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i ++;
		}
	}
	write (1, "\n", 1);
}

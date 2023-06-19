/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:42:36 by jpes              #+#    #+#             */
/*   Updated: 2023/06/19 13:21:27 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char	*str)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	
	
	while (str[i] && (str[i] == 'f' || str[i] == 'r' || str[i] == 't' 
				|| str[i] == 'n' || str[i] == 'v' || str[i] == ' '))
					i ++;
				if (str[i] == '-')
				{
					sign = -1;
					i ++;
				}
				while (str[i] && (str[i] >= '0' && str[i] <= '9'))
				{
					res = res * 10 + (str[i] - 48);
					i ++;
				}
				return (res * sign);		
}

int	main(int	argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			printf("%d", ft_atoi(argv[1]) + ft_atoi(argv[3]));
		if (argv[2][0] == '-')
			printf("%d", ft_atoi(argv[1]) - ft_atoi(argv[3]));
		if (argv[2][0] == '*')
			printf("%d", ft_atoi(argv[1]) * ft_atoi(argv[3]));
		if (argv[2][0] == '/')
			printf("%d", ft_atoi(argv[1]) / ft_atoi(argv[3]));
		if (argv[2][0] == '%')
			printf("%d", ft_atoi(argv[1]) % ft_atoi(argv[3]));
	}
	write(1, "\n", 1);
}
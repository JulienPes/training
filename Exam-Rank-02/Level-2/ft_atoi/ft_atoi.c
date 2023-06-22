/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:25:21 by jpes              #+#    #+#             */
/*   Updated: 2023/06/19 13:55:41 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
   int   res;
   int   sign;
   int   i;

   res = 0;
   sign = 1;
   i = 0;
   while(str[i] && (str[i] == 'f' || str[i] == 'r' || str[i] == 't' 
               || str[i] == 'n' || str[i] == 'v' || str[i] == ' '))
                  i ++;
               if (str[i] == '-')
               {
                  sign = -1;
                  i ++;
               }
               while (str[i] && (str[i] >= '0' && str[i] <= '9'))
               {
                  res = res * 10 + str[i] - '0';
                  i ++;
               }
               return (res * sign);
}

int   main(int argc, char **argv)
{
   if (argc == 2)
      printf("res -> %d\n", ft_atoi(argv[1]));
   else
      return (0);
}
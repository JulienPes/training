/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:29:50 by jpes              #+#    #+#             */
/*   Updated: 2023/06/26 16:41:11 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int   ft_check(char  *str, char  c, int   j)
{
   int   i;
   
   i = 0;
   while(i < j)
   {
      if (str[i] == c)
      {
         return (0);
      }
      i ++;
   }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
   return (1);
}

void ft_compare(char* str1, char *str2)
{
   int   i;
   int   n;

   i = 0;
   while (str1[i])
   {
      n = 0;
      while (str2[n])
      {
         if (str1[i] == str2[n])
         {
            if (ft_check(str1, str1[i], i) == 1)
            {
               write (1, &str1[i], 1);
               break ;
            }
         }
         n ++;
      }
      i ++;
   }
}

// int   main (int   argc, char  **argv)
// {
//    if (argc == 3)
//    {
//       ft_compare(argv[1], argv[2]);
//    }
//    else
//    {
//       write (1, "\n", 1);
//    }
// }


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:55:53 by jpes              #+#    #+#             */
/*   Updated: 2023/06/29 14:25:16 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int   find_last_word (char *str)
{

   int   i;
   int   n;
   int   l;

   i = 0;
   n = 0;
   l = 0;
   
   while (str[i])
      {
         if (str[i + 1] == '\0')
         {
            n = i;
            l = n;
            while (str[n] == ' ' || str[n] == 'f' || str[n] == 'r' 
                     || str[n] == 't' || str[n] == 'n' || str[n] == 'v')
            {
               n --;
               l --;
            }
            while((str[n - 1] != ' ' || str[n - 1] == 'f' || str[n - 1] == 'r' 
                  || str[n - 1] == 't' || str[n - 1] == 'n' || str[n - 1] == 'v') && n -1 >= 0)
            {
               n --;
            }
            return (n);
         }
         i ++;
      }
   return (n);
}

int   main  (int  argc, char  **argv)
{
   int   j;

   j = 0;
   if (argc == 2)
   {
      j = find_last_word (argv[1]);
      while (argv[1][j])
      {
         if (argv[1][j] == ' ')
         {
            break;
         }
         write (1, &argv[1][j], 1);
         j ++;
      }
   }
   write (1, "\n", 1);
}
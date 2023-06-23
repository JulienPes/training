/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:29:50 by jpes              #+#    #+#             */
/*   Updated: 2023/06/23 18:55:50 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int   ft_check(char  c, char  *str)
{
   int   i;
   int   n;

   i = 0;
   n = 0;
   // printf("str -> %s\n", str);  
   //
   //printf("c -> %c\n", c);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
   return (1);
}

void ft_compare(char* str1, char *str2)
{
   int   i;
   int   n;
   int   j;

   i = 0;
   n = 0;
   j = 0;
   while (str1[i])
   {
      while (str2[n])
      {
         if (str1[i] == str2[n] && str1[i] != str1[i + 1] && str2[n] != str2[n + 1])
         {
            if (ft_check(str1[i], str1) == 0)
            {
               //printf("ici");
               break;
            }
            if (ft_check(str1[i], str1) == 1)
            {
               write(1, &str1[i], 1 );
            }
            if (str1[i + 1] == '\0')
               break;
            i ++;
         }
         n ++;
      }
      n = 0;
      i ++;
   }
}

int   main (int   argc, char  **argv)
{
   if (argc == 3)
   {
      ft_compare(argv[1], argv[2]);
   }
   else
   {
      write (1, "\n", 1);
   }
}


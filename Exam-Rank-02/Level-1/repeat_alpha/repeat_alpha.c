/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:09:57 by jpes              #+#    #+#             */
/*   Updated: 2023/06/14 18:01:34 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_alpha_count(char c)
{
   int   count;

   count = 0;
   if (c >= 'a' && c <= 'z')
   {
      count = c - '0' - 48;
   }
   if (c >= 'A' && c <= 'Z')
   {
      count = c - '0' - 16;
   }
   //printf("%d\n", count);
   return (count);
}

int main (int argc, char **argv)
{
   int   i;
   int   j;

   i = 0;
   if (argc != 2)
      write(1, "\n", 1);
   else
      while(argv[1][i])
      {
         j = 0;
         while (j != ft_alpha_count(argv[1][i]))
         {
            write(1, &argv[1][i], 1);
            j ++;
         }
         i ++;
      }
}
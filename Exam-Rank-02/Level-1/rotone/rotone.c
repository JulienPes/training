/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:50:02 by jpes              #+#    #+#             */
/*   Updated: 2023/06/15 12:12:02 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main (int  argc, char  **argv)
{
   int   i;

   i = 0;
   if (argc == 2)
   {
      while(argv[1][i])
      {
         char c;

         c = argv[1][i];
         if ((c >= 'a' && c <= 'y')||(c >= 'A' && c <= 'Y'))
            c += 1;
         else if (c == 'z' || c == 'Z')
            c -= 21;
         write(1 , &c, 1);
         i ++;
      }
   }
   write(1 , "\n", 1);
}


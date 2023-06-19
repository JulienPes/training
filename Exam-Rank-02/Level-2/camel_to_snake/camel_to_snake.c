/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:16:47 by jpes              #+#    #+#             */
/*   Updated: 2023/06/15 17:40:23 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int   main(int argc, char  **argv)
{
   if (argc == 2)
   {
      int   i;
      
      i = 0;
      while(argv[1][i])
      {
         char  c;
         c = argv[1][i];
         if (c >= 65 && c <= 90)
         {
            c += 32;
            write(1, "_", 1);
         }
         write(1, &c, 1);
         i ++;
      }
   }
}
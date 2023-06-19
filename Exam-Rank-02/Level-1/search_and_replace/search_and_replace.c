/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 12:15:45 by jpes              #+#    #+#             */
/*   Updated: 2023/06/15 13:19:28 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int   main (int   argc, char  **argv)
{
   int   i;

   i = 0;
   if (argc == 4)
   {
      while(argv[1][i] && !argv[2][1] && !argv[3][1])
      {
         if (argv[1][i] == argv[2][0])
            argv[1][i] = argv[3][0];
         write(1 ,&argv[1][i ++], 1);
      }
   }
   write(1, "\n", 1);
}
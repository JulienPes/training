/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 09:28:15 by jpes              #+#    #+#             */
/*   Updated: 2023/06/15 09:39:50 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int   main(int argc, char **argv)
{
   int   i;

   i = 0;
   if (argc == 2)
   {
      while (argv[1][i])
         i ++;
      while (i >= 0)
         write(1 , &argv[1][i --], 1);
   }
   write (1, "\n", 1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:43:09 by jpes              #+#    #+#             */
/*   Updated: 2023/06/29 12:27:54 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
   unsigned int one;

   one = 1;
   while (n >= one)
   {
      if (one == n)
      {
         return (1);
      }
      one = one * 2;
   }
   return (0);
}

// int   main (void)
// {
//       printf("%d", is_power_of_2(32));
// }
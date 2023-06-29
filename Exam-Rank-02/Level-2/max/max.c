/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:08:39 by jpes              #+#    #+#             */
/*   Updated: 2023/06/29 16:51:32 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		max(int* tab, unsigned int len)
{
   unsigned int i;

   i = 1;
   if (len == 0)
   {
      return (0);
   }
   while(i < len)
   {
      if (tab[i - 1] > tab[i])
      {
         tab[i] = tab[i - 1];
      }
      i ++;
   }
   return (tab[i - 1]);
}

// int   main(void)
// {
//    int   tableau[] = {156, 25, 127, 139};

//    printf("%d\n", max(tableau, 4));
// }
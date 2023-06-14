/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:09:57 by jpes              #+#    #+#             */
/*   Updated: 2023/06/14 15:16:47 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_alpha_count(char c)
{
   int   count;

   count = 0;
   if (c >= 'a' && c <= 'z')
   {
      printf("ZZZZZ");
   }
   
}

int main (int argc, char **argv)
{
   int   i;

   i = 0;
   if (argc != 2)
      write(1, "\n", 1);
   else
      while(argv[1][i])
      {
         ft_alpha_count(argv[1][i]);
         //printf("%d\n",ft_alpha_count(argv[1][i]));
         i ++;
      }
}
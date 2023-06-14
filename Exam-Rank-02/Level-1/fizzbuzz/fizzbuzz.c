/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:47:56 by jpes              #+#    #+#             */
/*   Updated: 2023/06/14 11:57:13 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void ft_write_num(int number)
{
   char*   str;
   
   str = "0123456789";
   if (number > 9)
      ft_write_num(number / 10);
   write(1, &str[number % 10], 1);
}

int main (void)
{
   int   i;

   i = 1;
   while (i <= 100)
   {
      if (i % 3 == 0 && i % 5 == 0)
         write(1 , "fizzbuzz", 8);
      else if (i % 3 == 0)
         write(1 , "fizz", 4);
      else if (i % 5 == 0)
         write(1 , "buzz", 4);
      else
         ft_write_num(i);
      write (1, "\n", 1);
      i ++;
   }
}
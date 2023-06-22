/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:53:15 by jpes              #+#    #+#             */
/*   Updated: 2023/06/22 12:32:07 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

char *ft_strrev(char *str)
{
   int   i;
   int   length;
   char  temp;

   i = -1;
   length = 0;
   while (str[length])
   {
      length ++;
   }
   while (++i < length / 2)
   {
      temp = str[i];
      str[i] = str[length - 1 - i];
      str[length - 1 - i] = temp;
      
   }
   return (str);
}

// int   main(int argc, char  **argv)
// {
   
//    if (argc == 2)
//    {
//       printf("%s <- argv[1] avant\n", argv[1]);
//       printf("%s <- argv[1] after\n", ft_strrev(argv[1]));
//    } 
// }
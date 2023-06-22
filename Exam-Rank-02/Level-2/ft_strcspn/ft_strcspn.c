/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 14:44:48 by jpes              #+#    #+#             */
/*   Updated: 2023/06/19 15:06:04 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
   size_t   i;

   size_t   j;
   i = 0;
   while (s[i])
   {
      j = 0;
      while (reject[j])
      {
         if (s[i] == reject[j])
         {
            return (i);
         }
         j ++;
      }
      i ++;
   }
   return (i);
}


// int   main (int   argc, char  **argv)
// {
//    if (argc == 3)
//    {
//       printf("%lu\n", ft_strcspn(argv[1], argv[2]));
//       printf("%lu\n", strcspn(argv[1], argv[2]));
//    }
//    else
//       return (0);
// }
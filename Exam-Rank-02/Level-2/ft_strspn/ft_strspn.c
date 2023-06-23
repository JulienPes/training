/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:42:13 by jpes              #+#    #+#             */
/*   Updated: 2023/06/22 15:07:20 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>


size_t	ft_strspn(const char *s, const char *accept)
{
   int   i;
   int   j;
   int   count;
   
   i = 0;
   j = 0;
   count = 0;
   while (s[i] != '\0')
   {
      while (s[i] != accept[j])
      {
         if (accept[j] == '\0')
            return (count);
         j ++;
      }
      if (s[i] == accept[j])
      {
         j = 0;
         count ++;
      }
      i ++;
   }
   return (count);
}

// int   main(int argc, char **argv)
// {
//    if (argc == 1)
//    {
//       printf("La bonne -> %lu\n", strspn("123456", "123456"));
//       printf("La mienne -> %lu\n", ft_strspn("123456", "123456"));
//    }
// }
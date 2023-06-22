/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:37:04 by jpes              #+#    #+#             */
/*   Updated: 2023/06/20 12:52:28 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
   int   i;
   int   j;

   i = 0;
   j = 0;
   if (s1[i] == '\0' || s2[i] == '\0')
      return (NULL);
      while(s1[j])
      {
         if (s1[j] == s2[i])
            return((char *)&s1[j]);
         i ++;
         if (!s2[i])
         {
            i = 0;
            j ++;
         }
      }
   return (NULL);
}

// int   main (int   argc, char  **argv)
// {
//    if (argc == 3)
//    {
//       printf("LA VRAI -> %s\n", strpbrk(argv[1], argv[2]));
//       printf("LA mienne -> %s\n", ft_strpbrk(argv[1], argv[2]));
//    }
// }
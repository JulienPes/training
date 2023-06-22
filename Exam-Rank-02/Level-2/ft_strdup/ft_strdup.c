/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:07:04 by jpes              #+#    #+#             */
/*   Updated: 2023/06/19 15:43:38 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
   int   i;
   int   j;
   char  *ptr;

   i = 0;
   j = 0;
   ptr = NULL;
   while (src[i])
   {
      i ++;
   }
   ptr = malloc(i * 1 * sizeof(char) + 1);
   if(!ptr)
   {
      return ("NULL");
   }
   while (src[j])
   {
      ptr[j] = src[j];
      j ++;
   }
   ptr[j] = '\0';
   return (ptr);
}

// int   main (int   argc, char **argv)
// {
//    if (argc == 2)
//    {
//       //printf("a");
//       printf("%s\n", ft_strdup(argv[1]));
      
//    }
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:06:24 by jpes              #+#    #+#             */
/*   Updated: 2023/06/14 13:19:48 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strcpy(char *s1, char *s2)
{
   int   i;

   i = 0;
   while (s2[i])
   {
      s1[i] = s2[i];
      i ++;
   }
   s1[i] = '\0';
   return (s1);
}

/*
int main (void)
{
   char *s1;

   char s2[] = "abcdef";
   s1 = (malloc(sizeof(char) * strlen(s2) + 1));
   if (!s1)
   {
      return (0);
   }
   printf("%s\n", ft_strcpy(s1, s2));
   printf("%lu\n", strlen(s1));
   s1 = NULL;
   free(s1);
   printf("%s\n", s1);
   //system("leaks ft_strcpy.c");
}
*/
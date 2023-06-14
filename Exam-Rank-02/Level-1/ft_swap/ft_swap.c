/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:35:48 by jpes              #+#    #+#             */
/*   Updated: 2023/06/14 14:05:48 by jpes             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


void	ft_swap(int *a, int *b)
{
   int temp;

   temp = *b;
   *b = *a;
   *a = temp;
}

/*
int main (void)
{
   int   a;
   int   b;

   a = 1;
   b = 9;
   printf("a before -> %d\n", a);
   printf("b before -> %d\n", b);
   ft_swap(&a, &b);
   printf("a after -> %d\n", a);
   printf("b after -> %d\n", b);
}
*/
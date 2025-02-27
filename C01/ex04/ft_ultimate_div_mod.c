/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenaaraujorodrigues2102 <milenaaraujo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:08:49 by milenaarauj       #+#    #+#             */
/*   Updated: 2025/02/27 17:21:25 by milenaarauj      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;
  
    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
}
int main()
{
    int a;
    a = 10;
    int b;
    b = 4;
    ft_ultimate_div_mod(&a, &b);
    printf("divisao:%d resto:%d", a, b);
    return(0);
}
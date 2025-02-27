/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenaaraujorodrigues2102 <milenaaraujo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:36:16 by milenaarauj       #+#    #+#             */
/*   Updated: 2025/02/27 16:52:50 by milenaarauj      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}
int main()
{
    int a;
    a = 4;
    int b;
    b = 2;
    int div;
    int mod;
    ft_div_mod(a, b, &div, &mod);
    printf("a divisao é:%d e o resto:%d", div, mod);
    return(0);
}
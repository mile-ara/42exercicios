/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenaaraujorodrigues2102 <milenaaraujo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:30:18 by milenaarauj       #+#    #+#             */
/*   Updated: 2025/02/27 16:30:19 by milenaarauj      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 100;
}
int main()
{
    int nbr = 50;
    ft_ft(&nbr);
    printf("%d", nbr);
    return(0);
}
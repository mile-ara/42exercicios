/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenaaraujorodrigues2102 <milenaaraujo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:18:53 by milenaarauj       #+#    #+#             */
/*   Updated: 2025/02/27 16:27:09 by milenaarauj      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
    if(n >= 0)
        write(1, "P", 1);
    else
        write(1, "N", 1);
}
int main()
{
    ft_is_negative(42);
    return(0);
}
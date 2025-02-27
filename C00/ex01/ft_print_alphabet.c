/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenaaraujorodrigues2102 <milenaaraujo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:59:35 by milenaarauj       #+#    #+#             */
/*   Updated: 2025/02/26 17:00:36 by milenaarauj      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
    write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}
int main()
{
    ft_print_alphabet();
    return (0);
}
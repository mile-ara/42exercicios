/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenaaraujorodrigues2102 <milenaaraujo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:09:13 by milenaarauj       #+#    #+#             */
/*   Updated: 2025/02/26 17:13:01 by milenaarauj      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}
int main()
{
    ft_print_reverse_alphabet();
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenaaraujorodrigues2102 <milenaaraujo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:14:17 by milenaarauj       #+#    #+#             */
/*   Updated: 2025/02/26 17:14:18 by milenaarauj      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
    write(1, "0123456789", 10);
}
int main()
{
    ft_print_numbers();
    return 0;
}

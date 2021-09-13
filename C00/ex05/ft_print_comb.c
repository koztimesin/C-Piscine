/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 21:26:47 by ksaffron          #+#    #+#             */
/*   Updated: 2021/09/13 21:10:11 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void) {
    char	a;
    char	b;
    char	c;

    a = '0';
    while (++a <= '9') {

        b = '0';

        while (++b <= '9') {
			c = '0';

			while(++c <= '9')
				if (a != '0' || b != '1' || c != '2')
				   	write(1, ", ", 2);
		   	write(1, &a, 1);
            write(1, &b, 1);
            write(1, &c, 1);
        }

    }

}


int main (void){
    ft_print_comb();
    return 0;
}

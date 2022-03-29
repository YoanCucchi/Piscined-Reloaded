/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycucchi <yoan066@yahoo.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:14:27 by ycucchi           #+#    #+#             */
/*   Updated: 2021/11/01 12:22:45 by ycucchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_putchar(char str);

void	ft_print_alphabet(void)

{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}

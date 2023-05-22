/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 09:42:42 by gykoh             #+#    #+#             */
/*   Updated: 2023/02/20 20:04:29 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	j;

	if (argc >= 1)
	{
		j = 0;
		while (argv[0][j] != '\0')
		{
			write(1, &argv[0][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 15:07:56 by aborda            #+#    #+#             */
/*   Updated: 2025/10/11 15:28:58 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_toupper(void)
{
	t_test_int	tests[4];
	size_t		nb_tests;
	int			i;

	tests[0] = (t_test_int){.actual = 'a', .label = "a"};
	tests[1] = (t_test_int){.actual = 'A', .label = "A"};
	tests[2] = (t_test_int){.actual = '0', .label = "0"};
	tests[3] = (t_test_int){.actual = '\n', .label = "\\n"};
	printf("\n========== Test de ft_toupper==========\n");
	nb_tests = sizeof(tests) / sizeof(tests[0]);
	i = 0;
	while (nb_tests > 0)
	{
		assert_eq_int(toupper(tests[i].actual),
				ft_toupper(tests[i].actual), tests[i].label);
		i++;
		nb_tests--;
	}
	printf("----------------------------------------\n");
}


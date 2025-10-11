/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 15:07:56 by aborda            #+#    #+#             */
/*   Updated: 2025/10/11 20:02:53 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_tolower(void)
{
	t_test_int	tests[4];
	size_t		nb_tests;
	int			i;

	tests[0] = (t_test_int){.actual = 'A', .label = "A"};
	tests[1] = (t_test_int){.actual = 'a', .label = "a"};
	tests[2] = (t_test_int){.actual = '0', .label = "0"};
	tests[3] = (t_test_int){.actual = '\n', .label = "\\n"};
	printf("\n========== Test de ft_tolower ==========\n");
	nb_tests = sizeof(tests) / sizeof(tests[0]);
	i = 0;
	while (nb_tests > 0)
	{
		assert_eq_int(tolower(tests[i].actual),
			ft_tolower(tests[i].actual), tests[i].label);
		i++;
		nb_tests--;
	}
	printf("----------------------------------------\n");
}

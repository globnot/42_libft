/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:14:07 by aborda            #+#    #+#             */
/*   Updated: 2025/10/13 12:30:06 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	init_tests(t_test_isascii *tests)
{
	tests[0] = (t_test_isascii)
	{'A', "Upper character (A)"};
	tests[1] = (t_test_isascii)
	{'0', "Digit character (0)"};
	tests[2] = (t_test_isascii)
	{127, "Ascii character (127)"};
	tests[3] = (t_test_isascii)
	{128, "Non-ascii character (128)"};
	tests[4] = (t_test_isascii)
	{-1, "Non-ascii character (-1)"};
	tests[5] = (t_test_isascii)
	{0, "Ascii character (0)"};
	tests[6] = (t_test_isascii)
	{'~', "Ascii character (~)"};
	tests[7] = (t_test_isascii)
	{200, "Non-ascii character (200)"};
}

static void	print_results(const char *label, int expected, int actual)
{
	if ((expected == 0 && actual == 0) || (expected != 0 && actual != 0))
	{
		printf("✅OK | %s \n", label);
		printf("expected: %d | actual: %d\n", expected, actual);
	}
	else
	{
		printf("❌KO | %s \n", label);
		printf("expected: %d | actual: %d\n", expected, actual);
	}
}

void	test_ft_isascii(void)
{
	t_test_isascii		tests[8];
	size_t				i;
	size_t				nb_tests;
	int					std;
	int					ft;

	i = 0;
	nb_tests = sizeof(tests) / sizeof(tests[0]);
	init_tests(tests);
	printf("\n========== Test de ft_isascii==========\n");
	while (nb_tests > i)
	{
		std = isascii(tests[i].c);
		ft = ft_isascii(tests[i].c);
		print_results(tests[i].label, std, ft);
		i++;
	}
	printf("----------------------------------------\n");
}

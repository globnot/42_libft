/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:14:07 by aborda            #+#    #+#             */
/*   Updated: 2025/10/13 12:44:36 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	init_tests(t_test_isprint *tests)
{
	tests[0] = (t_test_isprint)
	{'\0', "NULL character"};
	tests[1] = (t_test_isprint)
	{32, "Printable character (32)"};
	tests[2] = (t_test_isprint)
	{0, "Non-printable character (0)"};
	tests[3] = (t_test_isprint)
	{1, "Non-printable character (1)"};
	tests[4] = (t_test_isprint)
	{126, "Printable character (126)"};
	tests[5] = (t_test_isprint)
	{127, "Non-printable character (127)"};
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

void	test_ft_isprint(void)
{
	t_test_isprint		tests[6];
	size_t				i;
	size_t				nb_tests;
	int					std;
	int					ft;

	i = 0;
	nb_tests = sizeof(tests) / sizeof(tests[0]);
	init_tests(tests);
	printf("\n========== Test de ft_isprint==========\n");
	while (nb_tests > i)
	{
		std = isprint(tests[i].c);
		ft = ft_isprint(tests[i].c);
		print_results(tests[i].label, std, ft);
		i++;
	}
	printf("----------------------------------------\n");
}

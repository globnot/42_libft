/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:14:07 by aborda            #+#    #+#             */
/*   Updated: 2025/10/13 13:01:35 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	init_tests(t_test_strlen *tests)
{
	tests[0] = (t_test_strlen)
	{"", "Empty string"};
	tests[1] = (t_test_strlen)
	{"abc", "String (abc)"};
	tests[2] = (t_test_strlen)
	{"a b c", "String with spaces (a b c)"};
	tests[3] = (t_test_strlen)
	{"abc\n", "String with \\n (abc\\n)"};
	tests[4] = (t_test_strlen)
	{"123456!", "String with digits and special character (!)"};
}

static void	print_results(const char *label, int expected, int actual)
{
	if (expected == actual)
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

void	test_ft_strlen(void)
{
	t_test_strlen		tests[5];
	size_t				i;
	size_t				nb_tests;
	int					std;
	int					ft;

	i = 0;
	nb_tests = sizeof(tests) / sizeof(tests[0]);
	init_tests(tests);
	printf("\n========== Test de ft_strlen==========\n");
	while (nb_tests > i)
	{
		std = strlen(tests[i].s);
		ft = ft_strlen(tests[i].s);
		print_results(tests[i].label, std, ft);
		i++;
	}
	printf("----------------------------------------\n");
}

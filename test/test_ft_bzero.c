/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 21:00:00 by aborda            #+#    #+#             */
/*   Updated: 2025/10/13 15:32:28 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	init_tests(t_test_bzero *tests)
{
	tests[0] = (t_test_bzero)
	{"Hello", 3, "Erases first 3 chars of 'Hello' with '\\0'"};
	tests[1] = (t_test_bzero)
	{"Hello", 0, "Erases 0 chars of 'Hello'"};
	tests[2] = (t_test_bzero)
	{"Hello", 5, "Erases all chars of 'Hello' with '\\0'"};
	tests[3] = (t_test_bzero)
	{"abcdef", 2, "Erases first 2 chars of 'abcdef' with '\\0'"};
	tests[4] = (t_test_bzero)
	{"123456789", 4, "Erases first 4 chars of '123456789' with '\\0'"};
	tests[5] = (t_test_bzero)
	{"", 5, "Erases 5 chars of empty string with '\\0'"};
}

static void	print_results(const char *label, char *expected, char *actual,
				size_t n)
{
	if (memcmp(expected, actual, n) == 0)
	{
		printf("✅OK | %s\n", label);
		printf("expected: \"%s\" | actual: \"%s\"\n", expected, actual);
	}
	else
	{
		printf("❌KO | %s\n", label);
		printf("expected: \"%s\" | actual: \"%s\"\n", expected, actual);
	}
}

void	test_ft_bzero(void)
{
	t_test_bzero	tests[6];
	size_t			i;
	size_t			nb_tests;
	char			std_buf[20];
	char			ft_buf[20];

	i = 0;
	nb_tests = sizeof(tests) / sizeof(tests[0]);
	init_tests(tests);
	printf("\n========== Test de ft_bzero ==========\n");
	while (i < nb_tests)
	{
		strcpy(std_buf, tests[i].s);
		strcpy(ft_buf, tests[i].s);
		bzero(std_buf, tests[i].n);
		ft_bzero(ft_buf, tests[i].n);
		print_results(tests[i].label, std_buf, ft_buf, tests[i].n);
		i++;
	}
	printf("----------------------------------------\n");
}

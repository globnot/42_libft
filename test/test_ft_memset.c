/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 10:26:37 by aborda            #+#    #+#             */
/*   Updated: 2025/10/13 14:42:10 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	init_tests(t_test_memset *tests)
{
	tests[0] = (t_test_memset)
	{"Hello", 'A', 3, "Replace first 3 chars of 'Hello' with 'A'"};
	tests[1] = (t_test_memset)
	{"Hello", 'B', 0, "Replace 0 chars of 'Hello'"};
	tests[2] = (t_test_memset)
	{"Hello", 'C', 5, "Replace all chars of 'Hello' with 'C'"};
	tests[3] = (t_test_memset)
	{"abcdef", 'X', 2, "Replace first 2 chars of 'abcdef' with 'X'"};
	tests[4] = (t_test_memset)
	{"123456789", 0, 4, "Replace first 4 chars of '123456789' with null bytes"};
	tests[5] = (t_test_memset)
	{"", 'Z', 5, "Replace 5 chars of empty string"};
}

static void	print_results(const char *label, char *expected, char *actual)
{
	if (memcmp(expected, actual, strlen(expected) + 1) == 0)
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

void	test_ft_memset(void)
{
	t_test_memset	tests[6];
	size_t			i;
	size_t			nb_tests;
	char			std_buf[20];
	char			ft_buf[20];

	i = 0;
	nb_tests = sizeof(tests) / sizeof(tests[0]);
	init_tests(tests);
	printf("\n========== Test de ft_memset ==========\n");
	while (i < nb_tests)
	{
		strcpy(std_buf, tests[i].s);
		strcpy(ft_buf, tests[i].s);
		memset(std_buf, tests[i].c, tests[i].n);
		ft_memset(ft_buf, tests[i].c, tests[i].n);
		print_results(tests[i].label, std_buf, ft_buf);
		i++;
	}
	printf("----------------------------------------\n");
}

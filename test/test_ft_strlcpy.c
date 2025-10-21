/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 21:01:24 by aborda            #+#    #+#             */
/*   Updated: 2025/10/21 15:13:27 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	init_tests(t_test_strlcpy *tests)
{
	tests[0] = (t_test_strlcpy)
	{"Hello", "World", 6, "Copy full 'World' into 'Hello' (size 6)"};
	tests[1] = (t_test_strlcpy)
	{"Hello", "World", 3, "Copy 2 chars + null byte into 'Hello' (size 3)"};
	tests[2] = (t_test_strlcpy)
	{"", "42", 3, "Copy into empty dest with size 3"};
	tests[3] = (t_test_strlcpy)
	{"abcdef", "", 6, "Copy empty src into 'abcdef'"};
	tests[4] = (t_test_strlcpy)
	{"Hello", "HelloWorld", 5, "Truncate 'HelloWorld' into 'Hello' (size 5)"};
	tests[5] = (t_test_strlcpy)
	{"Hello", "Hi", 0, "Copy 'Hi' with size 0 (no change)"};
}

static void	print_results(const char *label, char *expected, char *actual)
{
	if (strcmp(expected, actual) == 0)
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

void	test_ft_strlcpy(void)
{
	t_test_strlcpy	tests[6];
	size_t			i;
	size_t			nb_tests;
	char			std_buf[20];
	char			ft_buf[20];

	i = 0;
	nb_tests = sizeof(tests) / sizeof(tests[0]);
	init_tests(tests);
	printf("\n========== Test de ft_strlcpy ==========\n");
	while (i < nb_tests)
	{
		memset(std_buf, 0, sizeof(std_buf));
		memset(ft_buf, 0, sizeof(ft_buf));
		strcpy(std_buf, tests[i].dst);
		strcpy(ft_buf, tests[i].dst);
		print_results(tests[i].label, std_buf, ft_buf);
		i++;
	}
	printf("----------------------------------------\n");
}

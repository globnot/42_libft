/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 17:01:24 by aborda            #+#    #+#             */
/*   Updated: 2025/08/04 12:02:21 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*
 assert 
 */
void	assert_eq_int_logical(int expected, int actual, const char *label)
{
	if ((expected != 0 && actual != 0) || (expected == 0 && actual == 0))
		printf("✅ [%s] OK (value: %d)\n", label, actual);
	else
		printf("❌ [%s] KO | expected: %d, actual: %d\n", label, expected, actual);
}

void	assert_eq_int(int expected, int actual, const char *label)
{
	if (expected == actual)
		printf("✅ [%s] OK (value: %d)\n", label, actual);
	else
		printf("❌ [%s] KO | expected: %d, actual: %d\n", label, expected, actual);
}

void	assert_eq_size_t(size_t expected, size_t actual, const char *label)
{
	if (expected == actual)
		printf("✅ [%s] OK (value: %zu)\n", label, actual);
	else
		printf("❌ [%s] KO | expected: %zu, actual: %zu\n", label, expected, actual);
}

void	assert_eq_char(char *expected, char *actual, const char *label)
{
	if (expected == actual)
		printf("✅ [%s] OK (value: %s)\n", label, actual);
	else
		printf("❌ [%s] KO | expected: %s, actual: %s\n", label, expected, actual);
}

void	assert_eq_str(const char *expected, const char *actual, const char *label)
{
	if (strcmp(expected, actual) == 0)
		printf("✅ [%s] OK (value: \"%s\")\n", label, actual);
	else
		printf("❌ [%s] KO\n\texpected: \"%s\"\n\tactual  : \"%s\"\n", label, expected, actual);
}


/*explique moi ca
size_t nb_tests = sizeof(tests) / sizeof(tests[0]);
	* test_ft_isalpha
*/
void	test_ft_isalpha(void)
{
	printf("\n========== Test de ft_isalpha ==========\n");
	assert_eq_int_logical(isalpha(' '), ft_isalpha(' '), "\' \'");
	assert_eq_int_logical(isalpha('A'), ft_isalpha('A'), "A");
	assert_eq_int_logical(isalpha('a'), ft_isalpha('a'), "a");
	assert_eq_int_logical(isalpha('1'), ft_isalpha('1'), "1");
	assert_eq_int_logical(isalpha('!'), ft_isalpha('!'), "!");
	assert_eq_int_logical(isalpha('\n'), ft_isalpha('\n'), "\\n");
	assert_eq_int_logical(isalpha(-1), ft_isalpha(-1), "-1");
	assert_eq_int_logical(isalpha(-42), ft_isalpha(-42), "-42");
	printf("----------------------------------------\n");
}

/*
	* test_ft_isdigit
*/
void	test_ft_isdigit(void)
{
	printf("\n========== Test de ft_isdigit ==========\n");
	assert_eq_int_logical(isdigit(' '), ft_isdigit(' '), "\' \'");
	assert_eq_int_logical(isdigit('1'), ft_isdigit('1'), "1");
	assert_eq_int_logical(isdigit('a'), ft_isdigit('a'), "a");
	assert_eq_int_logical(isdigit('!'), ft_isdigit('!'), "!");
	assert_eq_int_logical(isdigit('\n'), ft_isdigit('\n'), "\\n");
	assert_eq_int_logical(isdigit(-1), ft_isdigit(-1), "-1");
	assert_eq_int_logical(isdigit(-42), ft_isdigit(-42), "-42");
	printf("----------------------------------------\n");
}

/*
	* test_ft_isalnum
*/
void	test_ft_isalnum(void)
{
	printf("\n========== Test de ft_isalnum ==========\n");
	assert_eq_int_logical(isalnum(' '), ft_isalnum(' '), "\' \'");
	assert_eq_int_logical(isalnum('0'), ft_isalnum('0'), "0");
	assert_eq_int_logical(isalnum('9'), ft_isalnum('9'), "9");
	assert_eq_int_logical(isalnum('a'), ft_isalnum('a'), "a");
	assert_eq_int_logical(isalnum('!'), ft_isalnum('!'), "!");
	assert_eq_int_logical(isalnum('\n'), ft_isalnum('\n'), "\\n");
	assert_eq_int_logical(isalnum(-1), ft_isalnum(-1), "-1");
	assert_eq_int_logical(isalnum(-42), ft_isalnum(-42), "-42");
}

/*
	* test_ft_isprint
*/
void	test_ft_isprint(void)
{
	printf("\n========== Test de ft_isprint ==========\n");
	assert_eq_int_logical(isprint(' '), ft_isprint(' '), "\' \'");
	assert_eq_int_logical(isprint(32), ft_isprint(32), "32");
	assert_eq_int_logical(isprint(0), ft_isprint(0), "0");
	assert_eq_int_logical(isprint(1), ft_isprint(1), "1");
	assert_eq_int_logical(isprint(126), ft_isprint(126), "126");
	assert_eq_int_logical(isprint(127), ft_isprint(127), "127");
	printf("----------------------------------------\n");
}

/*
	* test_ft_strlen
*/
typedef struct s_test_ft_strlen {
	const char *actual;
	const char *label;
} t_test_ft_strlen;

void	test_ft_strlen(void)
{
	t_test_ft_strlen	tests[] = {
		{.actual = "", .label = "\"\""},
		{.actual = "abc", .label = "abc"},
		{.actual = "a b c", .label = "a b c"},
		{.actual = "abc\n\tdef", .label = "abc\\n\\tdef"},
		{.actual = "123456!", .label = "123456!"},
	};
	size_t	nb_tests = sizeof(tests) / sizeof(tests[0]);
	int	i = 0;

	printf("\n========== Test de ft_strlen ==========\n");
	while (nb_tests > 0)
	{
		assert_eq_size_t(strlen(tests[i].actual), ft_strlen(tests[i].actual), tests[i].label);
		i++;
		nb_tests--;
	}
	printf("----------------------------------------\n");
}

/*
	* test_ft_strlcpy
*/
void	test_ft_strlcpy(void)
{
	char	src[] = "42";
	size_t	destsize = 0;
	char	dest_std[10] = "xxxxxxxxxx";
	char	dest_ft[10] = "xxxxxxxxxx";

	printf("\n========== Test de ft_strlcpy ==========\n");
	printf("src: %s\ndestsize: %zu\n", src, destsize);
	assert_eq_int(strlcpy(dest_std, src, destsize), ft_strlcpy(dest_ft, src, destsize), "Return values std & ft");
	assert_eq_str(dest_std, dest_ft, "Buffer strlcpy");
	printf("----------------------------------------\n");
}

/*
	* test_ft_atoi
*/
void	test_ft_atoi(void)
{
	char	*tests[] = {
		"",
		"abc",
		"2147483647",
		"-2147483648",
		"42",
		"-42",
		"   42",
		"   --42,",
		"-0042abc",
		"0042abc"
	};
	size_t	nb_tests = sizeof(tests) / sizeof(tests[0]);
	int	i = 0;

	printf("\n========== Test de ft_atoi ==========\n");
	while (nb_tests > 0)
	{
		assert_eq_int(atoi(tests[i]), ft_atoi(tests[i]), tests[i]);
		i++;
		nb_tests--;
	}
	printf("----------------------------------------\n");
}

int	main(void)
{
	// test_ft_isalpha();
	// test_ft_isdigit();
	// test_ft_isalnum();
	// test_ft_isprint();
	 test_ft_strlen();
	// test_ft_strlcpy();
	// test_ft_atoi();
}

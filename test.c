/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 17:01:24 by aborda            #+#    #+#             */
/*   Updated: 2025/08/03 20:13:28 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*
 assert 
 */
void	assert_eq_int_logical(int expected, int actual, const char *input)
{
	if ((expected != 0 && actual != 0) || (expected == 0 && actual == 0))
		printf("✅ [%s] OK (value: %d)\n", input, actual);
	else
		printf("❌ [%s] KO | expected: %d, actual: %d\n", input, expected, actual);
}

void	assert_eq_int(int expected, int actual, const char *input)
{
	if (expected == actual)
		printf("✅ [%s] OK (value: %d)\n", input, actual);
	else
		printf("❌ [%s] KO | expected: %d, actual: %d\n", input, expected, actual);
}

void	assert_eq_size_t(size_t expected, size_t actual, const char *input)
{
	if (expected == actual)
		printf("✅ [%s] OK (value: %zu)\n", input, actual);
	else
		printf("❌ [%s] KO | expected: %zu, actual: %zu\n", input, expected, actual);
}

/*
test_ft_isalpha
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
test_ft_isdigit
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
test_ft_isalnum
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
	printf("----------------------------------------\n");
}

/*
test_ft_isprint
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
test_ft_strlen
*/
void	test_ft_strlen(void)
{
	printf("\n========== Test de ft_strlen ==========\n");
	assert_eq_size_t(strlen(""), ft_strlen(""), "\"\"");
	assert_eq_size_t(strlen("abc"), ft_strlen("abc"), "abc");
	assert_eq_size_t(strlen("a b c"), ft_strlen("a b c"), "a b c");
	assert_eq_size_t(strlen("abc\n\tdef"), ft_strlen("abc\n\tdef"), "abc\\n\\tdef");
	assert_eq_size_t(strlen("123456!"), ft_strlen("123456!"), "123456!");
	printf("----------------------------------------\n");
}

int	main(void)
{
	// test_ft_isalpha();
	// test_ft_isdigit();
	// test_ft_isalnum();
	test_ft_isprint();
	// test_ft_strlen();
}

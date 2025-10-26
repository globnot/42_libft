/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:47:04 by aborda            #+#    #+#             */
/*   Updated: 2025/10/26 14:30:29 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include "libft.h"
# include "assert.h"
# include <stdio.h>
# include <string.h>
# include <ctype.h>

typedef struct s_test_isalpha
{
	int			c;
	const char	*label;
}	t_test_isalpha;

typedef struct s_test_isdigit
{
	int			c;
	const char	*label;
}	t_test_isdigit;

typedef struct s_test_isalnum
{
	int			c;
	const char	*label;
}	t_test_isalnum;

typedef struct s_test_isascii
{
	int			c;
	const char	*label;
}	t_test_isascii;

typedef struct s_test_isprint
{
	int			c;
	const char	*label;
}	t_test_isprint;

typedef struct s_test_strlen
{
	const char	*s;
	const char	*label;
}	t_test_strlen;

typedef struct s_test_memset
{
	char		*s;
	int			c;
	size_t		n;
	const char	*label;
}	t_test_memset;

typedef struct s_test_bzero
{
	char		*s;
	size_t		n;
	const char	*label;
}	t_test_bzero;

typedef struct s_test_memcpy
{
	char		*dest;
	const char	*src;
	size_t		n;
	const char	*label;
}	t_test_memcpy;

typedef struct s_test_memmove
{
	char		*dest;
	const char	*s;
	size_t		n;
	const char	*label;
}	t_test_memmove;

typedef struct s_test_strlcpy
{
	char		*dst;
	const char	*src;
	size_t		dsize;
	const char	*label;
}	t_test_strlcpy;

typedef struct s_test_strlcat
{
	char		*dst;
	const char	*src;
	size_t		dsize;
	const char	*label;
}	t_test_strlcat;

typedef struct s_test_toupper
{
	int			c;
	const char	*label;
}	t_test_toupper;

typedef struct s_test_tolower
{
	int			c;
	const char	*label;
}	t_test_tolower;

typedef struct s_test_strchr
{
	const char	*s;
	int			c;
	const char	*label;
}	t_test_strchr;

typedef struct s_test_strrchr
{
	const char	*s;
	int			c;
	const char	*label;
}	t_test_strrchr;

typedef struct s_test_atoi
{
	const char	*s;
	const char	*label;
}	t_test_atoi;

void	test_ft_isalpha(void);
void	test_ft_isdigit(void);
void	test_ft_isalnum(void);
void	test_ft_isascii(void);
void	test_ft_isprint(void);
void	test_ft_strlen(void);
void	test_ft_memset(void);
void	test_ft_bzero(void);
void	test_ft_memcpy(void);
void	test_ft_memmove(void);
void	test_ft_strlcpy(void);
void	test_ft_strlcat(void);
void	test_ft_toupper(void);
void	test_ft_tolower(void);
void	test_ft_strchr(void);
void	test_ft_strrchr(void);
void	test_ft_atoi(void);

#endif

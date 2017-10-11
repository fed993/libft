/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 17:14:26 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/11 00:19:05 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
size_t	ft_strlen(const char *str);

void	ft_putstr(char const *str);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_memdel(void **ap);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	bzero(void *s, size_t n);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int		ft_strcontains(char *str, char c);
int		ft_atoi(char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memcpy(void *str1, const void *str2, size_t n);
char	*ft_skipblanks(char *str);
char	*ft_skipneg(char *str);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	*ft_stricut(const char *src, int strt, int end);
char	*ft_strncpy(char *dest, char *src, size_t len);
char	*ft_strnew(size_t size);

#endif

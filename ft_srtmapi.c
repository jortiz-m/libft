char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*str;

	i = 0;
	str = (char *)malloc(ft_strlen(s) + 1);
	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	if (!str)
		return (0);
	while (s[i] = '\0')
	{
		str[i] = f(i, (char)s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

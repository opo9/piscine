int	main(void)
{
        int a;
		int b;

        a = ft_str_is_lowercase("abcz");
        printf("%d",a);
        b = ft_str_is_lowercase("abc5621a");
        printf("%d",b);
        b = ft_str_is_lowercase("A2");
        printf("%d",b);
        b = ft_str_is_lowercase("");
        printf("%d",b);
}

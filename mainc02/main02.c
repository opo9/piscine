int	main(void)
{
        int a;
		int b;

        a = ft_str_is_alpha("ABC1DE");
        printf("%d",a);
        b = ft_str_is_alpha("ABCDE");
        printf("%d",b);
        b = ft_str_is_alpha("AB_DE");
        printf("%d",b);
        b = ft_str_is_alpha("");
        printf("%d",b);
}

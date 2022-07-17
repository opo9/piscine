int	main(void)
{
        int a;
		int b;

        a = ft_str_is_numeric("1253");
        printf("%d",a);
        b = ft_str_is_numeric("55555621a");
        printf("%d",b);
        b = ft_str_is_numeric("25A55952");
        printf("%d",b);
        b = ft_str_is_numeric("");
        printf("%d",b);
}

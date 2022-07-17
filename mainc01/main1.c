int main(void)
{

	int x = 0;
	int test[6]={1,2,3,4,5,6};
	ft_rev_int_tab(test, 6);
	while(x < 6)
	{
		char t;

		t = '0';
		t += test[x];
		ft_putchar(t);
		x++;
	}
}

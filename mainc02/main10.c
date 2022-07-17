int main() {
	char dx[20] = "hello";
	char dy[20] = "hello";
	char sx[]   = "hey";
	char sy[]   = "hey";
	printf("[%d][%d]\n", ft_strlcpy(dx, sx,-1 ), strlcpy(dy, sy, -1));

	printf("[");
	for (int i = 0; i < 20; i++)
	{printf("<%d>", dx[i] );
		write(1, &dx[i],1);}
	printf("]\n");

        printf("[");
        for (int i = 0; i < 20; i++)
		{printf("<%d>", dy[i]);
				write(1, &dy[i],1);}
        printf("]\n");
}

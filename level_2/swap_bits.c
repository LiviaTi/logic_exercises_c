
unsigned char	swap_bits(unsigned char octet)
{
	unsigned char left;
	unsigned char right;

	left = (octet & 0xF0) >> 4;
	right = (octet & 0x0F) << 4;
	return (left |right);
}

#include <stdio.h>
int main (int argc, char *argv[])
{
	int n = 42;
	int i = 7;
	while (i >= 0)
	{
		printf("%d", n >> i & 1);
		i --;
	}
	printf("\n");
	n = swap_bits(n);
	i = 7;
	while (i >= 0)
	{
		printf("%d", n >> i & 1);
		i --;
	}
	return(0);
}
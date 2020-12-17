void bprint(int val)
{
	for (int i = (int)(sizeof(int) * 8 - 1); i >= 0; --i) {
		putchar((val >> i) & 1 ? '1' : '0');
	}
	putchar('\n');
}

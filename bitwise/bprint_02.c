void bprint3(int val)
{
	unsigned int mask = ~(~0u >> 1);

	while (mask) {
		putchar(val & mask ? '1' : '0');
		mask >>= 1;
	}
	putchar('\n');
}

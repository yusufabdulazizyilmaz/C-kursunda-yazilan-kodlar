//tam sayının bitlerinin yazdırılması - özyinelemeli gerçekleştirim

void bprint(unsigned val)
{
	if (val == 0)
		return;

	bprint(val >> 1);
	putchar((val & 1) + '0');
}

int main()
{
	bprint(345);
	bprint(0);  //?
}

//özellikle makro argümanının makra açılım listesinde birden fazla kez
//kullanıldığı makrolar güvenli olmayan şekilde kullanılabilirler.

#include <stdio.h>


#define   square(x)		((x) * (x))

int foo(int x)
{
	printf("foo cagrildi\n");
	//...
	return x + 5;
}

int main()
{
	int a = 10;

	int b = square(a++);  //tanımsız davranış
	int c = square(foo(5)); //foo 2 kez cagrilir
}

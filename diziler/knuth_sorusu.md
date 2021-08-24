Aşağıdaki doğrusal arama kodunda her bir karşılaştırma  ve arttırma birer işlem kabul ediliyor. Dizide aranan değerin bulunaması durumunda _3 \* SIZE_ işlem yapılıyor. Doğrusal arama kodunu _2 \* SIZE_ kez işlem yapılacak şekilde nasıl düzenleyebiliriz?

```
#include <stdio.h>
#include "nutility.h"

#define  SIZE    100

int main()
{
	int a[SIZE];
		
	randomize();
	set_array_random(a, SIZE);
	print_array(a, SIZE);

	int sval;

	printf("aranan degeri giriniz: ");
	scanf("%d", &sval);

	int i;

	for (i = 0; i < SIZE; ++i) {
		if (a[i] == sval) {
			break;
		}
	}

	if (i < SIZE)
		printf("bulundu dizinin %d indisli elemani\n", i);
	else {
		printf("bulunamadi\n ");
	}
}
```

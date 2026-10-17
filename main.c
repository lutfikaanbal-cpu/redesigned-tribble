#include <stdio.h>
#include <math.h>

int main(void) {
	float a, b, c, d, h;
	
	printf("birinci noktanin apsisini giriniz: ");
	scanf("%f", &a);
	printf("birinci noktanin ordinatini giriniz: ");
	scanf("%f", &b);
	printf("ikinci noktanin apsisini giriniz: ");
	scanf("%f", &c);
	printf("ikinci noktanin ordinatini giriniz: ");
	scanf("%f", &d);
	
	h = sqrt(pow(c - a, 2) + pow(d - b, 2));
	printf("iki nokta arasindaki uzaklik: %.2f\n", h);

	return 0;
}

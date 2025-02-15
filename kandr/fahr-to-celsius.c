#include <stdio.h>

int main(){
	float lower = 0;
	float upper = 300;
	float step = 20;

	float fahr = lower;
	float celsius;

	printf("Fahrenheit Celsius \n");
	while(fahr <= upper){
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%8.0f %8.1f \n", fahr, celsius);
		fahr += step;
	}

	return 0;
}

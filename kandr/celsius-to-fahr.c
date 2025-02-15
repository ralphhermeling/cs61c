#include <stdio.h>

int main(){
	float lower = -20.0;
	float upper = 160.0;
	float step = 5.0;

	float celsius = lower;
	float fahrenheit;

	while(celsius <= upper){
		fahrenheit = 9.0 / 5.0 * celsius + 32.0;
		printf("%6.0f %3.0f \n", celsius, fahrenheit);
		celsius+=step;
	}

	return 0;
}

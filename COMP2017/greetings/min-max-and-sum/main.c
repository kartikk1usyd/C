#include <stdio.h>
#include <limits.h>

int sum(int array[], unsigned int length) {
	int sum = 0;
	int i;
	for(i = 0; i < 100; i++){ 
		if(array[i] > 0) 
			sum += array[i];	 
	} 
}

int max(int array[], unsigned int length) {
	int max = 0;
	int i;
	int N;
	for (unsigned int i = 0; i < N; i++) {
    if (array[i] > max) {
       max = array[i];
}
}
}

int min(int array[], unsigned int length) {
	int min = 0;
	int i;
	int N;
	for(unsigned int i = 0; i < N; i++) {
	if (array[i] < min) {
		min = array[i];
}
}
}
// 
int main() {
	unsigned int length = 0;
	scanf("%u", &length);
	int array[length];
	int temp = -1;
	for(int i = 0; i < length; i++) {
		scanf("%d", &temp);
		array[i] = temp;
	}

	printf("SUM: %d\n", sum(array, length));
	printf("MAX: %d\n", max(array, length));
	printf("MIN: %d\n", min(array, length));

	return 0;
}


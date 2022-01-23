#include <stdio.h>
#include <time.h>


unsigned long long Fibonacci(unsigned long long *arr, int n)
{
	if (arr[n] == -1) {
		arr[n] = Fibonacci(arr, n - 1) + Fibonacci(arr, n - 2);
	}
	return arr[n];
}

int main(void)
{
    clock_t t;
    unsigned long long int n = 101;
	unsigned long long arr[n];
    for (int i=0;i<n;i++){
        arr[i] = -1;
    }
    
    t = clock();
	arr[0] = 0;
	arr[1] = 1;

	Fibonacci(arr, n - 1);

    for (int i = 0; i < n; i++) {
		printf( "[%d  %llu]", i,arr[i]);
	}

    t = clock() - t;
    double total_time = ((double)t)/CLOCKS_PER_SEC;
    printf("\nTime taken is: %f",total_time);
	return 0;
}

// 94th number onwards the data type is unable to handle it.
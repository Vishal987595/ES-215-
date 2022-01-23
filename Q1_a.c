#include <stdio.h>
#include <time.h>

unsigned long long fibonacci(int n){
    if (n==0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}

int main(){
    printf("The fibonacci series is: /n");
    int i;
    clock_t t,p;
    t = clock();
    p = clock();
    for (i=0;i<54;i++){
        printf("%d  %llu\n",i+1,fibonacci(i));
    }
    p = clock()-p;
    double time_taken = ((double)p)/CLOCKS_PER_SEC;
    printf("Time taken for reaching 54th number in series: %f\n",time_taken);
    // for (i=54;i<100;i++){
    //     printf("%d  %llu\n",i+1,fibonacci(i));
    //     p = clock() - p;
    //     double time = ((double)p)/CLOCKS_PER_SEC;
    //     printf("%f \n",time);
    // }

    return 0;
}

// We are terminating it at certaing point.
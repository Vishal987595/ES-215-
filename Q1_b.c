# include <stdio.h>
# include <time.h>

int main(){
    clock_t t;
    t = clock();

    int i;
    unsigned long long int last = 1, secondlast = 0, next;
    for (i=0;i<100;i++){
        if (i==0){
            printf("[%d  %d]", i+1, 1);
        }
        else {
            next = last + secondlast;
            printf ("[%d  %llu]" , i+1, next );
            secondlast = last;
            last = next;
        }
    } 

    t = clock()- t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("\nTime taken is: %f",time_taken);
    return 0;
}

// 94th number onwards the data type is unable to handle it.
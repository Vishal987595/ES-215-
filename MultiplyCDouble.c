#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    clock_t t,l;
    //t = clock();
    int n = 32;
    // printf("Enter the size of matrix: ");
    // scanf("%d",&n);
    
    double p[n][n];
    double q[n][n];
    double r[n][n];
    int i,j,k;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            p[i][j] = (double)rand()/RAND_MAX;
        }
    }
    
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            q[i][j] = (double)rand()/RAND_MAX;
        }
    }
    l = clock();
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            for (k=0;k<n;k++){
                r[i][j] = r[i][j] + q[i][k] * p[k][j];
            }
        }
    }
    // for (i = 0; i < n; i++){
    //     for (j = 0; j < n; j++)
    //     {
    //         printf("%lf\t", r[i][j]);
    //     }
    //     printf("\n");
    // }
    l = clock() - l;
    //t = clock() - t;
    double cputime = ((double)l)/CLOCKS_PER_SEC;
    //double totaltime = ((double)t)/CLOCKS_PER_SEC;
    printf ("Meat portion runtime with matrix size %d is equal to: %lf\n",n,cputime);
    
    //printf ("Total program runtime with matrix size %d is equal to: %lf\n",n,totaltime);
    return 0;
}

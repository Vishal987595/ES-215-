#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    clock_t t,l;
    //t = clock();
    int n = 32;
    
    // printf("Enter the matrix size: ");
    // scanf("%d",&n);
    
    int p[n][n];
    int q[n][n];
    int r[n][n];
    int i,j,k;
    
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            p[i][j] = rand();
        }
    }
    
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            q[i][j] = rand();
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
    //         printf("%d\t", r[i][j]);
    //     }
    //     printf("\n");
    // }
    l = clock() - l;
    //t = clock() - t;
    double cputime = ((double)l)/CLOCKS_PER_SEC;
    //double totaltime = ((double)t)/CLOCKS_PER_SEC;
    printf ("Meat poriton runtime with matrix size %d is:  %lf\n",n,cputime);
    //printf ("Total program runtime with matrix size %d is: %lf\n",n,totaltime);
    return 0;
}

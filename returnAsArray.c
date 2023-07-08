#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int * fun (int n){
    int * p;
    p = (int *)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        p[i] = i + 1;
    }
    int x[]= {2,4,6};
    for (int j = 0; j < sizeof(x)/sizeof(int); j++)
    {
       printf("%d",x[j]);
    }
    

    return (p);
}

int main() {
    int* A;
    A = fun(5);
    printf("%d",A[0]);
}
#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};

void display(struct Array arr) {
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d \t",arr.A[i]);
        /* code */
    }
    
}


int main( ) {
    struct Array arr;
    int i;

    printf("Enter a size of an array");
    scanf("%d",&arr.size);

    arr.A=(int *)malloc(arr.size*sizeof(int));
    // arr.length = 0;

    printf("Enter a no. of elements in an array");
    scanf("%d",&arr.length);

    printf("Enter elements in an array");
    for (i = 0; i < arr.length; i++)
    {
        /* code */
        scanf("%d",&arr.A[i]);
    }

    display(arr);
    

}
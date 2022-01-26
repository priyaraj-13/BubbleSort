#include <stdio.h>
#include <stdlib.h>


void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void bubbleSorting(int *A,int n)
{
    int temp;
    int isSorted=0;
    for(int i=0;i<n-1;i++)
    {
        isSorted=1;
        for(int j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                isSorted=0;
            }
        }
        if(isSorted==1)
            return;
    }
}
int main()
{
    int A={12,54,65,23,7,11};
    int n=6;
    printArray(A,n);
    bubbleSorting(A,n);
    printArray(A,n);

    return 0;
}

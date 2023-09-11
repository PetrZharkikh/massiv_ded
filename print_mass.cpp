#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include "TXLib.h"


void PrintData(const int data[]);
void InputData(int *data, int n, int m);

int main()
{
    int n=0, m=0;
    printf("¬ведите размер матрицы по горизонатали и вертикали:\n");
    scanf("%d %d", &n, &m);
    int *data=(int*) calloc(n*m+2, sizeof(int));
    InputData(data, n, m);
    PrintData(data);
    return 0;

}


void InputData(int *data, int n, int m)
{
    data[0]=n;
    data[1]=m;
    int i=2;
    while (i<n*m+2)
    {
        printf("¬ведите элемент массива\n");
        scanf("%d",&data[i]);
        i++;
    }
}


void PrintData(const int data[])
{
    for (int j=0; j<data[1]; j++)
        {
        for (int i=0; i<data[0]; i++)
            {
             printf("%d ", *(data+j*data[0]+i+2));
            }
        printf("\n");
        }
}

#include <stdio.h>
#include <stdlib.h>

void zamiana(int *a, int *b)
{
     int tmp;
     tmp=*a;
     *a=*b;
     *b=tmp;
}

//Kopcowanie
void Heapify(int T[], int k, int n)
{
     int i,j;
     i=T[k-1];

     while(k<=n/2)
     {
        j=2*k;
        if((j<n) && (T[j-1]<T[j])) j++;
        if(i>=T[j-1]) break;
        else
        {
            T[k-1]=T[j-1];
            k=j;
        }
     }
     T[k-1]=i;
}

//Budowanie kopca
void BuildHeap(int T[], int n)
{
     for(int i=n/2;i>0;i--)
     Heapify(T,i,n);
}

//Sortowanie
void HeapSort(int T[], int n)
{
     BuildHeap(T,n);
     do
     {  zamiana(T,T+n-1);  n--;
        Heapify(T,1,n);
     }while(n>1);
}

int main(int argc, char *argv[])
{
    int t[15]={22,46,1,7,3,9,1,0,5,21,-6,13,-9,3,1};
    HeapSort(t,15);
    for(int i=0;i<15;i++)
    printf("%d  ", t[i]);
    system("PAUSE");
    return 0;
}
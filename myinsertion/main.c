#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[100],n;
   printf("Enter number of elements: ");
   scanf("%d", &n);

   for(int i=0; i < n; ++i) {
    printf("Enter number%d: ",i+1);
    scanf("%d", &a[i]);
   }
    InsertionSort(a, n);
	PrintArray(a, n);

	return 0;
}

void InsertionSort( int a[],int n){
    int i,j,key;
    for(i=1;i<n;i++){
        key = a[i];
        j=i-1;
        while(j>=0 && a[j]>key ){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}
void PrintArray(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

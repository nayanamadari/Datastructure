#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100], min , n=0 , i , j, swap ;
    printf("----------SELECTION SORTING----------\n");
    printf(" Please enter the number of element to sort:  \n");
    scanf("%d",&n);
    printf(" Please enter the %d number of elements: \n",n);
    for(i=0;i<n;i++){
            scanf("%d",&a[i]);
    }

    for (i=0;i<n-1;i++){
        min = i;
        for(j=i+1;j<n;j++){
           if(a[j] < a[min])
            min=j;
        }
        if(min!=i){
            swap = a[min];
            a[min]= a[i];
            a[i]=swap;
        }
    }
    printf("sorted array is:  \n");
    for(i=0;i<n;i++){
        printf("%d \t",a[i]);
    }
    return 0;
}

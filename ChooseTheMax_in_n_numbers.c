#include <stdio.h>
 
int main ()
{
    int n;
    printf("please input the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("please input the numbers: ");
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int max = a[0];
    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    
    printf("The maximum number is: %d\n", max);
    
    return 0;
}
 

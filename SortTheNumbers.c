#include <stdio.h>
 
int main() 
    {
    int n, i, j, t;
    printf("please input the number of the elements: ");
    scanf("%d", &n);
    
    // 动态分配内存
    int a[n];
    
    printf("please input the elements: ");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
 
    // 使用冒泡排序对数组进行排序
    for(i = 0; i < n - 1; i++)
     {
        for(j = 0; j < n - i - 1; j++) 
          {
            if(a[j] > a[j + 1])
             {  // 这里是升序排序，如果需要降序排序，改为 a[j] < a[j + 1]
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
 
    printf("the sorted elements are: ");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");
 
    return 0;
}
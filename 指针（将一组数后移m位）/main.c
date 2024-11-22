#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    int n;
    int m;
    int temp=0;
    printf("input memory size: ");
    scanf("%d",&n);

    int*array=(int*)malloc(n*sizeof(int));  //为指针array的地址分配n*int型数据大小的内存空间，C语言中，指针可以退化成数组。

    if (array==NULL){
        printf("filed to create");
        return 1;
    }
    for (i=0;i<n;i++){
        scanf("%d",array+i);
    }
    printf("input an interger to switch: ");
    scanf("%d",&m);
    for(i=0;i<m;i++){
        temp=*(array+n-m+i);
        *(array+n-m+i)=*(array+i);
        *(array+i)=temp;
    }
    for(i=0;i<n;i++){
        printf("%d ",*(array+i));
    }
    free(array);
    system("pause");
    return 0;
}
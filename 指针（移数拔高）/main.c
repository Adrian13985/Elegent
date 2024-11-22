#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int i;
    int sum=0;
   
    printf("input memory size: ");
    scanf("%d",&n);


    int*array=(int*)malloc(n*sizeof(int));
    int*temp=(int*)malloc(n*sizeof(int));


    if(array==NULL){
        printf("error");
        return 1;
    }
    printf("input element: ");
    for (i=0;i<n;i++){
        scanf("%d",array+i);
        sum=sum+*(array+i);
    }
    printf("the average is : %f\n",(float)sum/n);

    for(i=0;i<n;i++){
       *(temp+n-i-1)= *(array+i);
    }
    for(i=0;i<n;i++){
        printf("%d ",*(temp+i));
    }
    free(array);
    free(temp);
    system("pause");
    return 0;
}
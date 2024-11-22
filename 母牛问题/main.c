#include<stdio.h>
int conc(int n)
{
    if(n<=3){
        return n;
    }
    else{
        return conc(n-1)+conc(n-3);
    }
}
void main()
{
    int n;
    scanf("%d",&n);
    printf("%d",conc(n));
}
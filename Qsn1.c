#include<stdio.h>
int main()

{
    int x;
    printf("Enter Integer: \n",x);
    scanf("%d",&x);

    if (x>0) printf("The number is positive");
    else if (x<0) printf("The number is negative");
    else printf("The number is zero");

    return 0;

}
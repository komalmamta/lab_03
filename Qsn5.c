#include<stdio.h>
int main()

{
    int days;

    printf("Enter Number of days:",days);
    scanf("%d",&days);

    if ((0<days) && (days<=5)) printf(" The fine is 1 rupee");
    else if ((6<=days) && (days<=10)) printf("The fine is 2 rupees");
    else if ((days>10) && days<30) printf("The fine is 5 rupees");
    else printf("Your Membership is Cancelled");

    return 0;
    
}
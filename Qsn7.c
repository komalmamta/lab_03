#include<stdio.h>
int main ()

{
    float T;
    float m;
    float w;
    float n;

    printf("Enter Your Score:",m);
    scanf("%f",&m);

    printf("Enter your Attendence:",n);
    scanf("%f",&n);

    w=n*0.01;
    T=m*w;

    printf("Final Score:%f\n",T);

    if ((T >= 90 ) && (T<=100)) printf("Grade Ex");
    else if ((T >= 80)  && (T < 89)) printf("Grade A");
    else if ((T >= 70)  && (T< 79))  printf("Grade B");
    else if ((T >= 60) && (T < 69)) printf("Grade C");
    else if ((T >= 50) && (T < 59)) printf("Grade D");
    else if ((T >= 40) && (T < 49)) printf("Grade E");
    else  printf("Grade F");

    return 0;
    



}
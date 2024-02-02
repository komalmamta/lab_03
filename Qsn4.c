#include<stdio.h>
int main()

{
    float x1;
    float y1;
    float x2;
    float y2;
    float x3;
    float y3;
    float m;
    float n;

    printf("Enter the Coordinates 1: ",x1,y1);
    scanf("%f%f",&x1,&y1);

    printf("Enter the Coordinates 2: ",x2,y3);
    scanf("%f%f",&x2,&y2);
    
    printf("Enter the Coordinates 3: ",x3,y3);
    scanf("%f%f",&x3,&y3);

    m=(y2-y1)/(x2-x1);

    n=(y3-y2)/(x3-x2);
    

    if (m==n) printf("They lie on same line");
    
    else printf("They do not lie on same line");

    return 0;

}
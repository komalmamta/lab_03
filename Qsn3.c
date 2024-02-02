#include<stdio.h>
int main()

{
    int x;
    int y;
    int z;
    printf("Enter sides of triangle: ",x,y,z);
    scanf("%d%d%d",&x,&y,&z);

    if ((x+y>z) && (x+z>y) && (y+z>x)) printf("They are sides of triangle");
    
    else printf("They are not sides of triangle");

    return 0;

}

#include<stdio.h>
int main()

{
    int i;
    int x;
    int y;
    int z;
    int j;

   
    printf("Enter number:",i);
    scanf("%d",&i);
    
    
    if((i>0) && (i<10))
  { 
    x=i*i;
    
    y=x/10;
    
    z=x%10;
    
    j=z+y;

    if (i==j) printf("Yes It is k number");
    else printf("No it is not k number");
  }
  
   else if ((i>=10) && (i<100))
   {
   x=i*i;
    
    y=x/100;
    
    z=x%100;
    
    j=z+y;

    if (i==j) printf("Yes It is k number");
    else printf("No it is not k number");
   }
   
   else if((i>=100) && (i<1000))
   {x=i*i;
    
    y=x/1000;
    
    z=x%1000;
    
    j=z+y;

    if (i==j) printf("Yes It is k number");
    else printf("No it is not k number");
   }
    else if((i>1000)&&(i<10000))
    {
        x=i*i;
    
    y=x/10000;
    
    z=x%10000;
    
    j=z+y;

    if (i==j) printf("Yes It is k number");
    else printf("No it is not k number");
    }
    else printf("fuck you");
    
    return 0;


}
#include <stdio.h>
#include <conio.h>

int main()
{
    float x,y,z;
    printf("Enter the first number: ");
    scanf("%f",&x);
    printf("Enter the second number: ");
    scanf("%f",&y);
    printf("Enter the third number  : ");
    scanf("%f",&z);
    if((x>y)&&(x>z)){
    printf("%f is the biggest number",x);
    }
    if((y>x)&&(y>z)){
    printf("%f is the biggest number",y);
    }
    if((z>x)&&(z>y)){
    printf("%f is the biggest number",z);
    }
    return 0;
}

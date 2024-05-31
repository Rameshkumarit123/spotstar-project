#include<stdio.h>
main()
{
    char name;
    float num;
    printf("Enter your name:");
    scanf("%c",&name);
    printf("Enter your number:");
    scanf("\n%lf",num);

    printf("Enter your name:%c",name);
    printf("Enter your number:%lf",num);

}
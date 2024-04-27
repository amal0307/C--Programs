#include<stdio.h>
int main()
{
    int a,b,c,option;
    char option1;
    do{
        printf("Enter two numbers\n");
        scanf("%d%d",&b,&c);
        printf("1.add\n2.sub\n,3.mult\n");
        printf("Enter your choice\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
            a=b+c;
            printf("Sum is %d",a);
            break;
            
            case 2:
            a=b-c;
            printf("Difference is %d",a);
            break;
            
            case 3:
            a=b*c;
            printf("Product is %d",a);
            break;
            
            default:
            printf("No such option available..");
            break;
        }
        printf("Do you want to continue?\n");
        fflush(stdin);
        scanf("%c",&option1);
    }while(option1=='y');
    return 0;
}
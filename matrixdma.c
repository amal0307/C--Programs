#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,**p1,**p2,**p3,n1;
    
    printf("Enter the size of matrix: ");
    scanf("%d",&n);
    p1=(int**)malloc(n*sizeof(int));
    p2=(int**)malloc(n*sizeof(int));
    p3=(int**)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        p1[i]=(int*)malloc(n*sizeof(int));
        p2[i]=(int*)malloc(n*sizeof(int));
        p3[i]=(int*)malloc(n*sizeof(int));
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            //p1[i][j]=(int**)calloc(n*n,sizeof(int));
            printf("Row %d,Col %d: ",i+1,j+1);
            scanf("%d",&(p1[i][j]));
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            //p2[i][j]=calloc(n*n,sizeof(int));
            printf("Row %d,Col %d: ",i+1,j+1);
            scanf("%d",&(p2[i][j]));
        }
    }
    printf("Choose any operation: 1.Add\n2.Subtract\n3.Multiply\n4.Transpose");
    scanf("%d",&n1);
    switch(n1)
    {
        case 1:
        for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           //p3[i][j]=calloc(n*n,sizeof(int));
            p3[i][j]=p1[i][j]+p2[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",(p3[i][j]));
        }
    }
    break;
    
    }
    for(i=0;i<n;i++)
    {
        free(p1[i]);
        free(p2[i]);
        free(p3[i]);
    }
    free(p1);
    free(p2);
    free(p3);
    
    return 0;
    
}

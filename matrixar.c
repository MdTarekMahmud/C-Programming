#include<stdio.h>
int main()
{
    int a[3][4];
      int i,j;
      printf("Enter Your matrix :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("a[%d][%d] = ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("The Matrix is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",a[i] [j]);
        }
        printf("\n");
    }
    return 0;
}
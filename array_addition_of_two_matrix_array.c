#include<stdio.h>
main()
{
    int a[2][3],b[2][3],c[2][3],i,j;
    printf("enter first matrix");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("\n enter second matrix");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n the first matrix is \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n the second matrix is \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("third matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
/*output
enter first matrix1
2
3
4
5
6

 enter second matrix1
2
3
4
5
6

 the first matrix is
1       2       3
4       5       6

 the second matrix is
1       2       3
4       5       6
third matrix
2       4       6
8       10      12

Process returned 0 (0x0)   execution time : 17.887 s
Press any key to continue.
*/

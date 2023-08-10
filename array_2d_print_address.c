#include<stdio.h>
main()
{
    int x[2][3],i,j;
    printf("%u\n",x);
    printf("all elements are");
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
            printf("%u\t",&x[i][j]);
    }
    printf("\n");
}
/*output
6422016
all elements are6422016 6422020 6422024 6422028 6422028 6422032 6422036 6422040

Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
*/
/*
#include<stdio.h>
main()
{
    int x[2][3],i,j;
    printf("%u\n",x);
    printf("all elements are");
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
            printf("%u\t",*(x+i)+j);
    }
    printf("\n");
}
*/
/*
output
6422016
all elements are6422016 6422020 6422024 6422028 6422028 6422032 6422036 6422040

Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
*/

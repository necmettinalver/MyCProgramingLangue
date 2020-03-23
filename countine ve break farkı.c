#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , j ;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            printf("%d x %d = %d",i,j,i*j);

            if(j==4)
            {
                continue;
            }printf("\n");
        }
        printf("\n");
    }
    return 0;
}

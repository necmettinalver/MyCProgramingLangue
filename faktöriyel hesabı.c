#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0 ,fak=1 ;
    printf("bir sayi giriniz :");
    scanf("%d",&i);
    while (i>0)
    {

        fak=fak*i;
        i-=1;
    }

        printf("\n%d",fak);





    return 0;
}

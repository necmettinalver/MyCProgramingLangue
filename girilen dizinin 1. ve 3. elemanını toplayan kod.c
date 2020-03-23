#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("dizinin %d elamanini giriniz :",i+1);
        scanf("%d",&dizi[i]);
    }
        printf("1. elaman ve 3. elamanin toplami : %d",dizi[0]+dizi[2]);





    return 0;
}

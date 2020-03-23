#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x , i;
    float ort ,toplam=0;

    for (i=0; i<=4; i++)
    {
        printf("bir sayi giriniz");
        scanf("%d",&x);
        toplam=toplam+x;
    }
    printf("i deðeri :%d : ",i);
    printf("toplam : %f",toplam);
    ort=toplam/i;
    printf(" ortalama :%f",ort);


return 0;
}

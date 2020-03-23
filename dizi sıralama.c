#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[50], gecici, adet;
    printf("Kac adet sayi girilecek: ");
    scanf("%d", &adet);

    for(int i=0; i<adet; i++)
    {
        printf("%d)Sayi giriniz: ", i+1);
        scanf("%d", &dizi[i]);
    }

    for(int i=0; i<adet-1; i++)
    {
        for(int j=i+1; j<adet; j++)
        {
            if(dizi[i] > dizi[j])
            {
                gecici = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = gecici;
            }
        }
    }

    for(int i=0; i<adet; i++)
        printf("%d ", dizi[i]);


    printf("\n");
    return 0;
}

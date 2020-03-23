#include <stdio.h>
#include <stdlib.h>
int kelime_bulma(char *ptr1,char *ptr2)
{
    char *p1=ptr1;
    char *p2=ptr2;
    int i=0,j=0;
    while(*ptr1!=NULL)
    {
        if(*ptr1<*ptr2)
        {
            i++;
            break;
        }
        else if(*ptr2<*ptr1)
        {
            j++;
            break;
        }
        ptr1++;
        ptr2++;
    }
    if(i!=0)
    {
        return 0;
    }
    else if(j!=0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int dizibulma(char dizi[])
{
    int i=0,uzunluk=0;
    for(i=0; dizi[i]!='\0'; i++)
    {
        uzunluk++;
    }
    return uzunluk;
}
float gecme_notu(int a,int b)
{
    int gnot;
    gnot=(float)((a*4)+(b*6))/10;
    return gnot;
}

typedef struct dersler
{
    char dersadi[30];
    int vizenot;
    int finalnot;

} Dersler;

typedef struct ogrenci
{
    int numara;
    char og_ad[15];
    char og_soyad[15];
    int derssayisi;
    Dersler *dersler;
} Ogrenci,ydizi[20];

int main()
{
    int boyut, i,j,menusecim,gnotu,uzunluk;
    char ad1[20];
    char *pad1;
    printf("ogrenci sayisini giriniz :");
    scanf("%d",&boyut);
    Ogrenci *ogrencix=(Ogrenci*)malloc(boyut*sizeof(Ogrenci));

    for(i=0; i<boyut; i++)
    {
        printf("\n%d. Ogrencinin numarasini giriniz :",i+1);
        scanf("%d",&(ogrencix+i)->numara);

        printf("%d. Ogrencinin adini giriniz :",i+1);
        scanf("%s",&(ogrencix+i)->og_ad);

        printf("%d. Ogrencinin soyadini giriniz :",i+1);
        scanf("%s",&(ogrencix+i)->og_soyad);

        printf("%d. Ogrencinin ders sayisini giriniz :",i+1);
        scanf("%d",&(ogrencix+i)->derssayisi);

        (ogrencix+i)->dersler=(Dersler*)malloc((ogrencix+i)->derssayisi*sizeof(Dersler));

        for(j=0; j<(ogrencix+i)->derssayisi; j++)
        {
            printf("\n%d numarali ogrencinin %d. ders adini giriniz :",(ogrencix+i)->numara,j+1);
            scanf("%s",&((ogrencix+i)->dersler+j)->dersadi);

            printf("%d numarali ogrencinin %d. dersinin vize notunu giriniz :",(ogrencix+i)->numara,j+1);
            scanf("%d",&((ogrencix+i)->dersler+j)->vizenot);

            printf("%d numarali ogrencinin %d. dersinin final notunu giriniz :",(ogrencix+i)->numara,j+1);
            scanf("%d",&((ogrencix+i)->dersler+j)->finalnot);
        }
    }
b:
    printf("\n1.Ogrenci ara");
    printf("\n2.Durum Goster");
    printf("\n3.Listele");
    printf("\n4.Cikis");
    printf("\n\nYapmak istediginiz islemi tuslayiniz :");
    scanf("%d",&menusecim);

    switch (menusecim)
    {
    case 1 :
    {
        printf("Aramak istediginiz ogrencinin adini giriniz :");
        scanf("%s",&ad1);
        int i, j;
        j = 0;

        for (i=0; i<boyut; i++)
        {
            if (kelime_bulma(ad1,(ogrencix+i)->og_ad))
            {
                printf("\n\nOgrenci numarasi :%d",(ogrencix+i)->numara);
                printf("\nOgrenci adi :%s",(ogrencix+i)->og_ad);
                printf("\nOgrenci soyadi :%s",(ogrencix+i)->og_soyad);
                printf("\nOgrencinin ders sayisi :%d",(ogrencix+i)->derssayisi);
                j = 1;
                printf("\n");
                 for(j=0; j<(ogrencix+i)->derssayisi; j++)
            {
                printf("\n\n%d numarali ogrencinin %d. ders adi :%s",(ogrencix+i)->numara,j+1,((ogrencix+i)->dersler+j)->dersadi);
                printf("\n%d numarali ogrencinin %d. dersinin vize notu :%d",(ogrencix+i)->numara,j+1,((ogrencix+i)->dersler+j)->vizenot);
                printf("\n%d numarali ogrencinin %d. dersininin final notu :%d",(ogrencix+i)->numara,j+1,((ogrencix+i)->dersler+j)->finalnot);
                printf("\n\n");
            }
            }
        }
        if (!j)
            printf("Bulunamadý!\n");
        goto b;
        break;
    }
    case 2 :
    {
        for(i=0; i<boyut; i++)
        {
            for(j=0; j<(ogrencix+i)->derssayisi; j++)
            {
                gnotu=gecme_notu(((ogrencix+i)->dersler+j)->vizenot,((ogrencix+i)->dersler+j)->finalnot);
                printf("\n\n%d numarali ogrencinin %d. ders adi :%s",(ogrencix+i)->numara,j+1,((ogrencix+i)->dersler+j)->dersadi);
                printf("\n%d numarali ogrencinin %d. dersinin vize notu :%d",(ogrencix+i)->numara,j+1,((ogrencix+i)->dersler+j)->vizenot);
                printf("\n%d numarali ogrencinin %d. dersininin final notu :%d",(ogrencix+i)->numara,j+1,((ogrencix+i)->dersler+j)->finalnot);
                printf("\n%d numarali ogrencinin not ortalamasi :%d",(ogrencix+i)->numara,gnotu);
                if(gnotu>=60)
                {
                    printf("\nOgrenci dersi gecmistir");
                }
                else
                {
                    printf("\nOgrenci dersi gecememistir");
                }
                printf("\n\n");
            }
        }
        goto b;
        break;
    }
    case 3 :
    {
        for(i=0; i<boyut; i++)
        {
            printf("\n\nOgrenci numarasi :%d",(ogrencix+i)->numara);
            printf("\nOgrenci adi :%s",(ogrencix+i)->og_ad);
            printf("\nOgrenci soyadi :%s",(ogrencix+i)->og_soyad);
            printf("\nOgrencinin ders sayisi :%d",(ogrencix+i)->derssayisi);

            for(j=0; j<(ogrencix+i)->derssayisi; j++)
            {
                printf("\n\n%d numarali ogrencinin %d. ders adi :%s",(ogrencix+i)->numara,j+1,((ogrencix+i)->dersler+j)->dersadi);
                printf("\n%d numarali ogrencinin %d. dersinin vize notu :%d",(ogrencix+i)->numara,j+1,((ogrencix+i)->dersler+j)->vizenot);
                printf("\n%d numarali ogrencinin %d. dersininin final notu :%d",(ogrencix+i)->numara,j+1,((ogrencix+i)->dersler+j)->finalnot);
                printf("\n\n");
            }
        }
        goto b;
        break;
    }
    case 4 :
        goto a;
        break;
    }
a:
    free(ogrencix);
    return 0;

}

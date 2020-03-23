#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dizibulma(char dizi[])
{
    int i=0,uzunluk=0;
    for(i=0; dizi[i]!='\0'; i++)
    {
        uzunluk++;
    }
    return uzunluk;
}

int main()
{
    int i,j,a,b,c=0,toplam=0,uzunluk;
    srand(time(NULL));
    printf("satir uzunlugunu giriniz :");
    scanf("%d",&b);
    printf("sutun uzunlugu giriniz :");
    scanf("%d",&a);
    printf("\n");
    char dizi1[b];
    char dizi[a][b];
    char *pdizi;
    char *pdizi1;
    pdizi=dizi;
    pdizi1=&dizi1[0];
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            dizi[i][j]='a'+rand()%26;
            printf("%c ",dizi[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Bulmak istediginiz harf yada harfleri giriniz :");
    scanf("%s",&dizi1);
    printf("\n");
    uzunluk=dizibulma(dizi1);
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            for(c=0; c<uzunluk; c++)
            {
                if(uzunluk==1 && *(*(dizi+i)+j)==*(dizi1+c) )
                {
                    toplam++;
                    printf("dizi yeri :[%d] [%d]\n",i,j);
                }
                else if(*(*(dizi+i)+j)==*(dizi1+c) && *(*(dizi+i)+j+1)==*(dizi1+c+1) && *(*(dizi+i)+j+(uzunluk-1))==*(dizi1+uzunluk-1))
                {
                    toplam++;
                    printf("dizi yeri soldan saga:[%d] [%d]\n",i,j);
                }
            }
        }
    }

    for(j=0; j<b; j++)
    {
        for(i=0; i<a; i++)
        {
            for(c=0; c<uzunluk; c++)
            {
                if(uzunluk==1 && *(*(dizi+i)+j)==*(dizi1+c) )
                {
                    toplam++;
                    printf("dizi yeri :[%d] [%d]\n",i,j);
                }
                else if(*(*(dizi+i)+j)==*(dizi1+c) && *(*(dizi+i+1)+j)==*(dizi1+c+1) && *(*(dizi+i+uzunluk-1)+j)==*(dizi1+uzunluk-1))
                {
                    toplam++;
                    printf("dizi yeri yukaridan asagiya:[%d] [%d]\n",i,j);
                }
            }
        }
    }
    for(i=a-1; i>=0; i--)
    {
        for(j=b-1; j>=0; j--)
        {
            for(c=0; c<uzunluk; c++)
            {
                if(uzunluk==1 && *(*(dizi+i)+j)==*(dizi1+c) )
                {
                    toplam++;
                    printf("dizi yeri :[%d] [%d]\n",i,j);
                }
                else if(*(*(dizi+i)+j)==*(dizi1+c) && *(*(dizi+i)+j-1)==*(dizi1+c+1) && *(*(dizi+i)+j-(uzunluk-1))==*(dizi1+uzunluk-1))
                {
                    toplam++;
                    printf("dizi yeri sagdan sola:[%d] [%d]\n",i,j);
                }
            }
        }
    }
    for(j=b-1; j>=0; j--)
    {
        for(i=a-1; i>=0; i--)
        {
            for(c=0; c<uzunluk; c++)
            {
                if(uzunluk==1 && *(*(dizi+i)+j)==*(dizi1+c) )
                {
                    toplam++;
                    printf("dizi yeri :[%d] [%d]\n",i,j);
                }
                else if(*(*(dizi+i)+j)==*(dizi1+c) && *(*(dizi+i-1)+j)==*(dizi1+c+1) && *(*(dizi+i-(uzunluk-1))+j)==*(dizi1+uzunluk-1))
                {
                    toplam++;
                    printf("dizi yeri asagidan yukariya:[%d] [%d]\n",i,j);
                }
            }
        }
    }
    printf("\nBulunan sayisi: %d\n",toplam);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int hesap,islem,gislem,mod,sayi4,sayi5;
    double toplama,cikarma,carpma,bolme,sayi1,sayi2;
    char onay1, onay2;
    printf("Hesap makinesi secenekleri : \n\n1.Basit \n2.Gelismis\n");
    printf("\nHangi secenegi kullanmak istersiniz \n");
anamenu:
    printf("\nBasit icin 1'e Gelismis icin 2'ye tiklayiniz. : ");
    scanf("%d",&hesap);
    switch(hesap)
    {
    case 1:
    {
        printf("\nToplama:1\nCikarma:2\nCarpma:3\nBolme:4 \n\nYapmak istediginiz islemi seciniz : ");
        scanf("%d",&islem);
        switch (islem)
        {
        case 1:
        {
islem2:
            printf("\n1.sayiyi giriniz :");
            scanf("%lf",&sayi1);
            printf("2.sayiyi giriniz :");
            scanf("%lf",&sayi2);
            toplama=sayi1+sayi2;
            printf("Sonucunuz :%.2lf\n",toplama);
            printf("\nIsleme devam etmek icin :D\nCikmak icin :C\nLutfen birini seciniz :");
            scanf("%s",&onay2);
            if (onay2=='D'||onay2=='d')
                goto islem2;
            else
                goto a;
            break;
        }
        case 2:
        {
islem3:
            printf("\n1.sayiyi giriniz :");
            scanf("%lf",&sayi1);
            printf("2.sayiyi giriniz :");
            scanf("%lf",&sayi2);
            cikarma=sayi1-sayi2;
            printf("Sonucunuz : %.2lf\n",cikarma);
            printf("\nIsleme devam etmek icin :D\nCikmak icin :C\nLutfen birini seciniz :");
            scanf("%s",&onay2);
            if (onay2=='D'||onay2=='d')
                goto islem3;
            else
                goto a;
            break;
        }
        case 3:
        {
islem4:
            printf("\n1.sayiyi giriniz :");
            scanf("%lf",&sayi1);
            printf("2.sayiyi giriniz :");
            scanf("%lf",&sayi2);
            carpma=sayi1*sayi2;
            printf("Sonucunuz : %.2lf\n",carpma);
            printf("\nIsleme devam etmek icin :D\nCikmak icin :C\nLutfen birini seciniz :");
            scanf("%s",&onay2);
            if (onay2=='D'||onay2=='d')
                goto islem4;
            else
                goto a;
            break;
        }
        case 4:
        {
islem5:
            printf("\n1.sayiyi giriniz :");
            scanf("%lf",&sayi1);
            printf("2.sayiyi giriniz :");
            scanf("%lf",&sayi2);
            bolme=sayi1/sayi2;
            printf("Sonucunuz : %.2lf\n",bolme);
            printf("\nIsleme devam etmek icin :D\nCikmak icin :C\nLutfen birini seciniz :");
            scanf("%s",&onay2);
            if (onay2=='D'||onay2=='d')
                goto islem5;
            else
                goto a;
            break;
        }
        default:
        {
            printf("Yanlis karakter girdiniz.\n");
            goto a;
            break;
        }

        }
a:
        printf("\nAna menu icin : A \nCikmak icin :c\nLutfen birini seciniz :");
        scanf("%s",& onay1);
        if(onay1=='A'|| onay1=='a')
            goto anamenu;
        else
            return;
        break;
    }
    case 2:
    {
        printf("\nMod :1\nKarakok :2\nUs alma :3\nLogaritma :4");
        printf("\nYapmak istediginiz islemi seciniz :");
        scanf("%d",&gislem);
        switch (gislem)
        {
        case 1:
        {
islem7:
            printf("\n1.sayiyi giriniz :");
            scanf("%d",&sayi4);
            printf("2.sayiyi giriniz :");
            scanf("%d",&sayi5);
            mod=sayi4%sayi5;
            printf("Modunuz :%d\n",mod);
            printf("\nIsleme devam etmek icin :D\nCikmak icin :C\nLutfen birini seciniz :");
            scanf("%s",&onay2);
            if (onay2=='D'||onay2=='d')
                goto islem7;
            else
                goto a;
            break;
        }
        case 2:
        {
islem8:
            printf("\nKarekokunu almak istediginiz sayiyi giriniz :");
            scanf("%lf",&sayi1);
            sayi1=sqrt(sayi1);
            printf("Girdiginiz sayinin kareoku : %.2lf\n",sayi1);
            printf("\nIsleme devam etmek icin :D\nCikmak icin :C\nLutfen birini seciniz :");
            scanf("%s",&onay2);
            if (onay2=='D'||onay2=='d')
                goto islem8;
            else
                goto a;
            break;
        }
        case 3:
        {
islem9:
            printf("\nTabani yaziniz :");
            scanf("%lf",&sayi1);
            printf("Almak istediginiz ustu yaziniz :");
            scanf("%lf",&sayi2);
            sayi1=pow(sayi1,sayi2);
            printf("Uslu sayiniz :%.2lf\n",sayi1);
            printf("\nIsleme devam etmek icin :D\nCikmak icin :C\nLutfen birini seciniz :");
            scanf("%s",&onay2);
            if (onay2=='D'||onay2=='d')
                goto islem9;
            else
                goto a;
            break;

        }
        case 4:
        {
islem10:
            printf("\nLogaritmasini almak istediginiz sayiyi giriniz :");
            scanf("%lf",&sayi1);
            sayi1=log(sayi1);
            printf("Logaritma sonucunuz :%lf\n",sayi1);
            printf("\nIsleme devam etmek icin :D\nCikmak icin :C\nLutfen birini seciniz :");
            scanf("%s",&onay2);
            if (onay2=='D'||onay2=='d')
                goto islem10;
            else
                goto a;
            break;
        }
        }
        break;
    }
    default:
    {
        printf("\nLutfen 1 yada 2 seciniz.");
        printf("\n\nTekrar denemek icin :T\nCikmak icin :C\nLutfen birini seciniz :");
        scanf("%s",&onay2);
        if (onay2=='T'||onay2=='t')
            goto anamenu;
        else
            return;
        break;
    }
    }



    return 0;
}

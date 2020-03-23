#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,sutun,i,j;
    printf("satir sayisini giriniz :");
    scanf("%d",&x);
    printf("sutun sayisini giriniz :");
    scanf("%d",&sutun);
    int dizi[x][sutun],**ptr;
    ptr=dizi;
    for(i=0; i<x; i++)
    {
        for(j=0; j<sutun; j++)
        {
            printf("%d.satirin %d.sutununu giriniz:",i+1,j+1);
            scanf("%d",((ptr+i)+j));

        }
    }
    printf("\n");
    printf("\n");
    for(i=0; i<x; i++)
    {
        for(j=0; j<sutun; j++)
        {
            printf("%d.satirin %d.sutun sayi degeri:%d\n",i+1,j+1,*(*(ptr+i)+j));


        }
        printf("\n");
    }
  /*   printf("\n"); pointer ile dolaþma çabalarým
     printf("----->%d",*(ptr+2));
          printf("\n");
     printf("----->%d",*(ptr+2)+2);
          printf("\n");
     printf("----->%d",*(ptr+1));
          printf("\n");
     printf("----->%d",*(ptr+1)+1);
      printf("\n");
     printf("----->%d",*((ptr+1)+2));
    //int toplam;
   // toplam=*(*(ptr+1)+2)+*(*(ptr+2)+1);
   // printf("%d = toplam",toplam);*/

    return 0;
}

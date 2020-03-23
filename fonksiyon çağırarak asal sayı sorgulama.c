#include <stdio.h>
#include <stdlib.h>

void asal(int say)
{
    int i;
    for(i=2;i<say;i++)
    {
        if(0==say%i)
        {

            printf("sayi asal degildir.");
            return 0;
        }
    }
            printf("sayi asaldir");
}

int main()
{
    int x;
    printf("Asal olup olmadigini ogrenmek istediginiz sayiyi giriniz :");
    scanf("%d",&x);
    asal(x);

    return 0;
}

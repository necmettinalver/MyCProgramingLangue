#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("bir sayi giriniz :");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("sayi cifttir");
    }
    else
    {
        printf("sayi tektir");
    }
    return 0;
}

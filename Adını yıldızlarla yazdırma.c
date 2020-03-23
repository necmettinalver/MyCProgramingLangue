#include <stdio.h>
#include <stdlib.h>
#define boyut 13

void nbastirma()
{
    int i,j;

    for(i=1; i<=boyut; i++)
    {
        for(j=1; j<=boyut; j++)
        {
            if(j==1 || j==i || j==boyut)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}
void ebastirma()
{
    int i,j;
    for(i=1; i<=boyut; i++)
    {
        for(j=1; j<=boyut; j++)
        {
            if(i==1 || i==boyut/2 || i==boyut || j==1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}
void cbastirma()
{
    int i,j;

    for(i=1; i<=boyut; i++)
    {
        for(j=1; j<=boyut; j++)
        {
            if(j==1 || i==1 || i==boyut)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void mbastirma()
{
    int i,j;

    if(0==boyut%2)
    {
        for(i=1; i<=boyut; i++)
        {
            for(j=1; j<=boyut; j++)
            {
                if(j==1 || (j==boyut/2 || j==(boyut/2)+1)|| j==boyut || i==1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }

    }
    else
    {
        for(i=1; i<=boyut; i++)
        {
            for(j=1; j<=boyut; j++)
            {
                if(j==1 ||  j==(boyut/2)+1 || j==boyut || i==1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}

void tbastirma()
{
    int i,j;

    if(0==boyut%2)
    {
        for(i=1; i<=boyut; i++)
        {
            for(j=1; j<=boyut; j++)
            {
                if(j==boyut/2 || i==1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");

        }
    }
    else
    {
    for(i=1; i<=boyut; i++)
        {
            for(j=1; j<=boyut; j++)
            {
                if(j==boyut/2+1 || i==1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");

        }
    }
}
void ibastirma()
{
    int i,j;
    if(0==boyut%2)
    {
    for(i=1; i<=boyut; i++)
    {
        for(j=1; j<=boyut; j++)
        {
            if(j==boyut/2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    }
    else
    {
      for(i=1; i<=boyut; i++)
    {
        for(j=1; j<=boyut; j++)
        {
            if(j==boyut/2+1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    }

}
void abastirma()
{
    int i,j;

    for(i=1; i<=boyut; i++)
    {
        for(j=1; j<=boyut; j++)
        {
            if((((j==1)||(j==boyut))&& i!= 1)|| ((i==1)&&((j!=1 && j!=boyut)))|| i==boyut/2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }


}
void lbastirma()
{
    int i,j;

    for(i=1; i<=boyut; i++)
    {
        for(j=1; j<=boyut; j++)
        {
            if(j==1 ||  i==boyut)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}
void vbastirma()
{
    int i,j;

    for(i=1; i<=boyut; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(i==j  )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for(j=(boyut*2)-i; j>=i; j--)
        {
            if(j==i+1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}
void rbastirma()
{
    int i,j;

    for(i=1; i<=boyut; i++)
    {
        for(j=1; j<=boyut; j++)
        {
            if(j==1 || ((j==boyut)&&((i!=1)&&(i!=boyut/2))) ||(i==1 && j!=boyut) || (i==boyut/2 && j!=boyut))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}


int main()
{
    int i;
    char x;
    char ad[15]="Necmettin Alver";
    printf("%s\n",ad);
    printf("\n");
    for(i=0; i<15; i++)
    {
        x=ad[i];
        switch(x)
        {

        case 'N':
        {
            nbastirma();
            printf("\n");
            break;

        }
        case 'n':
        {
            nbastirma();
            printf("\n");
            break;

        }
        case 'e':
        {
            ebastirma();
            printf("\n");
            break;

        }
        case 'c':
        {
            cbastirma();
            printf("\n");
            break;

        }
        case 'm':
        {
            mbastirma();
            printf("\n");
            break;

        }
        case 't':
        {
            tbastirma();
            printf("\n");
            break;

        }
        case 'i':
        {
            ibastirma();
            printf("\n");
            break;

        }
        case 'A':
        {
            abastirma();
            printf("\n");
            break;

        }
        case 'l':
        {
            lbastirma();
            printf("\n");
            break;

        }
        case 'v':
        {
            vbastirma();
            printf("\n");
            break;

        }
        case 'r':
        {
            rbastirma();
            printf("\n");
            break;


        }

        printf("\n");

        }
    }
    return 0;
}

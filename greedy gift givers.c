#include <stdio.h>
#include <string.h>
int main()
{
    int a , b , c , i , j , k ;
    freopen("gift1.in","r",stdin);
    freopen("gift1.out","w",stdout);
    scanf("%d\n",&a);
    char s[a][50] , stest[50];
    int amn[a] ;

    for(i=0 ; i<a ; i++)
    {
        scanf("%s\n",s[i]);
        amn[i]=0 ;
    }
    for(i=0 ; i<a ; i++)
    {
        scanf("%s\n",stest);
        j = 0 ;

        while(1)
        {
            if(strcmp(s[j],stest)==0)
                break ;

            j++ ;
        }

        scanf("%d\n%d",&b,&c);

        if(c==0)
            continue ;

        amn[j] = amn[j] - b + b%c;
        b=b/c ;

        for(j=0 ; j<c ; j++)
        {

            scanf("%s\n",stest);
            k = 0 ;

            while(1)
            {
                if(strcmp(stest,s[k]) == 0)
                    break;

                k++ ;
            }

            amn[k] = amn[k] + b ;

        }

    }

    for(j=0 ; j<a ; j++)
        printf("%s %d\n",s[j],amn[j]);

    return 0 ;
}

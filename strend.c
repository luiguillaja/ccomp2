#include<stdio.h>

char strend(char *a,char *b)
{
    while(*a!='\0'){
        a++;
        if(*a==*b)
            break;
    while((*a++=*b++)!='\0')
    }

}

main()
{
    char x[]="hola";
    char y[]="la";
    strend(x,y);


}

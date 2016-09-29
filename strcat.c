#include<stdio.h>

 char strcat(char *a,char *b)
{
    while(*a!='\0')
        a++;
    while((*a++=*b++)!='\0')
    ;


}

main()
{
    char x[]="hola";
    char y[]="mundo";
    strcat(x,y);
    printf("%s \n",x);
}

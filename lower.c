#include<stdio.h>

char lower(char l)
{
while(l>=65 && l<=90)
l=l+32;
return l;



}
main()
{
    printf(" el nuevo caracter es:  %c",lower('K'));
}

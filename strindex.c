#include<stdio.h>

  int strindex(char x[],char t)
{
    int i;
    for(i=strlen(x);i>=0;i--){
    if (x[i]==t)
    return i+1;//+1 por el '\0'
    }
    return -1;
}



main()
{

     char l[]="jaja";
    printf("%i \n",strindex(l,'a'));
}

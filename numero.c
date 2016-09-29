#include<stdio.h>
 numero(char x[])
 {
    char exponente[123];
    char base[123];
    int i,j=0;
    for(i=0;i<strlen(x);i++){
    if(x[i]!='e')//y diferente  de exponente[i]
        x[i]=base[i];
        }

   printf("la base es : %s \n",base);
   printf("el exponente es: %s", exponente);
}

main()
{
    char num[]="123.45e-6";

  numero(num)
}

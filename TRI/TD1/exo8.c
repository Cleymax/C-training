#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Hello world!\n");
    int i;
    for(i=0;i<256;i++)
    {
        printf("%d, %x, %c \n",i,i,i);
    }

    char a,b,c,d,e,f,g,x,y,z;
    char chaine1[26], chaine2[26],chaine3[26];

    printf("entrer un caract%cre a : ",138); // le caractère 'è' a pour valeur décimal 138 dans le code ASCII
    scanf("%c", &a);
    while(getchar()!='\n');
    printf("le caractere a est : %c\n",a);
    

    printf("entrer un caract%cre b : ",138);
    scanf("%c", &b);
    while(getchar()!='\n');
    printf("le caractere b est : %c\n",b);

    printf("entrer un caract%cre c : ",138);
    scanf("%c", &c);
    while(getchar()!='\n');
    printf("le caractere c est : %c\n",c);

    printf("entrer un caract%cre d : ",138);
    scanf("%c", &d);
    while(getchar()!='\n');
    printf("le caractere d est : %c\n",d);

    printf("entrer 3 caract%cres s%cparer par un espace :",138,130); // le caractère 'é' a pour valeur décimal 130 dans le code ASCII
    scanf("%c %c %c",&e,&f,&g);
    while(getchar()!='\n');
    printf("les 3 caract%cres sont %c, %c et %c \n",138,e,f,g);

    printf("entrer 3 caract%cres s%cparer par une virgule : ",138,130);
    scanf("%c,%c,%c",&x,&y,&z);
    while(getchar()!='\n');
    printf("les 3 caract%cres sont %c, %c et %c \n",138,x,y,z);

    printf("entrer une premi%cre chaine de caract%cres : ",138,138);
    scanf("%s",chaine1);
    printf("la chaine de caract%cres est %s \n",138,chaine1);

    printf("entrer une seconde chaine de caract%cres : ",138);
    scanf("%s",chaine2);
    printf("la chaine de caract%cres est %s \n",138,chaine2);

    printf("entrer une troisi%cme chaine de caract%cres : ",138,138);
    scanf("%s",chaine3);
    printf("la chaine de caract%cres est %s \n",138,chaine3);

    return 0;
}
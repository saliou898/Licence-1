#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char verbe[30];
    char rad[28];
    char teste[28];
    int n,i;

    do{
        printf("Donner un verbe du 1er groupe: ");
        gets(verbe);
        n= strlen(verbe);

    }while(verbe[n-2]!='e'|| verbe[n-1]!='r');
    strncpy(rad,verbe,n-2);
    rad[n-2]='\0';

    if (rad[0]=='a'){
        printf("J'%s\n",strcat(rad,"e"));
    }else{
        printf("Je %s\n",strcat(rad,"e"));
    }
    rad[n-2]='\0';
    printf("Tu %s\n",strcat(rad,"es"));
    rad[n-2]='\0';
    printf("Elle/Il %s\n",strcat(rad,"es"));
    rad[n-2]='\0';
    printf("Nous %s\n",strcat(rad,"ons"));
    rad[n-2]='\0';
    printf("Vous %s\n",strcat(rad,"ez"));
    rad[n-2]='\0';
    printf("Elles/Ils %s\n",strcat(rad,"ent"));

    return 0;
}

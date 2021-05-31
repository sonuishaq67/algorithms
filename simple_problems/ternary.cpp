#include<iostream>
#include<string.h>
int main(int argc, char const *argv[])
{
    char star[200];
    char output[100];
    scanf("%s",star);
    int i,j;
    for(i=0,j=0;i<strlen(star);i++){
        if (star[i]=='.')
            {output[j++]='0';continue;}
        else if (star[i+1]=='.')
            output[j++]='1';
        else 
            output[j++]='2';
        i=i+1;
    }
    for(i=0;i<j;i++){
        printf("%c",output[i]);
    }
    return 0;
}

//accesing all elments of the string
#include <stdio.h>
#include<string.h>
int main()
{
char str[]="HELLO WORLD";
//by while loop
/*int i=0;
while(str[i]!='\0'){
    printf("Character at index %d : %c\n",i,str[i]);
    i++;
    */
   //by for loop
   int length=strlen(str);
for(int i=0;i<length;i++){
    printf("index %d: %c\n",i , str[i]);
}

return 0;
}
//Counting no. of vowels Using the length of the string
#include <stdio.h>
#include<string.h>
int main()
{
char a[]="EEC CLASSES";
int length=strlen(a);
int i =0;
int count=0;
while(i<length){
    if(a[i]=='A'|| a[i]=='E'||a[i]=='I'||a[i]=='U'||a[i]=='O'){
        count++;
    }
    i++;
}
printf("Vowels count : %u\n",count);
return 0;
}
#include <stdio.h>
#include<string.h>
int main()
{
char str1[20]="hello";
char str2[20]="World";
char copy_dest[20];

//1) Get string Length
// strlen() returns the number of characters excluding the null terminator '\0'
int length=strlen(str1);
printf("Length of str1:%d\n",length);

//2)Copy String
// strcpy(destination,source) copies the source string into destination
strcpy(copy_dest,str1);
printf("Copied string : %s\n", copy_dest);

// 3) Compare String
// strcmp() returns 0 if strings are identifical
if(strcmp(str2,"World")==0){
    printf("str2 matches 'World' \n");
}
else{
    printf("String are different\n");
}

// 4) Conatenate (join) Strings
// strcat(destination, source) appends source to the end of destination
strcat(str1," ");
strcat(str1,str2);
printf("Concatenated string:%s\n", str1);
return 0;
}
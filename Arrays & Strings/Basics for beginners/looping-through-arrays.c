#include <stdio.h>
int main()
{
int num[]={25,20,30,40,50};
//calculate total array length dynamically
int length=sizeof(num)/sizeof(num[0]);
//loop through each index from 0 up to its length-1
for(int i=0;i<length;i++){
    printf("Index %d: %d\n",i,num[i]);
}
return 0;
}
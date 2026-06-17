#include<stdio.h>
#include<string.h>
void reverseString(char s[]) {
    int left=0;
    int right=strlen(s)-1;

    while(left<right){
        char temp=s[left];
        s[left]=s[right];
        s[right]=temp;

        left++;
        right--;
    }
}
int main(){
    char str[]="HELLO";
    reverseString(str);
    printf("reversed string is %s\n",str);
    return 0;

}

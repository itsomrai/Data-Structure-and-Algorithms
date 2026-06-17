#include<stdio.h>
int main(){
    int num=123;
    int rev=0;
    while(num!=0){
        int rem=num%10;//remainder stored
        num=num/10;//dividing to remove the last number in the element
        rev=rev*10+rem;// now reversing
    }
printf("reversed number is %d\n",rev);
return 0;
}
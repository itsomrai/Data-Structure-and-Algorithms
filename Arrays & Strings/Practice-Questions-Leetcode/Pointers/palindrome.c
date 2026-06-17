#include<stdio.h>
#include<stdbool.h>
bool isPalindrome(int x) {
    //Negative numbers and numbers ending in 0(except 0 itself) are not palindrome
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }
    int og=x;
    long rev = 0;
    //mathematically reverse the integer
    while (x > 0) {
        rev = (rev * 10) + (x % 10);
        x /= 10;
    }

    //check if the reversed number matches the original
    return og==rev;
}
int main(){
    int num=323;
    if(isPalindrome(num)){
        printf("%d is a palindrome \n",num);
    }
    else{
        printf("not palindrome");
    }

    return 0;
}
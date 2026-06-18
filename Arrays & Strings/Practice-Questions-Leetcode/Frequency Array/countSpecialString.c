#include<stdio.h>
int numberOfSpecialChars(char* word) {
    int lower[26]={0};
    int upper[26]={0};
    int count=0;

    for(int i=0; word[i]!='\0';i++){
        char c= word[i];

        if(c>='a'&& c<='z'){
            lower[c -'a']= 1;
        }
        else if(c>='A'&& c<='Z'){
            upper[c -'A']=1;
        }
    }

    for(int i=0; i<26; i++){
        if(lower[i] ==1 && upper[i]==1){
            count++;
        }
    }
    return count;
}
int main(){
    char sample1[]="aaAbdd";
    int result1=numberOfSpecialChars(sample1);
    printf("Test 1 %s:Found %d special character\n", sample1,result1);

    char sample2[]="abc";
    int result2=numberOfSpecialChars(sample2);
    printf("TEst 2 %s: Found %d special character\n",sample2,result2);

    return 0;
}
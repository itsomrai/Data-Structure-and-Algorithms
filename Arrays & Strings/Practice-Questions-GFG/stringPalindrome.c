#include <stdio.h>
#include <string.h>

// Easy function to check palindrome
int isPalindrome(char S[]) {
    int len = strlen(S);
    
    // Loop through the first half of the string
    for (int i = 0; i < len / 2; i++) {
        // Compare character from start with character from end
        if (S[i] != S[len - 1 - i]) {
            return 0; // Not a palindrome
        }
    }
    
    return 1; // It is a palindrome
}

int main() {
    char str[] = "racecar";
    
    if (isPalindrome(str)) {
        printf("Yes, it is a palindrome.\n");
    } else {
        printf("No, it is not a palindrome.\n");
    }
    
    return 0;
}
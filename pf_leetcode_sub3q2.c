#include <stdio.h>
#include <string.h>

int num = 5;
int len = 100;

char* firstPalindrome(char words[][100], int wordsSize) {
    int i, j;  

    for (i = 0; i < wordsSize; i++) {
        char* s = words[i];
        int pal = 1;
        int n = strlen(s);  
        for (j = 0; j < n / 2; j++) {
            if (s[j] != s[n - 1 - j]) {
                pal = 0;
                break;
            }
        }

        if (pal) {
            return s;  
        }
    }

    return "";  
}

int main() {
    
    char words[][100] = {"aba", "baa", "okt", "mini", "yas"};
    int size = sizeof(words) / sizeof(words[0]);

    char* result = firstPalindrome(words, size);
    printf("First palindrome: %s\n", result); 

    return 0;
}


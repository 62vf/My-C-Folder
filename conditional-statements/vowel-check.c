#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    
    // Read input character
    scanf("%c", &ch);
    
    // Check if it's a valid alphabet letter
    if(!isalpha(ch)) {
        printf("Invalid input\n");
    }
    else {
        // Convert to lowercase for easy comparison
        char lowerCh = tolower(ch);
        
        // Check for vowels
        if(lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || 
           lowerCh == 'o' || lowerCh == 'u') {
            printf("Vowel\n");
        }
        else {
            printf("Consonant\n");
        }
    }
    
    return 0;
}
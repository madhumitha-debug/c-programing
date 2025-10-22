#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0}; 
    int i;
    char first_repeat = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through the string
    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        freq[(unsigned char)str[i]]++;
        if(freq[(unsigned char)str[i]] == 2) {  
            first_repeat = str[i];
            break;
        }
    }

    if(first_repeat != '\0')
        printf("First repeating character: %c\n", first_repeat);
    else
        printf("-1\n");

    return 0;
}


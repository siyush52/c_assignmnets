#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char inputString[MAX_LENGTH];
    
   
    printf("Enter a string: ");
    fgets(inputString, MAX_LENGTH, stdin);
    inputString[strcspn(inputString, "\n")] = '\0';  
    
    int length = strlen(inputString);

    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", inputString[i]);
    }

    return 0;
}

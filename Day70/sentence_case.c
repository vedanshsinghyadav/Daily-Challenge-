/*Write a program to take a string input. Change it to sentence case*/




#include <stdio.h>   
#include <string.h>  
#include <ctype.h>   


void toSentenceCase(char *str) {
    int i = 0;           
   int newWord = 1;     
    
    
    while (str[i] != '\0') {
        
        
        if (str[i] == ' ') {
            
            newWord = 1;
        } 
        
        else if (newWord) {
           
            str[i] = toupper(str[i]);
            
            newWord = 0;
        } 
        
        else {
            
            str[i] = tolower(str[i]);
        }
        
        i++;  // Move to next character
    }
}

int main() {
    // Declare a character array (string) that can hold up to 999 characters + null terminator
    char str[1000];
    
    // Ask user to enter a string
    printf("Enter a string: ");
    
    // Read the entire line of input from user (including spaces)
    // fgets reads until newline or max size, whichever comes first
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character '\n' that fgets adds at the end
    // strcspn finds position of '\n' and we replace it with '\0' (null terminator)
    str[strcspn(str, "\n")] = '\0';
    
    // Call our function to convert the string to title case
    toSentenceCase(str);
    
    // Print the converted string
    printf("Output: %s\n", str);
    
    return 0;  // Program executed successfully
}
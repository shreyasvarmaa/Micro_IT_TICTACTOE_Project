#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12  // You can change the password length here

int main() {
    // Characters allowed in the password
    const char charset[] = "abcdefghijklmnopqrstuvwxyz"
                           "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                           "0123456789"
                           "!@#$%^&*()_+";

    int charsetSize = sizeof(charset) - 1; // exclude the terminating null character
    char password[PASSWORD_LENGTH + 1];    // +1 for the null terminator

    // Initialize random number generator
    srand(time(NULL));

    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        int key = rand() % charsetSize;
        password[i] = charset[key];
    }

    password[PASSWORD_LENGTH] = '\0';  // Null terminate the string

    printf("Generated Password: %s\n", password);

    return 0;
}

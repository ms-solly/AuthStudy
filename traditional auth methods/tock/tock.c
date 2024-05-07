#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h> 

#define TOKEN_LENGTH 20
#define TOKEN_EXPIRY_SECONDS 3600 

struct User {
    char username[20];
    char password[20];
    char token[TOKEN_LENGTH + 1]; 
    time_t token_expiry;
};

struct User users[] = {
    {"user1", "password1", "", 0},
    {"user2", "password2", "", 0}
};

void generate_token(char* token) {
    const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    int i;
    srand(time(NULL)); 
    for (i = 0; i < TOKEN_LENGTH; ++i) {
        token[i] = charset[rand() % (sizeof(charset) - 1)];
    }
    token[TOKEN_LENGTH] = '\0'; 
}

int authenticate(char* username, char* password, char* token) {
    int i;
    for (i = 0; i < sizeof(users) / sizeof(users[0]); ++i) {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) {
            generate_token(users[i].token);
            users[i].token_expiry = time(NULL) + TOKEN_EXPIRY_SECONDS;
            strcpy(token, users[i].token);
            return 1; 
        }
    }
    return 0;
}

int main() {
    char username[20];
    char password[20];
    char entered_token[TOKEN_LENGTH + 1]; 

    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    if (authenticate(username, password, entered_token)) {
        printf("Login successful. Token: %s\n", entered_token);   
        printf("Please wait few seconds to get access\n");
        
        sleep(5);

        printf("Enter the token: ");
        scanf("%s", entered_token);

        int i;
        for (i = 0; i < sizeof(users) / sizeof(users[0]); ++i) {
            if (strcmp(users[i].token, entered_token) == 0) {
                printf("Login successful. Access granted!\n");
                return 0; 
            }
        }
        printf("Invalid token. Access denied.\n");
    } else {
        printf("Invalid username or password.\n");
    }

    return 0;
}

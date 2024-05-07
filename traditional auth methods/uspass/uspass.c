#include <stdio.h>
#include <string.h>

struct User {
    char username[20];
    char password[20];
};


struct User users[] = {
    {"user1", "password1"},
    {"user2", "password2"}
};


int authenticate(char* username, char* password) {
    int i;
    for (i = 0; i < sizeof(users) / sizeof(users[0]); ++i) {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) {
            return 1; 
        }
    }
    return 0; 
}

int main() {
    char username[20];
    char password[20];
    
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);
    
    
    if (authenticate(username, password)) {
        printf("Hey Welcome to authtest! Your Login was successful.\n");
    } else {
        printf("Invalid username or password! you can recheck your credentials and try again\n");
    }
    
    return 0;
}

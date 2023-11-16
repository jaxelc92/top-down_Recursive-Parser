#include<stdio.h>
#include<string.h>

char c[2];
char c_next[2];
int valid = 0;
int count = 0;

void P();
void Pi();
void Coincidir(char *c);

int main() {
    printf("Ingresa el primer caracter: ");
    scanf("%1s", c);
    count++;
    P();
    if (strcmp(c, "$") == 0 && count==4) {
        printf("Analisis exitoso");
    }
    else {
        printf("Error...");
    }
    return 0;
}

void P() {
    if(strcmp(c, "Q") == 0) {
        valid = 1;
        strcpy(c_next, "+");
        Pi();
    } else {
        valid = 0;
    }
}

void Pi() {
    if (strcmp(c_next, "+") == 0) {
        Coincidir(c_next);
        Coincidir(c);
        P();
    } else {
        valid = 0;
        return;
    }
}

void Coincidir(char *cc) {
    if (strcmp(c_next, cc) == 0) {
        printf("Ingresa el siguiente caracter: ");
        scanf("%1s", c);
        count++;
    } else if(strcmp(c, "$") == 0) {
        return;
    }
}
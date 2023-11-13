#include <stdio.h> 
#include <string.h> 
#define MAX_LENGTH 1000 
int main() { 
char text[MAX_LENGTH]; 
printf("Введите текст: "); 
fgets(text, MAX_LENGTH, stdin);
if (text[strlen(text) - 1] == '\n') { 
text[strlen(text) - 1] = '\0'; 
} 
int count = strlen(text); 
printf("Количество символов: %d\n", count); 
return 0; 
}
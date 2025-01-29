#include <stdio.h>
int main() {
    char name[100];
    scanf("%s ", &name);
    int age;
    scanf("%d\n",&age);
    char hobby[100];
    scanf("%s\n", &hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s",hobby);
    return 0;
}
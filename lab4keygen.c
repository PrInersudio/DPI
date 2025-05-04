#include <stdio.h>

int strSum(char *name) {
    int result;
    int i = 0;
    while (name[i]) {
        result += name[i];
        ++i;
    }
    return result;    
}

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Запуск: %s <имя>\n", argv[0]);
        return -1;
    }
    char *name = argv[1];
    int i = 0;
    while (name[i]) {
        if (name[i] < 'A') {
            printf("4661\n");
            return 0;
        }
        if (name[i] >= 'Z')
            name[i] -= 32;
        ++i;
    }
    printf("%d\n", strSum(name) ^ 0x1234 ^ 0x5678);
    return 0;
}
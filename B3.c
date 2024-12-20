#include <stdio.h>

int main() {
    struct sinhvien {
        char name[50];
        int age;
        char phoneNumber[50];
    };

    struct sinhvien SV[4];
    for(int i = 0; i < 5; i++) {
        printf("Name %d: ", i + 1);
        fgets(SV[i].name, sizeof(SV[i].name), stdin);
        printf("Age %d: ", i + 1);
        scanf("%d", &SV[i].age);
        fflush(stdin);
        printf("SDT %d: ", i + 1);
        fgets(SV[i].phoneNumber, sizeof(SV[i].phoneNumber), stdin);
        fflush(stdin);
        printf("\n");
    }

    for(int i = 0; i < 5; i ++) {
        printf("Person %d\n", i + 1);
        printf("Name: %s", SV[i].name);
        printf("Age: %d\n", SV[i].age);
        printf("Phone number: %s\n", SV[i].phoneNumber);
        printf("\n");
    }
}

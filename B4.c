#include <stdio.h>

int main() {
    struct sinhvien {
        int id;
        char name[50];
        int age;
        char phoneNumber[50];
    };
    struct sinhvien SV[4];
    for(int i = 0; i < 5; i++) {
        SV[i].id = i + 1;
        printf("Name(SV%d): ", i + 1);
        fgets(SV[i].name, sizeof(SV[i].name), stdin);
        printf("Age(SV%d): ", i + 1);
        scanf("%d", &SV[i].age);
        fflush(stdin);
        printf("SDT(SV%d):\n ", i + 1);
        fgets(SV[i].phoneNumber, sizeof(SV[i].phoneNumber), stdin);
        fflush(stdin);
    }

    for(int i = 0; i < 5; i ++) {
        printf("ID %d\n", SV[i].id);
        printf("Name:%s", SV[i].name);
        printf("Age:%d\n", SV[i].age);
        printf("SDTSDT: %s\n", SV[i].phoneNumber);
    }
}

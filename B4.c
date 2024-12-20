#include <stdio.h>

int main(void) {
    struct sinhvien {
        int id;
        char name[50];
        int age;
        char phoneNumber[10];
    };

    struct sinhvien SV[4];
    for(int i = 0; i < 5; i++) {
        sinhvien[i].id = i + 1;
        printf("Ten %d: ", i + 1);
        fgets(sinhvien[i].name, sizeof(sinhvien[i].name), stdin);
        printf("Age %d: ", i + 1);
        scanf("%d", &sinhvien[i].age);
        fflush(stdin);
        printf("SDT %d: ", i + 1);
        fgets(sinhvien[i].phoneNumber, sizeof(sinhvien[i].phoneNumber), stdin);
        fflush(stdin);
        printf("\n");
    }

    for(int i = 0; i < 5; i ++) {
        printf("Person id %d\n", sinhvien[i].id);
        printf("Name: %s", sinhvien[i].name);
        printf("Age: %d\n", sinhvien[i].age);
        printf("Phone number: %s\n", sinhvien[i].phoneNumber);
        printf("\n");
    }
}

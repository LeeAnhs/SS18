#include <stdio.h>

int main () {
    struct sinhvien {
        char name[50];
        int age;
        char phoneNumber[50];
    };
  struct sinhvien SV01;
 
  printf("Name:");
  scanf("%s",&SV01.name);
  printf("Age:");
  scanf("%d",&SV01.age);
  printf("SDT:");
  scanf("%s",&SV01.phoneNumber);
  
  printf("Name: %s\n", SV01.name);
  printf("Age: %d\n", SV01.age);
  printf("SDT: %s\n", SV01.phoneNumber);
  
  
  return 0;
  
}

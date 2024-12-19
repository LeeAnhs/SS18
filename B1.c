#include <stdio.h>

int main () {
    struct sinhvien {
        char name[50];
        int age;
        int phoneNumber;
    };
  struct sinhvien SV01={"LeXuanAnh",18,329325058};
  printf("Name: %s\n", SV01.name);
  printf("Age: %d\n", SV01.age);
  printf("SDT: %d\n", SV01.phoneNumber);
  return 0;
  
}

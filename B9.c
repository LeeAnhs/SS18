#include<stdio.h>
#include<string.h>

struct Dish{
        int id;
        char name[100];
        double price;
    };
int main(){
    struct Dish menu[100]={
        {1,"Khoai",35},
        {2,"Ga",40},
        {3,"Kem",10},
        {4,"Com", 30},
        {5,"Vit",25},
    };
    int luachon;
    int size= 5;
    do{
        printf("1.In ra gia tri cac phan tu on an trong menu\n");
        printf("2.Them 1 phan tu\n");
        printf("3.Sua mot phan tu\n");
        printf("4.Xoa mot phan tu\n");
        printf("5.Sap xep phan tu tang dan\n");
        printf("6.Tim kiem phan tu\n");
        printf("7. Thoát\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d",&luachon);
        getchar();
        switch (luachon){
        case 1:
            for (int i = 0; i < size; i++){ 
                if(menu[i].id==0){
                    break;
                }
                printf("%d. %s: %.2lf\n",menu[i].id,menu[i].name,menu[i].price);
            }
            break;
        case 2:
            menu[size].id=size+1;
            printf("Nhap ten mon muon them: ");
            fgets(menu[size].name,sizeof(menu[size].name),stdin);
            menu[size].name[strlen(menu[size].name)-1];
            printf("Nhap gia tien: ");
            scanf("%lf",&menu[size].price);
            getchar();
            size++;
            for (int i = 0; i < size; i++){ 
                printf("%d. %s: %lf\n",menu[i].id,menu[i].name,menu[i].price);
            }    

            break;
        case 3:
                int changeID;
                printf("nhap vao id muon sua: ");
                scanf("%d",&changeID);
                getchar();
                if(changeID>size-1||changeID<0){
                    printf("khong ton tai id do\n");
                    break;
                }
                for(int i=0;i<size;i++){
                        if(changeID==menu[i].id){
                                printf("nhap vao mon sua: ");
                                fgets(menu[i].name,sizeof(menu[i].name),stdin);
                                menu[i].name[strlen(menu[i].name)-1];
                                printf("nhap vao gia tien muon sua: ");
                                scanf("%lf",&menu[i].price);
                                getchar();
			}
		}
                printf("Menu sau khi thay doi la: \n");
                for(int i=0;i<size;i++){
                	printf("%d. %s: %lf\n",menu[i].id,menu[i].name,menu[i].price);
                }
	        break;
        case 4:
            size--;
            for (int i=0;i<size;i++){ 
                if(menu[i].id==0){
                    break;
                }
                printf("%d. %s: %lf\n",menu[i].id,menu[i].name,menu[i].price);
            }
            break;
        case 5:
            for(int i=0;i<size-1;i++){
                for(int j=0; j<size-i-1;j++){
                        if (menu[j].price>menu[j+1].price) {
                                struct Dish temp=menu[j];
                                menu[j]=menu[j+1];
                                menu[j+1]=temp;
                            }
                        }
                }
            printf("Sau khi sap xep:\n");
            for (int i=0;i<size;i++){ 
                if(menu[i].id==0){
                    break;
                }
                printf("%d.%s:%lf\n",menu[i].id,menu[i].name,menu[i].price);
            }
            break;
        case 6:
            printf("Chua xong\n");
            break;
        case 7: 
            printf("Done");
            break;
        }
    } while (luachon!=7);

    return 0 ;
}
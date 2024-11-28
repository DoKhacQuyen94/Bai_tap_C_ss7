#include<stdio.h>
int main(){
    int soMang;
    printf("Nhập chiều dài mảng: ");
    scanf("%d",&soMang);
    int array[soMang];
    int phanTu;
    for (int i = 0; i < sizeof(array)/sizeof(int); i++){
        printf("Nhập phần tử thứ %d: ",i+1);
        scanf("%d",&phanTu);
        array[i]=phanTu;
    }
    for (int i = 0; i < sizeof(array)/sizeof(int); i++){
        printf("Phần tử thứ %d trong mảng là: %d \n",i+1,array[i]);
    }
    return 0;
}
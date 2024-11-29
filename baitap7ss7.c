#include<stdio.h>
int main(){
    int soPhanTu;
    printf("nhap so phan tu cua mang:");
    scanf("%d",&soPhanTu);
    if(soPhanTu<0){
        printf("Loi nhap gia tri");
        return 1;
    }
    int array[soPhanTu];
    for(int i=0;i <soPhanTu;i++){
        printf("nhap phan tu thu %d:  ",i+1);
        scanf("%d",&array[i]);
        if(array[i] %2 == 0){
            i-=1;
        }
    }

    return 0;
}
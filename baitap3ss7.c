#include<stdio.h>
int main(){
    int array[10]={9,4,2,3,7,3,1,8,6,11};
    int soChan=0;
    printf("Tất cả phần tử số chẵn trong mảng là: \n");
    for(int i=0;i<sizeof(array)/sizeof(int);i++){
        if(array[i]%2==0){
            printf("%d \n",array[i]);
            soChan+=1;
        }
    }
    if(soChan==0){
        printf("Mảng không có số chẵn \n");
    }
    return 0;
}
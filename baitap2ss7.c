#include<stdio.h>
int main(){
    int array[6];
    int number;
    for (int i=0;i < sizeof(array)/sizeof(int);i++){
        printf("Nhập số nguyên thứ %d : ",i+1);
        scanf("%d",&number);
        array[i]= number;
    }
    for (int i=0;i < sizeof(array)/sizeof(int);i++){
        printf("Phần tử thứ %d: %d \n",i+1,array[i]);}
    return 0;
}
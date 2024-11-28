#include<stdio.h>
int main(){
    int array[5];
    for (int i=0;i < sizeof(array)/sizeof(int);i++){
        printf("Nhập số nguyên thứ %d : ",i+1);
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < sizeof(array)/sizeof(int); i++)
    {
        if(array[i] %2 ==0){
            array[i] += 3;
        }
        if(array[i] %2 !=0){
            array[i] += 2;
        }
    }
    return 0;
}
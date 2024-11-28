#include<stdio.h>
int main(){
    int array[5];
    for (int i=0;i < sizeof(array)/sizeof(int);i++){
        printf("Nhập số nguyên thứ %d : ",i+1);
        scanf("%d",&array[i]);
    }
    int max = array[0];
    int min = array[0];
    for(int i = 1; i < sizeof(array)/sizeof(int);i++){
        if(array[i]> max){
            max=array[i];
        }
        if (array[i]< min){
            min =array[i];
        }
    }
    printf("phần tử lớn nhất trong mảng là: %d \n", max);
    printf("phần tử nhỏ nhất trong mảng là: %d \n",min);
    return 0;
}
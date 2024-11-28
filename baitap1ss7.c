#include<stdio.h>
int main(){
    int array[5] ={9,4,2,0,6};
    for(int i= 0; i< sizeof(array)/sizeof(int);i++){
        printf("Phần tử thứ %d: %d\n",i+1,array[i]);
    }
    printf("Mảng có độ dài = %d",sizeof(array)/sizeof(int));
    return 0;
}
#include<stdio.h>
#include<conio.h>
void main(){
  int data[5]= {1,2,4,5,8};
  int *base_addr;
  base_addr = data;
  printf("Here your Base address is %u \n", base_addr);
  for(int i =0;i<5;i++){
    printf("at address %i ",base_addr);
    printf("We have data[%d] i.e. %d \n",i,*base_addr);
    base_addr++;
  }
}

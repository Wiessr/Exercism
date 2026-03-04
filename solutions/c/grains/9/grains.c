#include "grains.h"
uint64_t square(uint8_t index){
    
    uint64_t sum=1;
    if(index<0||index>64)return 0;
    for(int i=0;i<index-1;i++){
        sum*=2;
    } return sum;
}
uint64_t total(void){
    uint64_t sum_all=0;
    uint8_t i;
    for(i=1;i<=64;i++){
        sum_all+=square(i);
    } return sum_all;
}

#include "grains.h"
uint64_t square(uint8_t index){
    uint64_t sum=1;
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

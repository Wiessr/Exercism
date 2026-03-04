#include "grains.h"
uint64_t square(uint8_t index){
    uint64_t sum=1;
    for(index=0;index<64;index++){
        sum*=2;
    }
}
uint64_t total(void){
    uint64_t sum_all=0;
    uint8_t i;
    for(i=0;i<=64;i++){
        sum_all+=square(1);
    } return sum_all;
}

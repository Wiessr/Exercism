#include "grains.h"
uint64_t square(uint8_t index){
    uint64_t sum=1;
    for(index=0;index<=64;index++){
        sum*=index;
    }
}
uint64_t total(void){
    uint64_t sum_all=1;
    uint8_t i;
    for(i=0;i<=64;i++){
        sum_all*=i;
    } return sum_all;
}

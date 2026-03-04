#include "grains.h"
uint64_t square(uint8_t index){
    int sum=1;
    for(index=0;index<=65;index++){
        sum+=pow(2,index);
    }
}
uint64_t total(void){
    return square;
}

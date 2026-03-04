#include "difference_of_squares.h"
unsigned int sum_of_squares(unsigned int number){
    unsigned int sumy=0;
    unsigned int i;
    for(i=1;i<=number;i++){
        sumy+=i*i;
    } return sumy;
}
unsigned int square_of_sum(unsigned int number){
    unsigned int sumx=0,sum=0;
    unsigned int i;
    for(i=1;i<=number;i++){
        sumx+=i;
        
    } return sumx*sumx;
}
unsigned int difference_of_squares(unsigned int number){
    return square_of_sum(number) - sum_of_squares(number);
}

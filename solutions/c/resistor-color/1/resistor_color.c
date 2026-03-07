#include "resistor_color.h"
typedef enum {
    black = 0,
    brown,
    red,
    orange,
    yellow,
    green,
    blue,
    violet,
    grey,
    white
} resistor_band_t;
int band_value(int color){   
    resistor_band_t color;
    return color; 
} 
int band_list(int list){
    resistor_band_t list[]={
    black,
    brown,
    red,
    orange,
    yellow,
    green,
    blue,
    violet,
    grey,
    white
}; return list;
}
#include "resistor_color.h"

int band_value(resistor_band_t color){   
    return color;
} 
resistor_band_t* colors(void){
    static resistor_band_t colors[]={
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
};
    return colors;
}
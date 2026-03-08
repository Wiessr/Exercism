#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H

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
int band_value(resistor_band_t color);
resistor_band_t* colors(void);

#endif

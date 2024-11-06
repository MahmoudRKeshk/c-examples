#include <stdio.h>

double fahrenheit2celecios(double f);
double celecios2fahrenheit(double c);

int main(){
    printf ("The 32°C is equal to %.2f°F \n", celecios2fahrenheit(32));
    printf ("The 96°F is equal to %.2f°C \n", fahrenheit2celecios(96));

    return 0;
};


double fahrenheit2celecios(double f){
    double c = (f-32)*(5.0/9.0);
    return c;
};

double celecios2fahrenheit(double c){
    double f = (c*9.0/5.0)+32;
    return f;
};

// points to take care of 
//   1. In the equation write integers as doubles otherwise there is no percision
//   2. In the print statement the specifiers must match the foat values
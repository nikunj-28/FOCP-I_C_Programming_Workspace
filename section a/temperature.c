#include<stdio.h>

float celcius(float temperature);

int main(){
    float far = celcius(10);
    printf("%.2f",far);
    return 0;
}

float celcius(float temperature){
    float far = (temperature*1.8)+32;
    return far;
}


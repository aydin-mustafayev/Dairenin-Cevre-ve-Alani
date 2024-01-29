#include <stdio.h>
#include <stdlib.h>

int main () 
{
    float r, circumference, area;  // dairenin yari capi, cevre, alan
    const float PI = 3.1415;        // PI degeri sabitdir
    printf("Dairenin yaricapi girin:"); //kullaniciya mesaj
    scanf("%f", &r);            //kullanicidan r degeri girmesini istiyoruz
    circumference = 2 * PI * r; //dairenin cevresi 2 * 3.1415 * r
    area= PI * r * r;       // 3.1415 * r * r
    printf("circumference of circle:%f\n", circumference); // dairenin cevresi sonucu
    printf("area of circle:%f", area);  // dairenin alani sonucu

     return 0 ;

}
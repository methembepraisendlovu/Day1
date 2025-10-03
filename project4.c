#include<stdio.h>
#define x (5.0/9.0)
#define y 32
#define z (5.0/9.0)
int main(){
    int temp1, temp2;
    float celsius, Fahrenheit;

  
    printf("Enter temperature in Celsius: ");
    scanf("%d", &temp1);
    Fahrenheit = ((temp1 * x) + y);
    printf("Temperature in Fahrenheit: %f\n", Fahrenheit);

  
    printf("Enter temperature in Fahrenheit: ");
    scanf("%d", &temp2);
    celsius = (temp2 - y) * z;
    printf("Temperature in Celsius: %f\n", celsius);

    return 0;
}

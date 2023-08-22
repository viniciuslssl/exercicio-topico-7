#include<stdio.h>
int main(){

    float raio, area;
    printf("Qual valor do raio?");
    scanf("%f",&raio);
    area = 3.14 *( raio * raio);
    printf("%f",area);
    return 0;

}
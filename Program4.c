#include <stdio.h>

struct State {
    char name[50];
    int population;
    float lit_rate;
    float income;
};

int main() {
    struct State st1;
    strcpy(st1.name, "Maharashtra");
    st1.population = 1000000;
    st1.lit_rate = 5.8;
    st1.income = 6000.00;
    
    printf("State: %s\n", st1.name);
    printf("Population: %d\n", st1.population);
    printf("Literacy Rate: %.2f\n", st1.lit_rate);
    printf("Income: %.2f\n", st1.income);

    return 0;
}
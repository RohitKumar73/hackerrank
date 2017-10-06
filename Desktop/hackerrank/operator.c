#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
float mealCost;
        int  taxPercent,tipPercent;
    float tip,tax,totalCost;
    scanf("%f",&mealCost);
    scanf("%d",&taxPercent);
    scanf("%d",&tipPercent);
    tip = (mealCost*(tipPercent/100.0));
    tax = (mealCost*(taxPercent/100.0));
     totalCost= (mealCost+tip+tax);   
    printf("The total meal cost is %.0f dollars.",totalCost);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
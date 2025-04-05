//ASHIQ ALI N K 24100673
#include <stdio.h>
#include <math.h>
double factorial(int num) {
    double fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
double sin_series(double x, int n) {
    double sin_sum = 0.0, term;
    int sign = 1;

    for (int i = 0; i < n; i++) {
        int power = 2 * i + 1;
        double numerator = pow(x, power);
        double denominator = factorial(power);  
        term = sign * (numerator / denominator);
        sin_sum += term;
        sign = -sign; 
    }
    return sin_sum;    
}

double cos_series(double x,int n){
    double cos_sum=0,term;
    int sign = 1;
    for (int i=0;i<n;i++){
        int power =2*i;
        int numerator = pow(x,power);
        int denominator = factorial(power);
        term=sign*(numerator/denominator);      
        cos_sum+=term;
        sign=-sign ;}
    return cos_sum;
}
int sum_cubes(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * i * i;  
    }
    return sum;
}
int main() {
    double degree, radians;
    int terms;
    printf("Enter the degree: ");
    scanf("%lf", &degree);
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    radians = degree * (M_PI / 180.0);
    printf("Sine series: \n")
    double sin_result = sin_series(radians, terms);
    double cos_result = cos_series(radians,terms);
    printf("sin(%.2lf) ≈ %.6lf\n", degree, sin_result);
    printf("Actual sin(%.2lf) = %.6lf\n", degree, sin(radians));
    
    printf("cos(%.2lf) ≈ %.6lf\n", degree, cos_result);
    printf("Actual cos(%.2lf) = %.6lf\n", degree, cos(radians));

    printf("Sum of cubes of first %d natural numbers = %d\n", terms, sum_cubes(terms));
    return 0;
}

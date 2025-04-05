//ASHIQ ALI N K 24100673
#include <stdio.h>
#include <math.h>
#define PI 3.14
double calc_diameter(double x1,double y1,double x2,double y2){
    return sqrt(pow(x2-x1,2)+pow((y2-y1),2)); 
}
double calc_area(double radius){
    return PI*radius*radius;
}
double calc_perimeter(double radius){
    return 2*PI*radius;
}

int main(){
    double x1,x2,y1,y2;
    double diameter,radius,perimeter,area;
    printf("enter coordinates of first point (x1,y1): ");
    scanf("%lf%lf",&x1,&y1);
    printf("\nenter coordinates of first point (x2,y2): ");
    scanf("%lf%lf",&x2,&y2);
    diameter = calc_diameter(x1,y1,x2,y2);
    radius=(double)diameter/2;
    area=calc_area(radius);
    perimeter=calc_perimeter(radius);
    printf("\ndiameter = %.2lf ",diameter);
    printf("\narea = %.2lf ",area);
    printf("\nperimeter = %.2lf",perimeter);
}
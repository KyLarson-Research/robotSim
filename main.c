#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h> // do not forget to compile : gcc main.c -lm
#include"robot.h"
//#include"robot.c"
#define PI 3.141592654
int main(void){
   //----------------Check to make sure that robot produces x_next 0.05 y_next 0.0 and theta_next is 0.01
   /*double x =0;
   double y =0;
   double theta =0;
   double v =0.5, w =0.1;
   double x_next, y_next, theta_next;
   printf("\n%lf %lf %lf\n", x, y, theta);
   robot(0.1, x, y, theta, v, w, &x_next, &y_next, &theta_next);
   printf("\n%lf %lf %lf\n", x_next, y_next, theta_next);*///end of check above -----------------------
   
   double T, x, y, theta, v[50], w[50], x_next, y_next, theta_next;
   int k=0;
   scanf("%lf %lf %lf %lf", &T, &x, &y, &theta);
   x_next = x;
   y_next = y;
   theta_next = theta;
   for(k=1;scanf("%lf %lf", &v[k], &w[k]) == 2; k++){
      robot(T, x_next, y_next, theta_next, v[k], w[k], &x_next, &y_next, &theta_next);
      //if(k==5 || k==10){
         printf("%lf: %.4lf, %.4lf, %.4lf\n", T*k, x_next, y_next, theta_next);
      //}
   }
   robot(T, x_next, y_next, theta_next, v[k], w[k], &x_next, &y_next, &theta_next);
   printf("%lf: %lf, %lf, %lf\n", T*k, x_next, y_next, theta_next);
   return 0;
}

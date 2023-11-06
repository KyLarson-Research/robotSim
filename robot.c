#include<stdio.h>
#include<math.h>//remember to compile with –lm

double X_k_1(double x_k, double T, double theta_k, double v_k, double w_k){
   if(fabs(w_k) < 0.000000001){
      return x_k + T*cos(theta_k)*v_k;
   }
   else{
      return x_k + (v_k/w_k)*(sin(theta_k + T*(w_k))-sin(theta_k));
   }
}

double Y_k_1(double y_k, double T, double theta_k, double v_k, double w_k){
   if(fabs(w_k) < 0.000000001){
      return y_k + T*sin(theta_k)*v_k;
   }
   else{
      return y_k - (v_k/w_k)*(cos(theta_k + T*(w_k))-cos(theta_k));
   }
}

double theta_k_1(double theta_k, double T, double v_k, double w_k){
   if(fabs(w_k) < 0.000000001){
      return theta_k;
   }
   else{ 
      return theta_k + T*w_k;
   }
   
}


void robot(double T, double x, double y, double theta, double v, double w, double *x_next, double *y_next, double *theta_next){
   *x_next = X_k_1(x, T, theta, v, w);
   *y_next = Y_k_1(y, T, theta, v, w);
   *theta_next = theta_k_1(theta, T, v, w);
   return;
}



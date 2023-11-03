#ifndef ROBOT_H
#define ROBOT_H
#include<math.h>
#include"robot.c"

double X_k_1(double x_k, double T, double theta_k, double v_k, double w_k);

double Y_k_1(double y_k, double T, double theta_k, double v_k, double w_k);

double theta_k_1(double theta_k, double T, double v_k, double w_k);

void robot(double T, double x, double y, double theta, double v, double w, double *x_next, double *y_next, double *theta_next);
#endif

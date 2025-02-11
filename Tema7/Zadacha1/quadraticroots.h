#ifndef QUADR_H_
#define QUADR_H_
// Явор 9б

typedef struct
{
  double x1;
  double x2;
  int norealroots;
} QuadraticRootsResult;

QuadraticRootsResult findroots(double a, double b, double c);
QuadraticRootsResult result;

#endif
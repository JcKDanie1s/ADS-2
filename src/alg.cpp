// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double first = value;
  for (int i = 1; i < n; i++) {
    value = value * first;
  }
  return value;
}

uint64_t fact(uint16_t n) {
  uint64_t res;
  if (n == 0) {
    res = 1;
    return res;
  }
  res = fact(n - 1) * n;
  return res;
}

double calcItem(double x, uint16_t n) {
  return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
  double sum = 1;
  for (count; count > 0; count--) {
    sum = calcItem(x, count) + sum;
  }
  return sum;
}

double expn(double x, uint16_t count) {
  double sum = x;
  int step = 3;
  int minus = -1;
  for (int i = 2; i <= count; i++) {
    sum += minus * calcItem(x, step);
    step += 2;
    minus *= -1;
  }
  return sum;
}

double sinn(double x, uint16_t count) {
double sum = 1;
  int step = 2;
  int minus = -1;
  for (int i = 2; i <= count; i++) {
    sum += minus * calcItem(x, step);
    step += 2;
    minus *= -1;
  }
  return sum;
}

#include <stdio.h>
#include <math.h>
#include <stdio.h>

int main() {
  // for loop mechanism:
  // 1. Set i to an initial value of 0 (Initialization)
  // 2. Set the condition to terminate the loop (Condition)
  // 3. Increment i after each looping step (update)


  int i, nsamps;
  double samp, srate;
  double twopi = 2.0 * 3.14159265358979;
  double y;
  nsamps = 1000;
  samp = 1;
  srate = 1000;
  y = twopi*1/srate;

  for(i=0;i <= nsamps; i++){
      samp = sin(y*i);
      printf("%.8lf\n",samp);
  }
  return 0;
}

  
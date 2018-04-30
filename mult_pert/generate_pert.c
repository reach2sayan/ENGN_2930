#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
int main()
{
  double acell = 5.397949139341342573;
  double dist = 0.0;
  double dist2 = dist*dist;
  double inc = 0.0001;
  FILE *fp,*fpert;
  fp = fopen("perturbations.txt","w");
  fpert = fopen("pert_mag.txt","w");
  for(int i=1; i <= 25; i++)
    {
      double pert1 = 0.0+(i*inc);
      double pert2 = 0.25-(i*inc);
      fprintf(fp, "xred%d\n\n", i);
      fprintf(fp, "%f %f %f\n", pert1, pert1, pert1);
      fprintf(fp, "%f %f %f\n\n", pert2, pert2, pert2);
      dist = 2*sqrt(3*((pert1*pert1)))*acell;
      dist2 = dist*dist;
      fprintf(fpert,"%.12f %.12f\n",dist,dist2);
    }
  fclose(fp);
  fclose(fpert);
  return 0;
}

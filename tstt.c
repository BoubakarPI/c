#include <stdio.h>

int main () {

    float HT, TTC;
     printf("Saisir le prix HT : ");
     scanf("%f", &HT);

      if (HT < 150000)
        TTC = HT *1.2;
      else 
        TTC = HT*1.02;
      printf("Le TTC est de %f", TTC);

}
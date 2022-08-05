#include <stdio.h>
  
  int factoriel(int n){
  int i;
  int f = 1;
  for (i = 1; i <= n; i++)
    f = f * i;
  return f;
  }


int main(){
    int n;
    printf("entrer un nombre n : ");
    scanf("%d",&n);
    
    if(n < 0){
        printf("ce nombre negatif n'a pas de factorielle");
    }
    else if(n==0){
        printf("la factorielle est : 1");

    }
    else{

    printf("la factorielle de %d est %d\n", n, factoriel(n));
}
}
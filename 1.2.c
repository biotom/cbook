#include <stdio.h>
#include <stdbool.h>

void primeFinder(int n) {
  //uses the sieve of Eratosthenes to find a prime, and checks downwards for a pair
    bool numbers[n];

  for (int i = 0; i <= n - 1 ; i++){
    numbers[i] = true;
  } 


  for(int p = 2; p * p <= n; p++) {
    if (numbers[p] == true) {
      for (int i = p*p; i <= n; i += p) {
        numbers[i] = false;
      }
    }
  }
 
 for(int i = 2; i <= n; i++) {
   if (numbers[i] == true) {
     if (numbers[i-2] == true) {
       printf("%d %d\n", i-2, i);
     }
   }
 }
}

int main(void){
  printf("prime pairs:\n");
  primeFinder(100);
  return 0;
}
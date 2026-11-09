#include <stdio.h>

int main(){

  int n, primeIndex = 2, p;
  scanf("%i", &n);
  int primes[n];
  primes[0] = 2;
  primes[1] = 3;

  _Bool isPrime = 1;
  for (p = 5; p < n; p+=2){
    isPrime = 1;

    for (int i = 0; isPrime == 1 && i < primeIndex; i++){
      if (p % primes[i] == 0) isPrime = 0;
    }

    if (isPrime == 1) {
      primes[primeIndex] = p;
      primeIndex++;
    }
    
  }

  for (int i = 0; i < primeIndex; i++){
    printf("%i ", primes[i]);
  } 


  return 0;
}

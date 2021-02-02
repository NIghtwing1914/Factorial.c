#include<stdlib.h>
#include<stdio.h>
#include<time.h>


long long int hash[100];

long long int factorial(long long int i){
    if(i<=1){
      return i;
    }

    if(hash[i]){
      return hash[i];
    }

    hash[i]=i*factorial(i-1);
    return hash[i];
}

int main(){
  struct timespec before;
  
  clock_gettime(CLOCK_MONOTONIC,&before);
	long long int fact=factorial(100);
  struct timespec after;
  clock_gettime(CLOCK_MONOTONIC,&after);
	printf("%ld sec, %ld nanoseconds elapsed",after.tv_sec-before.tv_sec,after.tv_nsec-before.tv_nsec);
	return 0;
}
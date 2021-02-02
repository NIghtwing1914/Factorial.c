#include <time.h>
#include <stdio.h>

long long int factorial(long long int i){
    if(i<=1)
    return 1;
    else
    return i*factorial(i-1);
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
//GIWRGOS KARAGIWRGAKIS
//A.M.: 2011030053

//As we observe after the second expansion of the program, the subs made by the non-recursive function are much fewer than those made by the recursive one, so we conclude that the non-recursive one is faster because it does fewer operations.
#include<stdio.h>
#include<stdlib.h>

long long x, h, recursive, non_recursive, fibonaki_1(long long y), fibonaki_2(long long k);
long long a, b, i, result, s1;
long long fibo, s2;

main()
{
     do{
          printf("Give the x\n");
          scanf("%llu", &x);
     }while (x<=0);
  
     if(x==1){
          h=1;
          printf("The result is: %llu\n", h); 
     }else{
          recursive=fibonaki_1(x);
          non_recursive=fibonaki_2(x);
          printf("The number of subs in the recursive is: %llu\n", s2);
          printf("The result with the recursive function is: %llu \nthe result with non-recursive is: %llu\n", recursive, non_recursive);     
     }
     system ("PAUSE");
     return 0;
}

//non-recursive
long long fibonaki_2(long long k)
{
     a=0;
     b=1;
     s1=0;
     for(i=1;i<=k;i++){
          result=(a+b);
          b=a;
          a=result;
     }
     printf("Computing fibonaki_2(%llu)\n", k);
     printf("fibonaki_2(%ll) finished with result %llu\n\n", k, result);
     printf("The number of subs in the non-recursive is: %llu\n", (i-2));
     return result;
}
         
//recursive 
long long fibonaki_1(long long y)
{
     if(y==0){
          fibo=0;
          printf("Computing fibonaki_1(%llu)\n", y);
          printf("fibonaki_1(%llu) finished with result %llu\n\n", y, fibo);
          return fibo;
     }else if(y==1){
          fibo=1;
          printf("Computing fibonaki_1(%llu)\n", y);
          printf("fibonaki_1(%llu) finished with result %llu\n\n", y, fibo);
          return fibo;
     }else{
          fibo= fibonaki_1(y-1)+fibonaki_1(y-2);
          s2=s2+1;
          printf("Computing fibonaki_1(%llu)\n", y);
          printf("fibonaki_1(%llu) finished with result %llu\n\n", y, fibo);
          return fibo;
     }                                 
}

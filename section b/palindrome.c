#include<stdio.h>

int main(){
    int n, original, reverse = 0, rem;    
     /*
    for example, suppose n = 121.
Step	     rem (last digit)	                rev = rev * 10 + rem
Initially	        —	                                  0
1st loop	        1	                      (0 * 10 + 1 = 1)
2nd loop	        2	                      (1 * 10 + 2 = 12)
3rd loop	        1	                      (12 * 10 + 1 = 121)

    */

    printf("enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n > 0){
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;          // removes the last digit
    }                        // loop repeats until n = 0

    if(reverse == original){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }

    return 0;
}
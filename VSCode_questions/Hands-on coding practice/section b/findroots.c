#include<stdio.h>
#include<math.h>
int main(){
    int D;
    int b;
    int a;
    int c;

    printf("enter b = ");
    scanf("%d", &b);
    printf("enter a = ");
    scanf("%d", &a);
    printf("enter c = ");
    scanf("%d", &c);

    D = b*b - 4*a*c;
    if(D>0){
    float root1, root2;
    root1 = (-b + pow(D,0.5)) / (2.0 * a);
    root2 = (-b - sqrt(D)) / (2.0 * a);
    
    printf("roots are %.2f \n%.2f", root1,root2);
    }
    else{
        printf("imaginary");
    }

    return 0;
}

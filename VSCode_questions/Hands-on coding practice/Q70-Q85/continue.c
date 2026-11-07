#include<stdio.h>
int main(){
    for(int i = 1; i <=5; i++){
        int reading;
        printf("enter reading: ");
        scanf("%d", &reading);

        if(reading < 0){
            continue;
        }
        else{
            printf("valid reading %d\n",reading);
        }
    }

    return 0;
}
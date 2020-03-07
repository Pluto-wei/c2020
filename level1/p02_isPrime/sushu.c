#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime (int n){
    bool flag = true;
    if(1==n) return false;   //1==n原来也可以
    int sqr = (int)sqrt((double)n);
    for(int i=2;i<=sqr;i++){
        if(n%i==0) flag=false;
        break;
    }
    return flag;
}

int main(){
    int n;
    scanf("%d",&n);
    if(isPrime(n)==true){
        printf("Yes");
    }else printf("No");

    return 0;
}


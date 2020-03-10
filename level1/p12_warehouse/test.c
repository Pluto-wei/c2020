#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <string.h>


int main(){

    double a;
    scanf("%lf",&a);//输001卡了
    printf("%lf",a);

    // while(1){
    //     char ch=getch();
    //     printf("%c\n",ch);
    // }
    char c[40];
    char b[40];
    scanf("%s",b);
    strcpy(c,b);

    printf("%s\n",b);
    printf("%s\n",c);
    system("pause");

    return 0;
}

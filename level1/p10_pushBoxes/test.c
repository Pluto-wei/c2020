#include<stdio.h>
#include<Windows.h>
int map[8][8];
int main (){
    FILE *fp=NULL;
    fp=fopen("C://Users//ZYW//temp//map1.txt","r");

    if(fp==NULL){
        printf("失败\n");
    }else {
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                fscanf(fp,"%d",&map[i][j]);
            }
        }

        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                printf("%d",map[i][j]);
            }
            printf("\n");
        }
    }
    system("pause");
    return 0;
}
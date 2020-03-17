#include<stdio.h>
#include<Windows.h>
int map[8][8];
int main (){



    printf("⊙●◎○▲△☉☆★ █ ■〇▼▽△▲◆◇○◎●◢◣■\n");
    printf("111111111111111111111111111111111111111");

    FILE *fp=NULL;
    fp=fopen("C://Users//ZYW//temp//map1.txt","r");
    
    FILE *filep =NULL;
    filep = fopen("C://Users//ZYW//temp//grade.txt","a+");

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

    int i=0;
    fprintf(filep,"第%d局的步数是%d",i,i);




    system("pause");
    return 0;
}
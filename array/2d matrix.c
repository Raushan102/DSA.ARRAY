#include <stdio.h>
#include <conio.h>
int main()
{
int a[2][5];
for(int i=0;i<2;i++){
    for(int j=0;j<5;j++){

        scanf("%d",&a[i][j]);
    }
}
for(int i=0;i<2;i++){
    for(int j=0;j<5;j++){

        printf("index number is[%d][%d]=%d\n",i,j,a[i][j]);
        
    }
    printf("\n");
}
for(int i=0;i<2;i++){
    for(int j=0;j<5;j++){

        printf("%d\t",a[i][j]);
        
    }
    printf("\n");
}


    return 0;
}
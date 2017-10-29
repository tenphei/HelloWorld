# HelloWorld
Algorithm
//
//  main.c
//  01背包问题
//
//  Created by 吕腾飞 on 2016/10/13.
//  Copyright © 2016年 吕腾飞. All rights reserved.
//

#include <stdio.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int i,j,t,c,m,n,C;
    int w[100],v[100];
    int a[102][102]={0};
    printf("请输入背包的容量：");
    scanf("%d",&C);
    printf("请输入物体数量：");
    scanf("%d",&n);
    for (t=1; t<=n; t++) {
        printf("请输入第%d个物体重量w及物体价值v：",t);
        scanf("%d %d",&w[t],&v[t]);
    }
    
    for (i=n; i>0; i--) {
        for (c=1; c<=C; c++) {
            if (c>=w[i]) {
                m=a[i+1][c-w[i]]+v[i];
                if (m>=a[i+1][c]) {
                    a[i][c]=m;
                }else a[i][c]=a[i+1][c];
            }
        }
    }
    printf("表格：\n");
    for (i=1;i<=n;i++) {
        for (j=1; j<=C; j++) {
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
    int nn=n,iv=0,iw=0;
    printf("背包内所含物品：\n");
    printf("序号     重量     价值 \n");
    for (i=1;i<n;i++) {
        if (a[i][nn]>a[i+1][nn]) {
            nn=nn-w[i];iw+=w[i];iv+=v[i];
            printf("%2d     %3d     %3d \n",i,w[i],v[i]);
        }
    }
    if (a[1][C]==iv+v[n]) {
        iw+=w[i];iv+=v[i];
        printf("%2d     %3d     %3d \n",i,w[i],v[i]);
    }
    printf("背包内总重量为：%d，总价值为：%d\n",iw,iv);
    return 0;
}

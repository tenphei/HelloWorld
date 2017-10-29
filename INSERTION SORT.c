//
//  main.c
//  INSERTION_SORT
//
//  Created by 吕腾飞 on 2017/10/15.
//  Copyright © 2017年 吕腾飞. All rights reserved.
//
//  伪代码 详解
//  INSERTION SORT (A)
//  for j = 2 to A.length
//  {
//       key = A[j];
//       // insert A[j] into the sorted sequence A[1..j-1]
//       i = j - 1;
//       while(i>0 and A[i]>key)
//       {
//         A[i+1] = A[i];
//         i--;
//       }
//       A[i+1] = key;
//  }
#include <stdio.h>

/********************************************************
 *函数名称：InsertSort
 *参数说明：pDataArray 无序数组；
 *           iDataNum为无序数据个数
 *说明：    插入排序
 *********************************************************/
void InsertSort(int* pDataArray, int iDataNum)
{
    for (int i = 1; i < iDataNum; i++)    //从第2个数据开始插入
    {
        int j = i - 1;
        int temp = pDataArray[i];    //记录要插入的数据
        while (j >= 0 && pDataArray[j] > temp)    //从后向前，找到比其小的数的位置
        {
            pDataArray[j+1] = pDataArray[j];    //向后挪动
            j--;
        }
        
        if (j != i - 1)    //存在比其小的数 /可有可無吧
            pDataArray[j+1] = temp;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    
    int a[10]={2,3,4,1,2,5,7,9,50,34};
    InsertSort(a, 10);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    
    return 0;
}

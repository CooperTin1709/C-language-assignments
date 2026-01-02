/*题目描述
矩阵的鞍点是矩阵的一个元素，该元素是所在行的最大值，所在列的最小值
输入一个二维数组的行数n，列数m，二维数组的各元素值；输出矩阵的鞍点，以及鞍点所在的行列号。
测试数据不用考虑存在多个鞍点的情况，如果鞍点存在，则一定唯一。

输入
测试组数
每组测试数据格式如下：
二维数组行数n 列数m( 0<n,m<10)
n行m列数据(整数）

输出
对每组测试数据，如果不存在鞍点，输出null。如果存在鞍点，鞍点及其行，列位置。具体格式见样例。*/
#include <stdio.h>
int n, m;

int scan_hang(int a[][], int x, int hang)
{ // 如果行满足条件，输出1，否则输出0
    int ret = 1;
    for (int i = 0; i < m;i++){
        if(a[hang][i]>x){
            
        }
    }
}

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &n, &m);
        int a[n][m];
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                scanf("%d", &a[j][k]);
            }
        }
    }
}
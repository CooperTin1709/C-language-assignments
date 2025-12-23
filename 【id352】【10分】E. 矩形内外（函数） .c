#include <stdio.h>

typedef struct
{
    int x;
    int y;
} point;

int judge(point a)
{
    int ret = 0;
    if (a.x >= 1 && a.x <= 5 && a.y >= 1 && a.y <= 5)
        ret = 1;
    return ret;
}

int main(void)
{
    int t = 0;
    scanf("%d", &t);
    point points[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &points[i].x, &points[i].y);
        if (judge(points[i]))
            printf("in\n");
        else
            printf("out\n");
    }
    return 0;
}
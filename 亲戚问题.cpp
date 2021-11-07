#include<stdio.h>
#include<math.h>
#include<string.h>

int m, n, k, a, b, xx, yy;
int father[5001];
void intl()
{
	for (int i = 1;i <= m;i++)
		father[i] = i;
}
int find(int x)
{
	while (x != father[x])  //没找到x的根时（找到时结果为x=father[x]）
	{                               //继续找次数++；
		x = father[x];
	}
	return x;
}
void combine(int x, int y)
{
	int nx = find(x);
	int ny = find(y);
	if (nx != ny)
		father[ny] = nx;     //不能写成nx=father[ny]
}
int main()
{
	while (~scanf_s("%d%d%d", &m, &n, &k))
	{
		intl();
		for (int i = 1;i <= n;i++)
		{
			scanf_s("%d%d", &a, &b);
			combine(a, b);//把有关系的两个数a,b通过以上函数连在一起，
		}
		for (int i = 1;i <= k;i++)
		{
			scanf_s("%d%d", &xx, &yy);
			if (find(xx) == find(yy))
				printf("Yes\n");
			else
				printf("No\n");
		}
	}
}
#pragma 
#define NumSets 8
typedef int DisjSet[NumSets + 1];
void Initilialize(DisjSet S)
{
	int i;
	for (i = NumSets;i > 0;i--)
		S[i] = 0;//初始化不相交集
}
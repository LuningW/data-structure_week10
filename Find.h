#pragma once
#define NumSets 8
typedef int DisjSet[NumSets + 1];
typedef int SetType;
typedef int ElementType;
SetType Find(ElementType X, DisjSet S)
{
	if (S[X] <= 0) return X;//初始状态，根节点为0
	else
		return Find(S[X], S);//递归函数，s[X]中保存的是X的根结点，继续向上找
}
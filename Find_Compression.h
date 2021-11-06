#pragma once
#define NumSets 8

typedef int DisjSet[NumSets + 1];
typedef int SetType;
typedef int ElementType;

SetType Find_Compression(ElementType X, DisjSet S)
{
	if (S[X] <= 0)//X是否为树的根节点
		return X;//递归出口
	else
		return S[X] = Find_Compression(S[X], S);//这里区别于普通的Find函数;当集合的根被递归找到后，X直接指向根节点，实现路径压缩
} 
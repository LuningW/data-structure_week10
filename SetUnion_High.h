#pragma once
#define NumSets 8
typedef int DisjSet[NumSets + 1];
typedef int SetType;
typedef int ElementType;

void SetUnion_High(DisjSet S, SetType Root1, SetType Root2)
{
	if (S[Root2] < S[Root1])//表明Root2更深更高
		S[Root1] = Root2;//Root2作为Root1的父节点
	else if (S[Root1] == S[Root2])//表明Root1和Rood2一样高
	{
		S[Root1]--;
		S[Root2] = Root1;
	}
}
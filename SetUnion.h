#pragma once
#define NumSets 8
typedef int DisjSet[NumSets + 1];
typedef int SetType;
typedef int ElementType;

void SetUnion(DisjSet S, SetType Root1, SetType Root2)
{
	S[Root2] = Root1;//������ÿ����Ա������ʾ������
}


#pragma once
#define NumSets 8
typedef int DisjSet[NumSets + 1];
typedef int SetType;
typedef int ElementType;

void SetUnion_High(DisjSet S, SetType Root1, SetType Root2)
{
	if (S[Root2] < S[Root1])//����Root2�������
		S[Root1] = Root2;//Root2��ΪRoot1�ĸ��ڵ�
	else if (S[Root1] == S[Root2])//����Root1��Rood2һ����
	{
		S[Root1]--;
		S[Root2] = Root1;
	}
}
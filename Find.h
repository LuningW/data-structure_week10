#pragma once
#define NumSets 8
typedef int DisjSet[NumSets + 1];
typedef int SetType;
typedef int ElementType;
SetType Find(ElementType X, DisjSet S)
{
	if (S[X] <= 0) return X;//��ʼ״̬�����ڵ�Ϊ0
	else
		return Find(S[X], S);//�ݹ麯����s[X]�б������X�ĸ���㣬����������
}
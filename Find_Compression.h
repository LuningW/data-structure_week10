#pragma once
#define NumSets 8

typedef int DisjSet[NumSets + 1];
typedef int SetType;
typedef int ElementType;

SetType Find_Compression(ElementType X, DisjSet S)
{
	if (S[X] <= 0)//X�Ƿ�Ϊ���ĸ��ڵ�
		return X;//�ݹ����
	else
		return S[X] = Find_Compression(S[X], S);//������������ͨ��Find����;�����ϵĸ����ݹ��ҵ���Xֱ��ָ����ڵ㣬ʵ��·��ѹ��
} 
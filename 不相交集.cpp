#include <iostream>
#include"类型声明.h"
#include"Find.h"
#include"Find_Compression.h"
#include"Initilialize.h"
#include"SetUnion.h"
#include"SetUnion.h"
#include"SetUnion_High.h"

using namespace std;

int main()
{
  		int elementNum = 8;
		DisjSet S;
		Initilialize(S);
		SetUnion(S, 5, 6);
		SetUnion(S, 7, 8);
		SetUnion(S, 5, 7);
		/*
		SetUnion_High(S, 5, 6);
		SetUnion_High(S, 7, 8);
		SetUnion_High(S, 5, 7);
		*/
		cout << (Find(4,S) == Find(5,S)) << endl;
		cout << (Find(6,S) == Find(8,S)) << endl;
		/*
		cout << (Find_Compression(4, S) == Find_Compression(5, S)) << endl;
		cout << (Find_Compression(6, S) == Find_Compression(8, S)) << endl;
		*/
		system("pause");
		return 0;
}


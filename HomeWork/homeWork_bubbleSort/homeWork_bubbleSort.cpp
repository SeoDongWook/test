// homeWork_bubbleSort.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	int nAry[] = { 4,2,5,8,7,1,3,6,9,2,2,5,6,4,8,3,9,7,6 };
	int szMax = sizeof(nAry) / sizeof(nAry[0]);

	int temp;

	for (int i = 0; i < szMax; i++) {
		printf("%d ", nAry[i]);
	}
	printf("\n");

	for (int i = 0; i < szMax; i++)
	{
		for (int j = i+1; j < szMax; j++) { //i+1�� �����ν� �����ο� ���ϴ°� ����

			if (nAry[i] > nAry[j]) {
				temp = nAry[i];
				nAry[i] = nAry[j];
				nAry[j] = temp;
			}

			else if (nAry[i] == nAry[j]) { // ���� �񱳰��� �������� ��� �ٷ� ���� �迭�� �������� �ִ°�.
				temp = nAry[i + 1];
				nAry[i + 1] = nAry[j];
				nAry[j] = temp;
				i++;
				j++; // j++ ���� �ʰԵǸ� else if���� ���������� �Ǵٽ� �������� ���ϰ� ��.
			}

		}
	}


	for (int i = 0; i < szMax; i++) {
		printf("%d ", nAry[i]);
	}
	printf("\n");


    return 0;
}


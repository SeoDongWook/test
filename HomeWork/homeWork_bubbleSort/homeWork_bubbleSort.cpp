// homeWork_bubbleSort.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
		for (int j = i+1; j < szMax; j++) { //i+1을 함으로써 스스로와 비교하는걸 방지

			if (nAry[i] > nAry[j]) {
				temp = nAry[i];
				nAry[i] = nAry[j];
				nAry[j] = temp;
			}

			else if (nAry[i] == nAry[j]) { // 만약 비교값이 같은수일 경우 바로 앞의 배열에 같은수를 넣는것.
				temp = nAry[i + 1];
				nAry[i + 1] = nAry[j];
				nAry[j] = temp;
				i++;
				j++; // j++ 하지 않게되면 else if문을 빠져나온후 또다시 같은수와 비교하게 됨.
			}

		}
	}


	for (int i = 0; i < szMax; i++) {
		printf("%d ", nAry[i]);
	}
	printf("\n");


    return 0;
}


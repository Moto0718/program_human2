
#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "iostream"
using namespace std;

int main()
{
	int map[30][30];
	int x, y, bomb, xx, yy, i;
	
	//
	for (x = 0; x < 30; x++) {
		for (y = 0; y < 30; y++) {
			map[y][x] = -1;
		}
	}
	srand((unsigned int)time(0));
	for (i = 1; i <= 100; i++) {
			x = rand() % 30;
			y = rand() % 30;
			map[y][x] = -2;
		}
	
	while (1) {
		for (y = 0; y < 30; y++) {
			printf("%2d| ", y);

			for (x = 0; x < 30; x++) {
				if (map[y][x] >= 0) {
					printf("%2d ", map[y][x]);
				}
				else {
					printf("  ");
				}
			}
			printf("|\n");
		}
		cin >> xx >> yy;
				if (map[yy][xx] == -2)
					break;
				bomb = 0;
				//上
				if (map[yy - 1][xx] == -2)
					bomb++;
				//した
				if (map[yy + 1][xx] == -2)
					bomb++;
				//左
				if (map[yy][xx - 1] == -2)
					bomb++;
				//右
				if (map[yy][xx + 1] == -2)
					bomb++;
				//ななめ左上
				if (map[yy - 1][xx - 1] == -2)
					bomb++;
				//ななめ右上
				if (map[yy + 1][xx + 1] == -2)
					bomb++;
				//ななめひだりした
				if (map[yy + 1][xx - 1] == -2)
					bomb++;
				//ななめ右下
				if (map[yy - 1][xx + 1] == -2)
					bomb++;
				map[yy][xx] = bomb;
			}


}


//#include "stdafx.h"
//#include "stdio.h"
//#include "stdlib.h"
//#include "time.h"
//
//
//int _tmain(int argc, _TCHAR* argv[])
//{
//	int data[30][30] = {};
//	int temp = 0;
//	srand((unsigned int)time(0));
//
//
//
//	//for (int i = 0; i < 30; i++){
//	//	for (int j = 0; j < 30; j++){
//	//		data[i][j] = 0;
//
//	//	}
//	//}
//
//	//入れ替え
//	for (int i = 0; i < 30; i++){
//		for (int j = 0; j < 30; j++){
//			int a = rand() % 30;
//			int b = rand() % 30;
//			temp = data[i][j];
//			data[i][j] = data[a][b];
//			data[a][b] = temp;
//		}
//	}
//
//
//	//表示
//
//	for (int i = 0; i < 30; i++){
//		for (int j = 0; j < 30; j++){
//			printf("%d ", data[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


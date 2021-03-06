#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int M[10][10], C[10][10], D[10][10];
int r = 5;
void insertMines(int arr[][10]){
    int i, j;
    for(i = 0; i <10; i++){
        for(j = 0; j <10; j ++){
			for(int x = 0; x < 10; x ++){
			r = rand();
			}
            arr[i][j] = r%100 > 90 ? 1 : 0;
        }
    }
}
void set0(int arr[][10], int i, int j){
	if(i > 0){
		arr[i - 1][j] = 0;
		if(j > 0){
			arr[i - 1][j - 1] = 0;
		}
		if(j < 9){
			arr[i - 1][j + 1] = 0;
		}
	}
	if(i < 9){
		arr[i + 1][j] = 0;
		if(j > 0){
			arr[i + 1][j - 1] = 0;
		}
		if(j < 9){
			arr[i + 1][j + 1] = 0;
		}
	}
	if(j > 0){
		arr[i][j - 1] = 0;
	}
	if(j < 9){
		arr[i][j + 1] = 0;
	}
}
void countMines(int arr[][10]){
	int i, j;
	for(i = 0; i < 10; i ++){
			for(j = 0; j < 10; j ++){
					arr[i][j] = 0;
			}
	}
	for(i = 0; i < 10; i ++){
			for(j = 0; j < 10; j ++){
					if(M[i][j] == 1){
						if(i > 0){
							arr[i - 1][j] ++;
							if(j > 0){
								arr[i - 1][j - 1] ++;
							}
							if(j < 9){
								arr[i - 1][j + 1] ++;
							}
						}
						if(i < 9){
							arr[i + 1][j] ++;
							if(j > 0){
								arr[i + 1][j - 1] ++;
							}
							if(j < 9){
								arr[i + 1][j + 1] ++;
							}
						}
						if(j > 0){
							arr[i][j - 1] ++;
						}
						if(j < 9){
							arr[i][j + 1] ++;
						}
					}
			}
	}
}

int count(){
	int i, j;
	int c = 0;
	for(i=0; i < 9; i ++){
		for(j = 0; j < 9; j ++){
			if(M[i][j]==1){
				c ++;
			}
		}
	}
	return c;
}

int countUnDisplay(){
	int i, j;
	int c = 0;
	for(i = 0; i < 9; i ++){
		for(j = 0; j < 9; j ++){
			if(D[i][j]==0){
				c ++;
			}
		}
	}
	return c;
}

void countDisplay(int arr[][10]){
	int i, j;
	for(i = 0; i < 10; i ++){
			for(j = 0; j < 10; j ++){
					arr[i][j] = 0;
			}
	}
}

void openCell(int i, int j){
	if(i>=0&&i<=9&&j>=0&&j<=9){
		if(D[i][j]==1)
		{

		}
		else
		{
			D[i][j] = 1;
			if(C[i][j]==0)
			{
				openCell(i, j + 1);
				openCell(i, j - 1);
				openCell(i + 1, j + 1);
				openCell(i - 1, j + 1);
				openCell(i + 1, j - 1);
				openCell(i - 1, j - 1);
				openCell(i + 1, j);
				openCell(i - 1, j);

			}
		}
	}
	else{

	}
}

void printList(int arr[][10]){
    int i, j;
    for(i = 0;  i < 10; i ++){
        for(j = 0; j < 10; j ++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void printHr(){
	int i = 0;
	printf(" ");
	while(i<41){
		printf("=");
		i ++;
	}
}

void printMap(){
	system("cls");
	int i, j;
	printf("   0   1   2   3   4   5   6   7   8   9\n");
	for(i=0; i < 10; i ++){
		printHr();
		printf("\n");
		j = 0;
		printf("%d", i);
		while(j<10){
			if(D[i][j]==1)
			{
				if(C[i][j]==0)
				{
					printf("| . ");
				}
				else
				{
					printf("| %d ", C[i][j]);
				}
			}
			else{
				printf("|   ");
			}
			if(j==9)
			{
				printf("|");
			}
			j ++;
		}
		printf("\n");
		if(i==9){
			printHr();
		}
	}
}

int randem(){
    int r;
    srand((int)time(0));
    for(int i = 0; i < 10; i ++){
		r = rand();
	}
    return (int)r;
}

void startGame(){
	system("cls");
	int i, j;
	printMap();
	printf("\nM???i b???n ch???n ?? ????? m???:");
	scanf("%d %d", &i, &j);
	insertMines(M);
	M[i][j] = 0;
	set0(M, i, j);
	countMines(C);
	countDisplay(D);
	openCell(i, j);
}
int main(){
	srand((int)time(0));
	int i, j, check = 1, c, cd;
	startGame();
	c = count();
	while(check){
		//system("cls");
		printMap();
		printf("\nM???i b???n ch???n ?? ????? m??? (%d Qu??? m??n):", c);
		scanf("%d %d", &i, &j);
		openCell(i, j);
		cd = countUnDisplay();
		if(M[i][j] == 1){
			system("cls");
			printf("B??m! B???n ???? thua. Mu???n ch??i l???i hem?\n 1. C??\t0. Kh??ng\n");
			scanf("%d", &check);
			switch(check){
				case 1:
					startGame();
					c = count();
					break;
				case 0: break;
			}
		}
		else if(c == cd){
			system("cls");
			printf("?? ??, b???n ???? th???ng r??i. Mu???n ch??i l???i hem?\n 1. C??\t0. Kh??ng\n");
			scanf("%d", &check);
			switch(check){
				case 1:
					startGame();
					c = count();
					break;
				case 0: break;
			}
		}
	}
    return 0;
}

/*
Programmer: Syed Huzaifa Ali
Description: Printing the output from start to exit of a maze
*/



#include <stdio.h>


#define N 5
#define M 5

int main() {
	char maze[N][M] = {
        	{'S', 'O', 'O', 'W', 'W'},
        	{'O', 'W', 'O', 'O', 'W'},
        	{'W', 'O', 'O', 'W', 'O'},
        	{'W', 'W', 'O', 'W', 'O'},
        	{'W', 'W', 'O', 'E', 'W'}
	};

	int stack[25][2];
	int top = 0;

	stack[top][0] = 0;
	stack[top][1] = 0;
	top++;

	while (top > 0) {
		top--;
        	int x = stack[top][0];
        	int y = stack[top][1];

        	if (maze[x][y] == 'E') {
            		printf("%d,%d ", x, y);
            		break;
        	}

		maze[x][y] = 'X';

		if (x + 1 < N && maze[x + 1][y] != 'W' && maze[x + 1][y] != 'X') {
			stack[top][0] = x + 1;
			stack[top][1] = y;
			top++;
		}
		if (y + 1 < M && maze[x][y + 1] != 'W' && maze[x][y + 1] != 'X') {
			stack[top][0] = x;
			stack[top][1] = y + 1;
			top++;
		}
		if (x - 1 >= 0 && maze[x - 1][y] != 'W' && maze[x - 1][y] != 'X') {
			stack[top][0] = x - 1;
			stack[top][1] = y;
			top++;
		}
		if (y - 1 >= 0 && maze[x][y - 1] != 'W' && maze[x][y - 1] != 'X') {
			stack[top][0] = x;
			stack[top][1] = y - 1;
			top++;
		}

	printf("%d,%d ", x, y);
	}

	return 0;
}

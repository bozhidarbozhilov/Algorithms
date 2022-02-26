
#include <stdio.h>
const int ROWS = 5;
const int COLS = 5;
void printMatrix(int matrix[ROWS][COLS]);
void fillDiagonal();
void fillSpiralWhileLoop();
void fillSpiralForLoop();
int main() {
    fillSpiralForLoop();
    return 0;
}

void printMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            printf("%02d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void fillDiagonal(){
    int matrix[ROWS][COLS];
    int down = 1;
    int up = ROWS*(COLS-1);
    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS; j++) {
            if(i==j){
                matrix[i][j] = 0;
            }else if(j>i){
                matrix[j][i] = down++;
            }else{
                matrix[j][i] = up--;
            }
        }
    }
    printMatrix(matrix);
}

void fillSpiralWhileLoop(){
    int matrix[ROWS][COLS];
    int counter = 1;
    int current_row = 0;
    int current_col = 0;
    int start_row = 0;
    int start_col = 0;
    int end_row = ROWS-1;
    int end_col = COLS-1;
    while (counter<= ROWS*COLS){
        while (current_row<=end_row){
            matrix[current_row++][current_col] = counter++;
        }
        if(current_row>end_row){
            current_row--;
        }
        current_col++;
        start_col++;
        while (current_col<=end_col){
            matrix[current_row][current_col++] = counter++;
        }
        if(current_col>end_col){
            current_col--;
        }
        end_row--;
        current_row--;
        while(current_row>=start_row){
            matrix[current_row--][current_col] = counter++;
        }
        if(current_row<=start_row){
            current_row++;
        }
        end_col--;
        current_col--;
        while(current_col>=start_col){
            matrix[current_row][current_col--] = counter++;
        }
        if(current_col<start_col){
            current_col++;
        }
        start_row++;
        current_row++;
    }
    printMatrix(matrix);
}

void fillSpiralForLoop(){
    int matrix[ROWS][COLS];
    int value = 1;
    int start_col=0;
    int start_row=0;
    int end_row=ROWS-1;
    int end_col=COLS-1;
    while(value<=ROWS*COLS){
        for (int i = start_row; i <= end_row; i++) {
            matrix[i][start_col] = value++;
        }
        start_col++;
        for(int i = start_col; i <= end_col;i++){
            matrix[end_row][i] = value++;
        }
        end_row--;
        for (int i = end_row; i >= start_row ; i--) {
            matrix[i][end_col] = value++;
        }
        end_col--;
        for(int i=end_col; i >= start_col; i--){
            matrix[start_row][i] = value++;
        }
        start_row++;
    }
    printMatrix(matrix);
}

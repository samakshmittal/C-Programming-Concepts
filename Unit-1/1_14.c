#include <stdio.h>
void readmat(int row, int col, int mat[][10]){
    int a, b;
    for(a=0; a<row; a++){
        for(b=0; b<col; b++){
            scanf("%d", &mat[a][b]);
        }
    }
}
void printmat(int row, int col, int mat[][10]){
    int a, b;
    for(a=0; a<row; a++){
        for(b=0; b<col; b++){
            printf("%3d", mat[a][b]);
        }
        printf("\n");
    }
}
void multiply(int row1, int col1, int col2, int mat1[][10], int mat2[][10], int mat3[][10]){
    int a, b, c;
    for(a=0; a<row1; a++){
        for(b=0; b<col2; b++){
            int val=0;
            for(c=0; c<col1; c++){
                val += mat1[a][c] * mat2 [c][b];
            }
            mat3[a][b]=val;
        }
    }
}
int main(){
    int r1, c1, r2, c2, m1[10][10], m2[10][10], m3[10][10];
    printf("Enter the order of first matrix ");
    scanf("%d%d", &r1, &c1);
    printf("Enter the first matrix\n");
    readmat(r1, c1, m1);
    printf("Enter the order of second matrix ");
    scanf("%d%d", &r2, &c2);
    printf("Enter the second matrix\n");
    readmat(r2, c2, m2);
    if(c1!=r2){
        printf("Multiplication not allowed");
    }
    else{
        printf("Multiplication of two matricex = \n");
        multiply(r1, c1, c2, m1, m2, m3);
        printmat(r1, c2, m3);
    }
    return 0;
}
#include "matrix.h"
#include "stdio.h"

Matrix::Matrix() //TODO комментарий
{

}

/**
  Конструктор с параметрами
 * @brief Matrix::Matrix
 * @param N
 * @param M
 */
Matrix::Matrix(int N, int M)
{
    this->N = N; //TODO нет проверок границ
    this->M = M;
}


/**
  Заполнить все ячейки матрицы значениями value
 * @brief Matrix::fillMatrix
 * @param value значение для заполнения
 */
void Matrix::fillMatrix(int value) {
    for (int i = 0; i < this->N; i++) {
        for (int j = 0; j < this->M; j++) {
            this->matrix[i][j] = value;
        }
    }
}

/**
 * Напечатать строку матрицы
 * @brief Matrix::printRow
 * @param row строка для печати
 */
void Matrix::printRow(int row) {  //TODO нет проверки границ row (row должен быть <= M и >0)
    printf("[");
    for (int col = 0; col < this->M; col++) {

        printf("%d", this->matrix[row][col]);

        //Ставить пробел после всех, кроме последнего
        if (col < (this->M - 1)) {
            printf(" ");
        }
    }
    printf("]");
}

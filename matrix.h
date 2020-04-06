#ifndef MATRIX_H
#define MATRIX_H


class Matrix
{
public:
    //Конструкторы
    Matrix();
    Matrix(int N, int M); /*TODO конструктор с параметрами N, M, fillValue.
                           Создает матрицу NxM и заполняет все ячейки значением fillValue*/

    //Заполнить все ячейки матрицы значениями value
    void fillMatrix(int value);

    //Напечатать строку матрицы
    void printRow(int rowIndex);

    //Геттеры
    int getRowCount() { //TODO перенести реализацию в cpp
        return this->N;
    }

    int getColCount() {
        return this->M;
    }

protected:
    //Максимальный размер матрицы
    static const int MAX_SIZE = 1000;

    //Размеры матрицы
    int N = 0;
    int M = 0;

    //Двумерный массив для представления матрицы
    int matrix[MAX_SIZE][MAX_SIZE];
};

#endif // MATRIX_H

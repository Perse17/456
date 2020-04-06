#include <QCoreApplication>
#include "matrix.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    Matrix matrix = Matrix(5, 7);
    matrix.fillMatrix(5);

    //Напечатать матрицу
    for (int i = 0; i < matrix.getRowCount(); i++) { //TODO вынести в метод
        matrix.printRow(i);
        printf("\n");
    }

    a.exit(0);
}

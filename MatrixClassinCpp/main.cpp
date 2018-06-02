# include <iostream>
# include <vector>
# include "matrix.h"

int main () {

    // 给变量 initial_grid 分配一个 7x5 矩阵
    // 矩阵中的所有值都是 0.4
    std::vector <std:: vector <float> > 
        initial_grid (7, std::vector <float>(5, 0.4));

    // TODO:使用初始 grid 变量来实例化一个矩阵对象
    // 矩阵对象应该写作 matrixa
    Matrix matrixa(initial_grid);

    // TODO:使用 matrix_print() 方法打印出 matrixa
    matrixa.matrix_print();

    // TODO:打印出 matrixa 中的行数。你需要
    //使用 getRows() 函数和 std::cout
    std::cout << matrixa.getRows();

    // TODO:打印出 matrixa 中的列数 
    std::cout << matrixa.getCols();

    // TODO:取矩阵的转置并把结果存储在
    //一个名叫 transposea 的变量里
    Matrix transposea = matrixa.matrix_transpose();

    // TODO:打印出 transposea
    transposea.matrix_print();

    // 现在你需要使用另一个名为 matrixb 的 7x5 矩阵，来 
    //给出 matrix_addition 函数的结果

    // 7x5 二维矩阵，所有值均为 0.2
    std::vector <std:: vector <float> > 
        second_grid (7, std::vector <float>(5, 0.2));

    // TODO:实例化一个叫做 matrixb 的对象使用 second_grid
    // 变量作为初始化 matrixb 的输入
    Matrix matrixb(second_grid);

    // TOOD:matrixa 和 matrixb 相加。将结果存储在一个新的矩阵中
    //变量名为 matrixsum
    Matrix matrixsum = matrixa.matrix_addition(matrixb);

    // TODO:打印出 matrixsum 变量中包含的矩阵
    matrixsum.matrix_print();

    return 0;
}
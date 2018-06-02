# ifndef MATRIX_H
# define MATRIX_H

# include <vector>
# include <iostream>
# include <stdexcept>

# include <vector>

class Matrix
{
    private:

        std::vector< std::vector<float> > grid;
        std::vector<int>::size_type rows;
        std::vector<int>::size_type cols;

    public:

        //构造函数
        Matrix ();
        Matrix (std::vector< std::vector<float> >);

        // set 函数
        void setGrid(std::vector< std::vector<float> >);

        // get 函数
        std::vector< std::vector<float> > getGrid();
        std::vector<int>::size_type getRows();
        std::vector<int>::size_type getCols();

        // matrix functions
        Matrix matrix_transpose();
        Matrix matrix_addition(Matrix);

        // matrix printing
        void matrix_print();

};

# endif /* MATRIX_H */
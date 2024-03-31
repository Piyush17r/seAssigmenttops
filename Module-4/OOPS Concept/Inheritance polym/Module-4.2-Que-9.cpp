//Write a Program of Two 1D Matrix Addition using Operator Overloading
#include <iostream>
#include <vector>

using namespace std;

class Matrix {
private:
    vector<int> data;
    int rows;
    int cols;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        data.resize(r * c, 0);
    }

    int& operator()(int row, int col) {
        return data[row * cols + col];
    }

    Matrix operator+(const Matrix& other) {
        if (rows != other.rows || cols != other.cols) {
            cerr << "Error: Matrix dimensions do not match for addition." << endl;
            exit(1);
        }

        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result(i, j) = (*this)(i, j) + other(i, j);
            }
        }
        return result;
    }

    void display() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << (*this)(i, j) << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns for matrices: ";
    cin >> rows >> cols;

    // Create two matrices
    Matrix matrix1(rows, cols);
    Matrix matrix2(rows, cols);

    // Input values for the matrices
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix1(i, j);
        }
    }

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix2(i, j);
        }
    }

    // Perform addition using operator overloading
    Matrix sum = matrix1 + matrix2;

    // Display the result
    cout << "Resultant matrix after addition:\n";
    sum.display();

    return 0;
}

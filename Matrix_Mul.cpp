#include <iostream>

using namespace std;

class Matrix
{
    int rows1, cols1, rows2, cols2;
    int **matrix1 = nullptr;
    int **matrix2 = nullptr;
    int **result = nullptr;

public:
    Matrix() : rows1(0), cols1(0), rows2(0), cols2(0) {}

    void createMatrix();
    void multiplyMatrix();
    void displayMatrix();

    ~Matrix()
    {
        if (matrix1)
        {
            for (int i = 0; i < rows1; i++)
            {
                delete[] matrix1[i];
            }

            delete[] matrix1;
        }

        if (matrix2)
        {
            for (int i = 0; i < rows2; i++)
            {
                delete[] matrix2[i];
            }

            delete[] matrix2;
        }

        if (result)
        {
            for (int i = 0; i < rows1; i++)
            {
                delete[] result[i];
            }

            delete[] result;
        }
    }
};

void Matrix::createMatrix()
{
    cout << "Enter the number of rows for the first matrix :   ";
    cin >> rows1;
    cout << "\nEnter the number of columns for the first matrix :   ";
    cin >> cols1;

    matrix1 = new int *[rows1];

    for (int i = 0; i < rows1; i++)
    {
        matrix1[i] = new int[cols1];

        for (int j = 0; j < cols1; j++)
        {
            cout << "Enter element [" << i + 1 << "][" << j + 1 << "]  ==>   ";
            cin >> matrix1[i][j];
        }
    }

    cout << "\nEnter the number of rows for the second matrix :   ";
    cin >> rows2;
    cout << "\nEnter the number of columns for the second matrix :   ";
    cin >> cols2;

    matrix2 = new int *[rows2];

    for (int i = 0; i < rows2; i++)
    {
        matrix2[i] = new int[cols2];

        for (int j = 0; j < cols2; j++)
        {
            cout << "Enter element [" << i + 1 << "][" << j + 1 << "]  ==>  ";
            cin >> matrix2[i][j];
        }
    }
}

void Matrix::multiplyMatrix()
{
    if (cols1 != rows2)
    {
        cout << "\nThe given matrices cannot be multiplied!" << endl;
        return;
    }

    result = new int *[rows1];

    for (int i = 0; i < rows1; i++)
    {
        result[i] = new int[cols2]();
    }

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            for (int k = 0; k < cols1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void Matrix::displayMatrix()
{
    if (!result)
    {
        cout << "\nNo result matrix to display!" << endl;
        return;
    }

    cout << "\n\nThe Resultant Matrix is -> " << endl;
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    cout << "\n\nKartik Garg \nEnrolment Number - 01813203123 " << endl;
    cout << "IT - 1\nShift 1\n\n\n"<< endl;

    Matrix mat;
    mat.createMatrix();
    mat.multiplyMatrix();
    mat.displayMatrix();

    return 0;
}

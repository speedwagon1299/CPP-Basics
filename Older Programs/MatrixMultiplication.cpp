#include <iostream>
using namespace std;
void MatMul()
{
    cout << "Enter the order of the matrice A: " << endl;
    int r1,c1,r2,c2;
    cin >> r1;
    cin >> c1;
    cout << "Enter the order of the matrice B: " << endl;
    cin >> r2;
    cin >> c2;
    if(c1 != r2)
    {
        cout << "Matrix multiplication is incompatible" << endl;
            system(0);  //to exit the program if the orders are incompatible
    }
    int A[r1][c1], B[r2][c2], C[r1][c2];
    cout << "Enter the elements of A :" << endl;
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
        cin >> A[i][j];
    cout << "\nEnter the elements of B :" << endl;
    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
        cin >> B[i][j];
    int sum = 0, a = 0, b = 0;
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            a = 0, b = 0, sum = 0;
            while(a < r2)   // or while(b < c1) since r2 = c1
            {
                sum+= A[i][b++]*B[a++][j];  //to perform dot product multiplication of the indicated row and column
            }
            C[i][j] = sum;
        }
    }
    cout << endl;
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        cout << C[i][j] << " " << flush;
        cout << endl;
    }

    return;
}
int main()
{
    MatMul();
    return 0;
}

#include <iostream>
using namespace std;
int r1,c1,r2,c2;
int A[10][10], B[10][10], C[10][10], D[10][10], E[10][10], A2[10][10], B1[10][10], F[10][10];
void acceptOrder()
{
    cout << "Enter the order of the matrice A: " << endl;
    cin >> r1 >> c1;
    cout << "Enter the order of the matrice B: " << endl;
    cin >> r2;
    cin >> c2;
    if(c1 != r2)
    {
        cout << "Matrix multiplication is incompatible" << endl;
            system(0);  //to exit the program if the orders are incompatible
    }
}
void acceptMat()
{
    cout << "Enter the elements of A :" << endl;
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
        cin >> A[i][j];
    cout << "\nEnter the elements of B :" << endl;
    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
        cin >> B[i][j];
}
void matMultiply(int A1[][10], int B2[][10], int r, int c, int C3[][10], int rc)
{
    int sum = 0, a = 0, b = 0;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            a = 0, b = 0, sum = 0;
            while(a < rc)
            {
                sum+= A1[i][b++]*B2[a++][j];
            }
            C3[i][j] = sum;
        }
    }
}
void transpose(int A1[][10], int B2[][10], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            B2[i][j] = A1[j][i];
        }
    }
}
int main()
{
    acceptOrder();
    acceptMat();
    matMultiply(A,B,r1,c2,C,r2);
    cout << "C: " << endl;
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            cout << C[i][j] << " " << flush;
        }
        cout << endl;
    }
    transpose(A,D,r1,c1);
    cout << "\nTranspose: " << endl;
    for(int i = 0; i < c1; i++)
    {
        for(int j = 0; j < r1; j++)
        {
            cout << D[i][j] << " " << flush;
        }
        cout << endl;
    }
    cout << "\n\n" << endl;
    cout << "To demonstrate (A.B)' = B'.A' :" << endl;
    cout << "\nLHS: " << endl;
    transpose(C,E,r1,c2);
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            cout << E[i][j] << " " << flush;
        }
        cout << endl;
    }
    cout << "\n\nRHS:" << endl;
    transpose(B,B1,r2,c2);
    transpose(A,A2,r1,c1);
    matMultiply(B1,A2,r2,c1,F,r1);
    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            cout << F[i][j] << " " << flush;
        }
        cout << endl;
    }
    return 0;
}

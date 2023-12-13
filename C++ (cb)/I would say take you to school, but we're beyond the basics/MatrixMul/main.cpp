#include <iostream>
using namespace std;
void AcceptDim(int *pr1,int *pc1, int *pr2, int *pc2)
{
    cout << "Enter the order of the matrix A: " << endl;
    cin >> *pr1;
    cin >> *pc1;
    cout << "Enter the order of the matrix B: " << endl;
    cin >> *pr2;
    cin >> *pc2;
    if(*pc1 != *pr2)
    {
        cout << "Matrix multiplication is incompatible" << endl;
            system(0);  //to exit the program if the orders are incompatible
    }
}
void AcceptEle(int r1, int c1, int r2, int c2, int* a, int* b, int* c)
{
    cout << "Enter the elements of A: " << endl;
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            cin >> *(a + i*c1 + j);
    cout << "Enter the elements of B: " << endl;
    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            cin >> *(b + i*c2 + j);
    for(int i = 0; i < r1; i++)
    {

        for(int j = 0; j < c2; j++)
        {
            int x = 0, y = 0;
            while(x < r1)
            {
                *(c+i*c2+j) += (*(a+c2*i+y++))*(*(b+c2*x+++j));
            }
        }
    }
}

int main()
{
    int r1,r2,c1,c2;
    AcceptDim(&r1,&c1,&r2,&c2);
    int A[r1][c1],B[r2][c2],C[r1][c2] = {};
    AcceptEle(r1,c1,r2,c2,&A[0][0],&B[0][0],&C[0][0]);
    cout << "\n\nC :" << endl;
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

}

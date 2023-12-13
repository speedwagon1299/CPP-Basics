#include <iostream>
#include <string>
using namespace std;

char a[50];

int n=sizeof(a) / sizeof(char);

int main(){
    cout<< "input:" << endl;
    char temp;
    cin.get(a,50);
    for(int i=0;i<(n-1);i++ ){
    for(int j=0;j<(n-i-1);j++){
        if(a[j]>a[j+1]){
            temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
        }
    }

}
for(i = 0; i < n; i++)
{
    cout << a[i] << endl;
}
cout<< "hi" << a << endl;

return 0;
}

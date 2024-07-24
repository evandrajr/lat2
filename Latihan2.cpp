#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    //mendeklarasikan array dan variabel
    int A[2][2], B[2][2], C[2][2];

    cout << "masukan nilai A11 : ";
    cin>>A[0][0];
    cout << "masukan nilai A12 : ";  
    cin>>A[0][1];
    cout << "masukan nilai A21 : "; 
    cin>>A[1][0];
    cout << "Masukan Nilai A22 : ";
    cin>>A[1][1];

    cout << "masukan nilai B11 : ";
    cin>>A[0][0];
    cout << "masukan nilai B12 : ";  
    cin>>A[0][1];
    cout << "masukan nilai B21 : "; 
    cin>>A[1][0];
    cout << "Masukan Nilai B22 : ";
    cin>>A[1][1];

    //menghitung nilai array
    C[0][0] = (A[0][0] * B[0][0] ) + (A[0][1] * B[1][0]);
    C[0][1] = (A[0][0] * B[0][1] ) + (A[0][1] * B[1][1]);
    C[1][0] = (A[1][0] * B[0][0] ) + (A[1][1] * B[1][0]);
    C[1][1] = (A[1][0] * B[0][1] ) + (A[1][1] * B[1][1]);

    cout << "Nilai Matriks C adalah: " << endl;
    cout << " [ " <<C[0][0]<< " " <<C[0][1]<< " ]"<< endl;
    cout << " [ " <<C[1][0]<< " " <<C[1][1]<< " ]"<< endl;

    system ("PAUSE");
    return 0;
}
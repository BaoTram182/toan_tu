/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    float gia[5];
    float price;
    float tong = 0;
    int i;
    for ( int i = 0; i <= 4; i++)
    {
        cout << "Dán giá cho sản phẩm: ";
        cin >> price;
        gia[i]=price;
    }
    cout << "Xuất giá các sản phẩm: " << endl;
    for ( int i = 0; i <=4; i++)
    {
        cout << "Giá của sản phẩm thứ " << i+1 << "là: " << gia[i] << endl;
    }
    for ( int i = 0; i <=4; i++)
    {
        tong += gia[i];
    }
    cout << "Tổng các phần tử trong mảng là: " << tong << endl;
    return 0;
}
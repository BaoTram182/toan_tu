/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int k, x, n = 5;
    
    double a[10];
    cout << "Nhập dữ liệu chèn vô mảng: " << endl;
    
    for ( int i = 0; i < n; i++)
    {
        cout << "Nhập giá trị cho phần tử thứ " << i+1 << " : ";
        cin >> a[i];
    }
    
    cout << "Nhập giá trị muốn chèn: ";
    cin >> x;
    cout << "Vị trí cần chèn: ";
    cin >> k;
    
    for ( int i = n - 1; i >= k; i--)
    {    
        a[ i + 1 ] = a[i];
    }
    
    a[k] = x;
    ++n;
    cout << "Mảng sau khi chèn: ";
    
    for ( int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    
    return 0;
}
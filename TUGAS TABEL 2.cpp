#include <iostream>
#include <string>
using namespace std;

tabel(int a, int b, int c, int *p1, int *p2, int *p3) {
    cout << "|a: " << a << "| b: " << b << "| c: " << c  << "| p1: " << p1 << "| p2: " << p2 << "| p3: " << p3 << endl;
}

int main(){
    
    int a = 0, b = 0, c = 0; 
    int *p1 = 0, *p2 = 0, *p3 = 0;

    a = 10;
    tabel(a, b, c, p1, p2, p3);
    b = 15;
    tabel(a, b, c, p1, p2, p3);
    c = 27;
    tabel(a, b, c, p1, p2, p3);
    p1 = &a;
    tabel(a, b, c, p1, p2, p3);
    p2 = &b;
    tabel(a, b, c, p1, p2, p3);
    *p1 = c;
    tabel(a, b, c, p1, p2, p3);
    a = *p2;
    tabel(a, b, c, p1, p2, p3);
    b = 6;
    tabel(a, b, c, p1, p2, p3);
    p3 = &b;
    tabel(a, b, c, p1, p2, p3);
    p3 = &c;
    tabel(a, b, c, p1, p2, p3);
    *p1 = *p3;
    tabel(a, b, c, p1, p2, p3);
}

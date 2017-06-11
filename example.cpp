#include<iostream>
using namespace std;

void increment (int &a)
{
        a = a + 1;
        cout << "a in increment " << a << endl;
        return;
}

int main(void)
{
        int b = 1; 
        cout << "Before incrementing " << b << endl;
        increment (b);
        cout << "a in main " << b << endl;
        return 0;
}
#include <iostream>
using namespace std;

void swap (int &a, int &b)
{
        int tmp = a;
        a = b;
        b = tmp;
        return;
}
int main(void)
{
        int a = 9;
        int b = 19;
        cout << "Value of a before swap " << a << endl;
        cout << "value of b before swap " << b << endl;
        swap (a, b);
        cout << "Value of a after swap " << a << endl;
        cout << "value of b after swap " << b << endl;
}
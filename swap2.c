#include <stdio.h>
#include <stdlib.h>

void swap (int &a, int &b);

int main(void)
{
        int a = 9;
        int b = 19;
        //cout << "Value of a before swap " << a << endl;
        //cout << "value of b before swap " << b << endl;
        swap (a, b);
        //cout << "Value of a after swap " << a << endl;
        //cout << "value of b after swap " << b << endl;
        printf("The value of a and b is %d and %d \n", a, b);
}
void swap (int &a, int &b)
{
        int tmp = a;
        a = b;
        b = tmp;
        return;
}
#include<iostream>
using namespace std;

int raiseToPower (int base, int exp);

int main()
{
        int threeExpFour = raiseToPower(3, 4);
        cout << "3^4 is " << threeExpFour << endl;
        int twelveExpTen = raiseToPower (12,10);
        cout << "12^10 is " << twelveExpTen <<endl;
        printf("12^10 is %d \n", twelveExpTen);
        return 0;
}

int raiseToPower (int base, int exp)
{
        int result = 1;
        for (int i = 0; i < exp; ++i) {
                result *= base;
        }
        return result;
}
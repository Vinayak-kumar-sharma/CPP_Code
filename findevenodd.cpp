#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 0};
    int count = 0;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] & 1)
        { // 001,010,*011,100,*101,110\
             001,001,001,001,001,001
            count++;
        }
        if (count & 1)
        {
            cout << " odd ";
            count = 0;
            // return 0;
        }
        else
        {
            cout << " even ";
            // return 0;
        }
    }
    return 0;
}
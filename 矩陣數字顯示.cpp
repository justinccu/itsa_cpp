/*

輸入格式
輸入格式為 四個整數。

輸出格式
輸出值為輸入值的矩陣數字。

*/

#include <iostream>
#include <string>
using namespace std;

char a[5][10][6] = {
    {"*****", "    *", "*****", "*****", "*   *", "*****", "*****", "*****", "*****", "*****"},
    {"*   *", "    *", "    *", "    *", "*   *", "*    ", "*    ", "    *", "*   *", "*   *"},
    {"*   *", "    *", "*****", "*****", "*****", "*****", "*****", "    *", "*****", "*****"},
    {"*   *", "    *", "*    ", "    *", "    *", "    *", "*   *", "    *", "*   *", "    *"},
    {"*****", "    *", "*****", "*****", "    *", "*****", "*****", "    *", "*****", "    *"},
};

int main()
{
    string c;
    cin >> c;

    for (int j = 0; j < 5; j++) // print五行
    {
        for (int i = 0; i < c.length(); i++)
        {
            int d = c[i] - '0'; // char 轉 int
            if (i > 0)
                cout << " ";
            cout << a[j][d];
        }
        cout << endl;
    }

    return 0;
}

#include <algorithm>
#include <iostream>

using namespace std;  // !!!! DONT USE namespace std !!!!

int min(int a, int b)
{

    return a > 0 && a < b;
}

int main()
{

    int a = 2;
    int b = 3;


    int res = min(a, b);
    cout << res << std::endl;


    return 0;
}

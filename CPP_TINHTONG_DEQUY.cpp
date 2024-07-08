#include <iostream>
using namespace std;

int nGiaithua(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * nGiaithua(n - 1);
    }
}
int main()
{
    int n = 10;
    cout << "Giai thua la :" << " " << nGiaithua(n);
}
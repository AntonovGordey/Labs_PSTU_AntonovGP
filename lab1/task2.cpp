#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int res1 = ++n * ++m;
    cout << "1) " << res1 << endl;

    bool res2 = m++ < n;
    cout << "2) " << res2 << endl;

    bool res3 = n++ > m;
    cout << "3) " << res3 << endl;

    return 0;
}
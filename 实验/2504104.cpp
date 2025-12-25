#include <iostream>  
#include <iomanip>                                  
using namespace std;

int main()
{
    unsigned int testUnint = 65534;
    cout << "output in unsigned int type:" << testUnint << endl;
    cout << "output in char type:" << static_cast<char>(testUnint) << endl;
    cout << "output in short type:" << static_cast<short>(testUnint) << endl;
    cout << "output in int type:" << static_cast<int>(testUnint) << endl;
    cout << "output in double type:" << static_cast<double>(testUnint) << endl;
    cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
    cout << "output in Hex unsigned int type:" << hex << testUnint << endl;
    cout << "output in Oct unsigned int type:" << oct << testUnint << endl;
    double d1 = 3.14;
    double d2 = 3.99;
    double d3 = -2.7;
    double d4 = 1e10;
    cout << "\nʵ��תint:" << endl;
    cout << "(int)3.14 = " << static_cast<int>(d1) << endl;
    cout << "(int)3.99 = " << static_cast<int>(d2) << endl;
    cout << "(int)-2.7 = " << static_cast<int>(d3) << endl;
    cout << "(int)1e10 = " << static_cast<int>(d4) << endl;
    return 0;
}

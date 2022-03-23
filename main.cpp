#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
   int a, b;
   cin >> a >> b;
   cout << "A + B = " << a + b << '\n'
    << "A - B = " << a - b << '\n'
<<<<<<< HEAD
    << " A * B = " << a*b << '\n'
    << " A / B = " << a/b << '\n'
    << " MAXfrom(A,B)= " << max(a,b) <<'\n';
=======
    << "A * B = " << a*b << '\n'
    << " A / B = " << a/b << '\n'
    << "MINfrom(A,B)=" << min(a,b) << '\n';
>>>>>>> 7841e5f (code : добавлен вывод наименьшего значения)
    return 0;
}


//@see http://www.cplusplus.com/reference/iomanip/setprecision/
// setprecision example
#include <iostream>     // cout, fixed
#include <iomanip>      // setprecision

using namespace std;

int main () {
  double f =3.14159;
  cout << setprecision(5) << f << '\n';
  cout << setprecision(9) << f << '\n';
  cout << fixed << "Fixed \n";
  cout << setprecision(5) << f << '\n';
  cout << setprecision(9) << f << '\n';



  double x1 = 12345624.72345;
  double x2 = 987654.12345;
  double x3 = 1985.23456;
  cout << setprecision (3) << x1<< endl;
  cout << setprecision (4) << x2 << endl;
  cout << setprecision (5) << x3<< endl;
  return 0;
}

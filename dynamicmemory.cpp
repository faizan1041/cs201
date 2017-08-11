#include <iostream>
#include <string>


using namespace std;





int main() {

  //int a[10] = {16,2,3,4,5,6,7,8,9,10};
  int *a = new int[10];
  a[10] = 20;
  int ctr = 0;


  cout << sizeof(a);


  while(true) {
    if (ctr == (sizeof(a) / sizeof(*a))) {
      break;
    }

    cout << a[ctr] << endl;
    ctr++;

  }


  return 0;
}

#include <iostream>
#include <string>


using namespace std;


class Person {
private:
  int age;
  string name;
protected:
public:
  Person(int iage, string iname) {
    age = iage;
    name = iname;
  }

  void tellMe() {
    cout << "Age: " << age << "name: " << name << endl;
  }


  friend class Member;

};

class Member {
private:
protected:
public:


  void tellMe(Person p) {
    cout << "Age: " << p.age << "name: " << p.name << endl;
  }



};



int main() {

  Person p(24, "Faizan");
  p.tellMe();

  Member m;
  m.tellMe(p);


  return 0;
}

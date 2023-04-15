// C++ Program for Class to print using data members
#include <iostream>
using namespace std;

class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s) 
	{
      salary = s;     // Set S=50000 to salary data members
    }
    // Getter
    int getSalary() {
      return salary;
    }
};

int main() 
{
  Employee myObj;              //  Object name= myObj
  myObj.setSalary(50000);
  cout << myObj.getSalary();
  return 0;
}

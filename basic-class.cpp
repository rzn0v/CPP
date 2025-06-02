#include<iostream>
using namespace std;
class Employee{
private:
    string Name;
    string Company;
    int Age;
public:
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    void introduceYourself(){
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
    }
};

int main(){
    Employee emp1 = Employee("Reno", "Google", 20);
    Employee emp2 = Employee("Paimon", "Apple", 10);

    emp1.introduceYourself();
    emp2.introduceYourself();

    return 0;
}

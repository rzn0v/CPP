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
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        Age = age;
    }
    int getAge(){
        return Age;
    }

    void introduceYourself(){
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
    }
};

int main(){
    Employee emp1 = Employee("Reno", "Google", 20);
    Employee emp2 = Employee("Paimon", "Microsoft", 35);

    emp2.setName("Aether");
    string comp1 = emp1.getCompany();
    emp2.introduceYourself();
    cout << "-----------------------------------" << endl;
    cout << comp1;

    return 0;
    
}
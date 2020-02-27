#include <iostream>

using namespace std;

class employee {
    public:
        float salary;
        void inputSalary(){
            cout<<"Enter employee salary. ";
            cin>>salary;
        }
};

class manager : public employee {
    public:
    float getMgrAllowance() {
        return 0.1*salary;
    }
};

class subordinate : public employee {
    public:
    float getAllowance() {
        return 0.05*salary;
    }
};

int main()
{
    manager mgr;
    subordinate sub;
    employee emp;

    emp.inputSalary();

    cout<<"Manager allowance is : "<<mgr.getMgrAllowance()<<"\n";
    cout<<"Subordinate allowance is : "<<sub.getAllowance()<<"\n";

    return 0;
}

#include<bits/stdc++.h>
using namespace std;


struct Employee{
    int emp_id;
    string emp_name;
    string emp_desig;
    string emp_dept;
    float salary;
};

Employee getEmp( Employee e ){
   
    cout<<"Enter Employee Id : "<<endl;
    cin>>e.emp_id;
    cin.ignore();
    cout<<"Enter Emplyee Name: "<<endl;
    getline(cin,e.emp_name);
    cout<<"Enter Employee Deplartment: "<<endl;
    getline(cin,e.emp_dept);
    cout<<"Enter Employee Designation: "<<endl;
    getline(cin,e.emp_desig);
    cout<<"Enter Employee Salary : "<<endl;
    cin>>e.salary;
    cin.ignore();
    return e;
}
void displayEmp(Employee emp){
cout<<"Id: "<<" "<<emp.emp_id<<endl;
cout<<"Name: "<<" "<<emp.emp_name<<endl;
cout<<"Designation: "<<" "<<emp.emp_desig<<endl;
cout<<"Department: "<<" "<<emp.emp_dept<<endl;
cout<<"Salary : "<<emp.salary<<endl;
cout<<endl;
}
void count(Employee e[]){
cout<<"Enter department to count Employee"<<endl;
string dept;
int count = 0 ;
for(int i = 0 ; i<3 ; i++){
    if(e[i].emp_dept == dept){
        count++;
    }
}
cout<<"Total Employee in "<<dept<<" is "<<count<<endl;
}


int main(){

    Employee emp[3];

    cout<<"Enter the Emplpoyee Information"<<endl;
    for( int i=0 ; i<3 ; i++)
    { cout<<" Employee "<<i+1<<endl;
        getEmp(emp[i]);
    }
    cout<<"Employee Details"<<endl;
    for(int i=0 ; i<3 ; i++)
     displayEmp(emp[i]);

    count(emp);
}
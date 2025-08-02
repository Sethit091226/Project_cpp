#include<iostream>
using namespace std;
class Employee{
    private:
       int id;
       string name;
       char gender;
       float salary;
    public:
       void input(){
          cout<<"Enter Your ID :"; cin>>id;
          cout<<"Enter Your Name :";cin.ignore(); getline(cin,name);
          cout<<"Enter Your Gender :"; cin>>gender;
          cout<<"Enter Your Salary :"; cin>>salary;
       }
       void output(){
          cout<<id<<"\t"<<name<<"\t"<<gender<<"\t"<<salary<<"$"<<endl;
       }
       float getSalary(){
            return salary;
       }
       int setsalary(){
         return setsalary;
       }

};
void Input(Employee  a[] ,int n){
        for(int i=0; i<n; i++){
            cout<<"Enter Data Employee "<<(i+1)<<endl;
             a[i].input();
        }
}
void Output(Employee a[], int n){
        for(int i=0; i<n; i++){
            a[i].output();
        }
}
void Max(Employee a[], int n){
    float m =a[0].getSalary();
    for(int i=1; i<n; i++){
        if(m < a[i].getSalary()){
            m = a[i].getSalary();
        }
    }
    cout<<m;
}
float Totalsalary(Employee a[], int n){
    float s = 0;
    for(int i = 0; i<n; i++){
        s = s + a[i].getSalary();
    }
    return s;
}
void Sort(Employee a[], int n){
    Employee temp;
    for(int i=0; i<n-1; i++)
       for(int j=i+1; j<n; j++){
         if(a[i].getSalary()<a[j].getSalary()){
             temp = a[i];
             a[i] = a[j];
             a[j] = temp;
         }
       }
}
int main(){
    Employee a[100];
    int n;
    cout<<"How many employees do you want? :"; cin>>n;
    cout<<"Enter all Employee "<<endl;
    Input(a,n);
    cout<<"Show all Data of Employee"<<endl;
    cout<<"ID\tName\t\tGender\tSalary"<<endl;
    Output(a,n);
    cout<<"Maximum Salary of Employee is :";
    Max(a,n);
    cout<<"$"<<endl;
    cout<<"Total Salary is :"<<Totalsalary(a,n)<<"$"<<endl;
    system("color 09");
    return 0;
}
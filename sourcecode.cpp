#include<iostream>
#include<iomanip>
using namespace std;
int bs;
class employee;
class company
{
    public:
    int S[100];
    public:
    void assign_salary(int sal);
    friend void empsal(company,employee);
};
void company::assign_salary(int sal)
{
     S[0]=sal;
}
class employee
{
   int Emp[100][100];
   int attend;
    public:
   void Assign_empid(int temp)
   {

       int i=0;
       Emp[0][i]=temp;
       cout<<Emp[0][i];
   }
   void Assign_attend(int a)
   {
       attend=a;
   }
   friend void empsal(company,employee);

};
void empsal(company c,employee e)
{
    int i=0;
    if(e.attend==26)
    e.Emp[1][i]=c.S[0];
    else{
        int temp=26-e.attend;
        c.S[0]=c.S[0]-temp*100;
        e.Emp[1][i]=c.S[0];
    }  
    cout<<"EMPLOYEE SALARY IS:"<<e.Emp[1][i]<<endl;
}
void intro()
{
    cout<<"----------------------------------SALARY MANAGEMENT SYSTEM------------------------------"<<endl;
    cout<<"CHOOSE FROM BELOW OPTIONS"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"1.COMPANY'S SALARY          "<<setw(59)<<"2.EMPLOYEE SALARY CALCULATOR"<<endl<<"3.EMPLOYEE ATTENDANCE"<<setw(68)<<"4.COMPANY'S TOTAL SALARY GROSS"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"PRESS 5 TO EXIT"<<endl;
    cout<<"----------------------------------SALARY MANAGEMENT SYSTEM------------------------------"<<endl;

}
int main()
{
    int choice;
    company c1;
    employee e1;
    do
    {
        intro();
        cout<<"Enter Your Prefferd Choice:"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter The Company's Basic Salary:";
            cin>>bs;
            c1.assign_salary(bs);
            break;
        case 2:
            int attend;
             cout<<"Enter Attendance of an Employee:";
             cin>>attend;
             e1.Assign_attend(attend);
             empsal(c1,e1);
             break;
        case 3:
            int wd;
            cout<<"No.Of Working Days:"<<endl;
            cin>>wd;
            e1.Assign_attend(wd);
            break;
        case 4:
            int Employ;
            cout<<"Total NUmber of Employee's in Company:";
            cin>>Employ;
            int Total_Gross=Employ*c1.S[0];
            cout<<"Company's Gross:"<<Total_Gross<<endl;
            break;
        }

    } while(choice!=5);

}
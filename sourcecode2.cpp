#include<iostream>
#include<iomanip>
int c;
using namespace std;
class company
{
    char company_name[100];
    char Domain_Name[50];
    int salary;
    public:
    void Assign_companyName()
    {
        cout<<"Enter Company Name:";
        cin>>company_name;
    }
    void Assign_DomainName()
    {
        cout<<"Enter Domain Name:"<<endl;
        cin>>Domain_Name;
        cout<<"Enter Salary For that Domain:"<<endl;
        cin>>salary;
    }
    void show_company()
    {
        cout<<"  "<<company_name<<"   \t \t "<<Domain_Name<<"   \t \t "<<salary<<endl;
    }
};
class Employee
{
    int Emp_ID;
    int Emp_Attend;
    char Emp_Name[50];
    public:
    void Assign_Employee()
    {
        cout<<"Enter Employee Id:"; 
        cin>>Emp_ID;
        cout<<"Enter Employee Name:";
        cin>>Emp_Name;
    }
    void Assign_Attend()
    {
        cout<<"Enter the Attendance:";
        cin>>Emp_Attend;
    }
    void show_details()
    {
        cout<<"  "<<Emp_ID<<"  \t \t "<<Emp_Name<<endl;
    }
};
void intro()
{
    cout<<"----------------------------------SALARY MANAGEMENT SYSTEM------------------------------"<<endl;
    cout<<"CHOOSE FROM BELOW OPTIONS"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"1.EMPLOYEE PORTAL         "<<setw(59)<<"2.COMPANY'S PORTAL"<<endl<<setw(48)<<"3.HELPLINE"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"PRESS 4 TO EXIT"<<endl;
    cout<<"----------------------------------SALARY MANAGEMENT SYSTEM------------------------------"<<endl;

}
void Emp_portal()
{
    cout<<"-----------------------------------EMPLOYEE PORTAL------------------------------"<<endl;
    cout<<"CHOOSE FROM BELOW OPTIONS"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"1.EMPLOYEE REGISTRATION    "<<setw(50)<<"2.EMPLOYEE ATTENDANCE"<<endl<<setw(50)<<"3.EMPLOYEE DISPLAY'S";
    cout<<endl;
    cout<<endl;
    cout<<"PRESS 4 TO BACK"<<endl;
    cout<<"----------------------------------EMPLOYEE PORTAL------------------------------"<<endl;

}
void companyIntro()
{
    cout<<"---------------------------------COMPANY'S PORTAL-----------------------------"<<endl;
    cout<<"CHOOSE FROM BELOW OPTIONS"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"1.COMPANY'S REGISTRATION       "<<setw(47)<<"2.COMPANY'S DETAILS"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"PRESS 3 TO BACK"<<endl;
    cout<<"---------------------------------COMPANY'S PORTAL----------------------------"<<endl;
}
void Help_line()
{
    cout<<"--------------------------------HELPLINE-------------------------"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"-----CONTACT US-----"<<endl;
    cout<<"EMAIL-ID : salarymanagement@gmail.com"<<endl;
    cout<<"CONTACT_NO: 8639636393"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"--------------------------------HELPLINE-------------------------"<<endl;
}
void companyRegintro()
{
    cout<<"---------------------------COMPANY'S//REGISTRATION-----------------------"<<endl;
    cout<<"CHOOSE FROM BELOW OPTIONS"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"1.COMPANY'S REGISTRATION        "<<setw(47)<<"2.DOMAINS REGISTRATION"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"PRESS 3 TO BACK"<<endl;
    cout<<"--------------------------COMPANY'S//REGISTRATION------------------------"<<endl;
}
int main()
{   
    int choice,i;
    Employee E[100];
    company C[100];
    do{
        intro();
        cout<<"Enter Your Prefered Choice:";
        cin>>choice;
        switch (choice)
        {
        case 1:
            do{
            Emp_portal();
            cout<<"Enter Your Prefered Choice:";
            cin>>c;
            switch(c)
            {
             case 1:
             int n;
             cout<<"Enter No.of Employee's(You want to Register):";
             cin>>n;
             for(i=0;i<n;i++)
              {
                E[i].Assign_Employee();
              }
              break;
             case 2:
             int n1;
             cout<<"Enter the No of Employes's (Attendance To Be Posted):";
             cin>>n1;
             for(int i=0;i<n1;i++)
             {
                E[i].Assign_Attend();
             }
             break;
             case 3:
             cout<<"|EMPLOYEE ID||EMPLOYEE NAME|"<<endl;
             for(int i=0;i<n;i++)
             {
                 E[i].show_details();
             }
             break;

            }          
            }while(c!=4);
            break;
        case 2:
            do{
               companyIntro();
               cout<<"Enter The Prefered Choice:";
               cin>>c;
               switch(c)
               {
                   case 1:
                   do{
                   companyRegintro();
                   cout<<"Enter Your Preffered Choice:";
                   cin>>c;
                   switch(c){
                   case 1:
                   int n2;
                   cout<<"How Many Companies You Want To Register:";
                   cin>>n2;
                   for (int i = 0; i < n2; i++)
                   {
                       C[i].Assign_companyName();
                   }
                   break;
                   case 2:
                   for(int i=0;i<n2;i++)
                   {
                       C[i].Assign_DomainName();
                   }
                   break;
                   }
                   break;
                   }while(c!=3);
               }

            }while(c!=3);
            break;
        case 3:
        Help_line();
        break;
        }
        
    }while (choice!=4);  
}
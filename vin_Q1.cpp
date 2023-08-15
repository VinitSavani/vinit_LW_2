#include<iostream>
using namespace std;

class com
{
   public:
   int emp_id;
   char emp_name[50];
   char emp_role[50];
   int emp_age;
   int emp_salary;
   int emp_experience;
   char emp_city[50];
   char emp_company_name[50];	
};

int main()
{
	int i;
	
	com v[5];
	
	for(i=0;i<5;i++)
	{
		cout << "Enter ID :- " ;
		cin >> v[i].emp_id ;
		cout << "Enter Name :- ";
		cin >> v[i].emp_name ;
		cout << "Enter Role :- " ;
		cin >> v[i].emp_role ;
		cout << "Enter Age :- " ;
		cin >> v[i].emp_age ;
		cout << "Enter Salary :- " ;
		cin >> v[i].emp_salary ;
		cout << "Enter Experience :- " ;
		cin >> v[i].emp_experience ;
		cout << "Enter City :- " ;
		cin >> v[i].emp_city ;
		cout << "Enter Company's Name :- " ;
		cin >> v[i].emp_company_name ;
	}
	
	cout << endl << endl ;
	
	for(i=0;i<5;i++)
	{
		cout << "ID :- " << v[i].emp_id ;
		cout << "Name :- " << v[i].emp_name ;
		cout << "Role :- " << v[i].emp_role ;
		cout << "Age :- " << v[i].emp_age ;
		cout << "Salary :- " << v[i].emp_salary ;
		cout << "Experience :- " << v[i].emp_experience ;
		cout << "City :- " << v[i].emp_city ;
		cout << "Company's name :- " << v[i].emp_company_name << endl;
	}
	
	return 0;
}

#include<iostream>
using namespace std;

class Cars
{
   public:
   int car_id ;
   char car_company_name[50];
   char car_color[50];
   char car_model[50];
   int car_relese_year;	
};

int main()
{
	int i;
	
	Cars v[4];
	
	for(i=0;i<4;i++)
	{
		cout << "Enter ID :- " ;
		cin >> v[i].car_id ;
		cout << "Enter Company Name :- " ;
		cin >> v[i].car_company_name ;
		cout << "Enter Color :- " ;
		cin >> v[i].car_color ;
		cout << "Enter Model :- " ;
		cin >> v[i].car_model ;
		cout << "Enter Relese Year :- " ;
		cin >> v[i].car_relese_year ;
    }
	
	cout << endl << endl ;
	
	for(i=0;i<4;i++)
	{
		cout << "ID :- " << v[i].car_id ;
		cout << "Company's Name :- " << v[i].car_company_name ;
		cout << "Color :- " << v[i].car_color ;
		cout << "Model :- " << v[i].car_model ;
		cout << "Relese Year :- " << v[i].car_relese_year << endl ;
	}
	
	return 0;
}

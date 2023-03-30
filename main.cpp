#include "menudriver.cpp"
#include<iostream>
using namespace std;

int main()
{
	MenuDriver menu;
	int choice{0};
	bool exit = false;

	while(!exit)
	{
		cout<<"===================== Car Servicing =====================\n"<<endl;
		cout<<"Enter your choice \n\n1.Create Car\n2.Print All Car details\n3.Update Insurance\n"
				"4.Drop car to Service\n5.pick car from service\n6.Exit\n\n"<<endl;
		cin>>choice;
		switch(choice)
		{

			case 1:
			{
				menu.createCar();
				break;
			}

			case 2:
			{
				menu.printAllCarDetails();
				break;
			}

			case 3:
			{
				menu.updateInsuarance();
				break;
			}
			case 4:
			{
				menu.dropCarToService();
				break;
			}
			case 5:
			{
				menu.pickCarFromService();
				break;
			}
			case 6:
			{
				exit = true;
				cout<<"THANK YOU VISIT AGAIN"<<endl;
				break;
			}
			default:
			{
				cout<<"Enter Valid choice"<<endl;
				break;
			}
		}
	}
}

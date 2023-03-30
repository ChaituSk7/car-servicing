#include "car.h"
#include "servicestation.h"
#include<iostream>
#include<vector>
using namespace std;

class MenuDriver
{
	public:
		ServiceStation ssobj;
		Car cobj;
		vector<Car> car_obj;
		void createCar()
		{
			string cname;
			cout<<"Enter the car Name"<<endl;
			getline(cin>>ws,cname);

			string cmodel;
			cout<<"Enter the Car Model"<<endl;
			getline(cin>>ws,cmodel);

			string yop;
			cout<<"Car year of purchase"<<endl;
			getline(cin>>ws,yop);

			int owners;
			cout<<"Enter Number of owners"<<endl;
			cin>>owners;

			string cregno;
			cout<<"Enter car registration Number"<<endl;
			getline(cin>>ws,cregno);

			string omtread;
			cout<<"Enter the odometer reading in kms"<<endl;
			getline(cin>>ws,omtread);

			string ino;
			cout<<"Enter the car Insurance Number"<<endl;
			getline(cin>>ws,ino);

			string iexpdt;
			cout<<"Enter the car Insurance Expiry date"<<endl;
			getline(cin>>ws,iexpdt);

			string itype;
			cout<<"Enter the car Insurance type"<<endl;
			getline(cin>>ws,itype);

			double iamt;
			cout<<"Enter the Insurance paid amount to car"<<endl;
			cin>>iamt;

			string chno;
			cout<<"Enter car chassis number"<<endl;
			getline(cin>>ws,chno);

			string eno;
			cout<<"Enter car Engine Number"<<endl;
			getline(cin>>ws,eno);

			cobj = Car(cname,cmodel,yop,cregno,omtread,ino,iexpdt,itype,chno,eno,owners,iamt);

			car_obj.push_back(cobj);
		}

		void printAllCarDetails()
		{
			for(auto &i : car_obj)
			{
				i.Display();
			}
		}

		void updateInsuarance()
		{
			cout<<"Enter your car registration number to update details"<<endl;
			string reg;
			getline(cin>>ws,reg);
			for(auto &i:car_obj)
			{
				if(i.getCarRegNo() == reg)
				{
					double updamt;
					cout<<"Enter new Insurance premium amount"<<endl;
					cin>>updamt;

					string updnum;
					cout<<"Enter new Insurance number"<<endl;
					getline(cin>>ws,updnum);

					string updtype;
					cout<<"Enter new Insurance Type"<<endl;
					getline(cin>>ws,updtype);

					string date;
					cout<<"Enter newly Insuranced date"<<endl;
					getline(cin>>ws,date);

					string dt = cobj.getInsuranceExpDate();
					int new_month = stoi(date.substr(3,4));
					int new_year = stoi(date.substr(6,9));

					int old_month = stoi(dt.substr(3,4));
					int old_year = stoi(dt.substr(6,9));

					if((new_month > old_month) && (new_year > old_year))
					{
						i.setInsuranceExpDate(date);
						cout<<"Expiry date was updates"<<endl;
					}
					else
					{
						cout<<"Expiry date was not updated"<<endl;
					}
				}
				else
				{
					cout<<"Car details not found"<<endl;
				}
			}

		}


		void dropCarToService()
		{
			string regNo;
			cout<<"Enter car registration number that you want to do service"<<endl;
			getline(cin>>ws,regNo);

			for(auto &i: car_obj)
			{
				if(regNo == i.getCarRegNo())
				{
					ssobj.add_car_service(i);
				}
				else
				{
					cout<<"Car details not found"<<endl;
				}
			}
		}

		void pickCarFromService()
		{
			string reg;
			cout<<"Enter your car registration number"<<endl;
			getline(cin>>ws,reg);
			for(auto &i:car_obj)
			{
				if(reg == i.getCarRegNo())
				{
					ssobj.serviceCar(i);
				}
				else
				{
					cout<<"Car details not found"<<endl;
				}
			}
		}
};

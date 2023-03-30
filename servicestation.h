#ifndef SERVICESTATION_H
#define SERVICESTATION_H
#include "car.h"
#include "servicedetails.h"
#include<map>
#include<vector>
#include<string>

class ServiceStation
{
	private:
		string name,address;
		vector<Car> current_car_list;
		multimap<string,ServiceDetails> sdata;
		string odmtr,issues;
	public:
		ServiceStation()
		{
			cout<<"Enter the Service station Name"<<endl;
			getline(cin>>ws,name);

			cout<<"Enter the Address"<<endl;
			getline(cin>>ws,address);

			cout<<"Welcome to "<<name<<" ServiceStation"<<endl;
		}
		ServiceDetails ser1;
		void add_car_service(Car cobj)
		{
			current_car_list.push_back(cobj);

			cout<<"Enter the odometer reading"<<endl;
			getline(cin>>ws,odmtr);

			cout<<"Enter the issues"<<endl;
			getline(cin>>ws,issues);

		}

		void serviceCar(Car cobj)
		{
			cout<<"Enter car registration number"<<endl;
			string regno;
			getline(cin>>ws,regno);
			if(cobj.getCarRegNo() == regno)
			{
				string bill_amount;
				cout<<"Enter bill amount"<<endl;
				getline(cin>>ws,bill_amount);
				ser1.setOdoreading(odmtr);
				ser1.setIssues(issues);
				ser1.setBillAmount(bill_amount);

				string date;
				cout<<"Enter today date "<<endl;
				getline(cin>>ws,date);
				ser1.setDate(date);

				sdata.insert(pair<string,ServiceDetails>(regno,ser1));

				ser1.DetailsShow();

				for(auto &i: sdata)
				{
					cout<< i.first << " : { " << i.second.getOdoreading()<<" , "<< i.second.getDate() <<" , "<< i.second.getIssues()<<" , "<<i.second.getBillAmount()<<" }\n";
				}
			}
			else
			{
				cout<<"car details not found"<<endl;
			}
		}
};
#endif

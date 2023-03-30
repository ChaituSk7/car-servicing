#ifndef CAR_H
#define CAR_H
#include<string>
#include<iostream>
using namespace std;

class Car
{
	private:
			string car_comp_name;
			string car_model,year_of_purchase,car_reg_no,odomtr_reading,insurance_no,
					insurance_exp_date,insurance_type,chassis_no,engine_no;
			int no_of_owners;
			double insurance_amt;
	public:
		Car(){}
		Car(string car_comp_name,string car_model,string year_of_purchase,string car_reg_no,string odomtr_reading,string insurance_no,
				string insurance_exp_date,string insurance_type,string chassis_no,string engine_no,int no_of_owners,double insurance_amt)
		{
			this->car_comp_name = car_comp_name;
			this->car_model = car_model;
			this->year_of_purchase = year_of_purchase;
			this->car_reg_no = car_reg_no;
			this->odomtr_reading = odomtr_reading;
			this->insurance_no = insurance_no;
			this->insurance_exp_date = insurance_exp_date;
			this->insurance_type = insurance_type;
			this->chassis_no = chassis_no;
			this->engine_no = engine_no;
			this->no_of_owners = no_of_owners;
			this->insurance_amt = insurance_amt;

		}
		const string& getCarCompName() const {
			return car_comp_name;
		}

		void setCarCompName(const string &carCompName) {
			car_comp_name = carCompName;
		}

		const string& getCarModel() const {
			return car_model;
		}

		void setCarModel(const string &carModel) {
			car_model = carModel;
		}

		const string& getCarRegNo() const {
			return car_reg_no;
		}

		void setCarRegNo(const string &carRegNo) {
			car_reg_no = carRegNo;
		}

		const string& getChassisNo() const {
			return chassis_no;
		}

		void setChassisNo(const string &chassisNo) {
			chassis_no = chassisNo;
		}

		const string& getEngineNo() const {
			return engine_no;
		}

		void setEngineNo(const string &engineNo) {
			engine_no = engineNo;
		}

		const string& getInsuaranceNo() const {
			return insurance_no;
		}

		void setInsuaranceNo(const string &insuaranceNo) {
			insurance_no = insuaranceNo;
		}

		double getInsuranceAmt() const {
			return insurance_amt;
		}

		void setInsuranceAmt(double insuranceAmt) {
			insurance_amt = insuranceAmt;
		}

		const string& getInsuranceExpDate() const {
			return insurance_exp_date;
		}

		void setInsuranceExpDate(const string &insuranceExpDate) {
			insurance_exp_date = insuranceExpDate;
		}

		const string& getInsuranceType() const {
			return insurance_type;
		}

		void setInsuranceType(const string &insuranceType) {
			insurance_type = insuranceType;
		}

		int getNoOfOwners() const {
			return no_of_owners;
		}

		void setNoOfOwners(int noOfOwners) {
			no_of_owners = noOfOwners;
		}

		const string& getOdomtrReading() const {
			return odomtr_reading;
		}

		void setOdomtrReading(const string &odomtrReading) {
			odomtr_reading = odomtrReading;
		}

		const string& getYearOfPurchase() const {
			return year_of_purchase;
		}

		void setYearOfPurchase(const string &yearOfPurchase) {
			year_of_purchase = yearOfPurchase;
		}

		void Display()
		{
			cout<<"Car Name = "<<getCarCompName()<<"\n"
				<<"Car Model = "<<getCarModel()<<"\n"
				<<"Year of purchase = "<<getYearOfPurchase()<<"\n"
				<<"Car registration Number = "<<getCarRegNo()<<"\n"
				<<"Odometer reading = "<<getOdomtrReading()<<"\n"
				<<"Insurance number = "<<getInsuaranceNo()<<"\n"
				<<"Insurance expiry date = "<<getInsuranceExpDate()<<"\n"
				<<"Insurance type = "<<getInsuranceType()<<"\n"
				<<"Insurance premium amount paid = "<<getInsuranceAmt()<<"\n"
				<<"chassis number = "<<getChassisNo()<<"\n"
				<<"Engine Number = "<<getEngineNo()<<"\n\n"<<endl;
		}

};


#endif

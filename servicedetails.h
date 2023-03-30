#ifndef SERVICEDETAILS_H
#define SERVICEDETAILS_H

class ServiceDetails
{
	private:
		string odoreading,date;
		string bill_amount;
		string issues;
	public:

		string getBillAmount() const {
			return bill_amount;
		}

		void setBillAmount(string billAmount) {
			bill_amount = billAmount;
		}

		const string& getDate() const {
			return date;
		}

		void setDate(const string &date) {
			this->date = date;
		}

		const string& getIssues() const {
			return issues;
		}

		void setIssues(const string &issues) {
			this->issues = issues;
		}

		const string& getOdoreading() const {
			return odoreading;
		}

		void setOdoreading(const string &odoreading) {
			this->odoreading = odoreading;
		}

		void DetailsShow()
		{
			cout<<"odometer : "<< getOdoreading() <<"\n"
				<<"Issues :"   << getIssues() << ",\n"
				<<"Date :" <<getDate() <<",\n"
				<<"Amount : "<<getBillAmount()<<endl;
		}
};

#endif

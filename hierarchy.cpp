#include<iostream>
#include<string>
using namespace std;
class person
{
public :
	string name,spec,dep,dsg,qua,gen,ward;
	int id,contact,exp,exp1;
	float sal;
	void details()
	{
		cout<<"ENTER NAME: ";
		cin>>name;
		cout<<"ENTER ID: ";
		cin>>id;
		cout<<"ENTER CONTACT NO.: ";
		cin>>contact;
		cout<<"ENTER SALARY: ";
		cin>>sal;
		cout<<"ENTER GENDER: ";
		cin>>gen;
	}
};

class Doctor:virtual public person
{
public:
	void doctor_details()
	{
		person::details();
		cout<<"ENTER QUALIFICATION: ";
		cin>>qua;                 
		cout<<"ENTER SPECIALISATION: ";
		cin>> spec;
		cout<<"ENTER EXPERIENCE IN YEARS: ";
		cin>> exp;
	}
};

class Nurse:virtual public person
{
public:
	void nurse_details()
	{
		person::details();
		cout<<"ENTER DEPARTMENT ";
		cin>>dep;
		cout<<"ENTER WARD ";
		cin>>ward;
		cout<<"ENTER EXPERIENCE ";
		cin>>exp1;
	}
 
};

class Admin:public Doctor,public Nurse
{
	public:
		void admin_details()
		{
         cout<<"\nENTER THE RECEPTIONIST DETAILS \n";
			person::details();
		}
		void display3()
		{
         cout<<"\nNAME\tID\tCONTACT\n";
			cout<<name<<"\t"<<id<<"\t"<<contact<<endl;
		}
		void search(Admin o[],Admin p[],int O,int P)
		{
			int ch,i,temp_id,flag=0;;
			do
			{
            cout<<"\t\t\tWELCOME TO MANAV HOSPITAL\n";
				cout<<"\n1.DOCTOR\n2.NURSE\n";
				cout<<"ENTER YOU CHOICE TO SEARCH ";
				cin>>ch;
				switch(ch)
				{
					case 1:flag=0;
					       cout<<"ENTER DOCTOR ID TO CHECK AVAILABILITY ";
					       cin>>temp_id;
						   for(int i=0;i<O;i++)
						   {
							  if(temp_id==o[i].id)
						        {
							      flag=1;
								  cout<<"DOCTOR AVAILABLE \n";
								  cout<<"ID\tNAME\tSPECIALIZATION\tQUALIFICATION\tEXPERIENCE\tCONTACT\n";
								  cout<<o[i].id<<"\t"<<o[i].name<<"\t"<<o[i].spec<<"\t"<<o[i].qua<<"\t"<<o[i].exp<<"\t"<<o[i].contact<<"\n";
								  break;
						        }
						   }
							  if(flag==0)
							  {
								cout<<"DOCTOR NOT AVAILABLE \n";
							  }
						   
						   break;
					case 2:flag=0;
					       cout<<"ENTER NURSE ID TO CHECK AVAILABILITY ";
					       cin>>temp_id;
						   for(int i=0;i<P;i++)
						   {
							  if(temp_id==p[i].id)
						        {
							      flag=1;
								  cout<<"NURSE AVAILABLE \n";
								  cout<<"ID\tNAME\tDEPARTMENT\tWARD\tEXPERIENCE\tCONTACT\n";
								  cout<<p[i].id<<"\t"<<p[i].name<<"\t"<<p[i].dep<<"\t"<<p[i].ward<<"\t"<<p[i].exp<<"\t"<<p[i].contact<<"\n";
								  break;
						        }
						   }
							  if(flag==0)
							  {
								cout<<"NURSE NOT AVAILABLE \n";
							  }
						   
						   break;
					default:cout<<"PLEASE ENTER A VALID CHOICE!\n";
				}
			}while(ch<3 && ch>0);
					
						   
		}
};  
int main() 
{
	Admin a,d[50],n[50];
   int D,N,i;
	int ch;
	a.admin_details();
	a.display3();

    cout<<"HOW MANY DOCTORS DATA ARE YOU INSERTING? ";
    cin>>D;
	for(i=0;i<D;i++)
	{
        d[i].doctor_details();
	}
	
    cout<<"\nHOW MANY NURSES DATA ARE YOU INSERTING? ";
	cin>>N;
	for(i=0;i<N;i++)
	{       
        n[i].nurse_details();
	}
	for(i=0;i<D;i++)
	{
        a.search(d,n,D,N);
	}
	return 0;
}

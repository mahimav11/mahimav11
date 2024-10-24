//creating bank management system  
//concepts used: 1.cpp class 2.array of object

//author:Vahadne M.M.(BS-3:127)

#include<iostream>
#include <string>
using namespace std;
class Bank
{
   private:
      string acc_hold;  
      float bal_amt,dpst_amt,with_amt;
   public:
      int acc_no;
      
   void details()
   {
   cout<<"ENTER NAME ";
   cin>>acc_hold;
   cout<<"ENTER ACCOUNT NUMBER ";
   cin>>acc_no;
   cout<<"ENTER TOTAL AMOUNT ";
   cin>>bal_amt;
   }
   void deposit()
   {
   cout<<"ENTER AMOUNT TO BE DEPOSITED ";
   cin>>dpst_amt;
   bal_amt+=dpst_amt;
   cout<<"AMOUNT "<<dpst_amt <<" DEPOSITED SUCCESSFULLY!\n";
   cout<<"TOTAL AMOUNT = " <<bal_amt;
   }
   void withdraw()
   {
   cout<<"ENTER AMOUNT TO BE WITHDRWAL ";
   cin>>with_amt;
   if(bal_amt>=with_amt)
   {
       bal_amt-=with_amt;
       cout<<"AMOUNT "<<with_amt <<" WITHDRWAL SUCESSFULLY\n";
       cout<<"TOTAL AMOUNT = " <<bal_amt<<"\n";   
   }
   else
   {
       cout<<"\nINSUFFICIENT BALANCE! ENTER A VALID AMOUNT";
   }
   }
   void display()
   {
        
        cout<<acc_hold<<"\t"<<acc_no<<"\t\t"<<bal_amt;   
   }

};
int main()
{
    Bank a[10];
    int ch,c,n,i,temp,flag=0,pos;
    cout<<"ENTER NO. OF ACCOUNTS \n";
    cin>>n;
    do
    {
       cout<<"1.INSERT DETAILS\n2.DEPOSIT AN AMOUNT\n3.WITHDRAW AN AMOUNT\n4.DISPLAY\nENTER YOUR CHOICE ";
       cin>>ch;
       switch(ch)
       {
           case 1:
                  for(i=0;i<n;i++)
                  {
                  a[i].details();
                  }
                  break;
           case 2:cout<<"Enter account number ";
                  cin>>temp;
                  for(i=0;i<n;i++)
                  {
                     if(temp==a[i].acc_no)
                     {
                        pos=i;
                        flag=1;
                        break;
                     }
                  }
                  if(flag==1)
                  {
                      a[pos].deposit(); 
                  }
                  else
                  {
                      cout<<"ACCOUNT NO. NOT FOUND!\n";
                  }
                  flag=0;
                  break;
           case 3:cout<<"Enter account number ";
                  cin>>temp;
                  for(i=0;i<n;i++)
                  {
                     if(temp==a[i].acc_no)
                     {
                        pos=i;
                        flag=1;
                        break;
                     }
                  }
                  if(flag==1)
                  {
                      a[pos].withdraw(); 
                  }
                  else
                  {
                      cout<<"ACCOUNT NO. NOT FOUND!\n";
                  }
                  flag=0;
                  break;
                 
           case 4:cout<<"NAME\t"<<"ACCOUNT NUMBER\t"<<"BALANCE\n";
                  for(i=0;i<n;i++)
                  {
                     a[i].display();
                     cout<<"\n";
                  }
                  
                  break;
           default:cout<<"INAVLID CHOICE\n";
       }
       cout<<"\n[PRESS 1 TO CONTINUE] ";
       cin>>c;  
    }while(c==1);


}

























#include <iostream>
#include <string>
using namespace std;
class books
{
    private:
        string author,temp_aut;
        string name,temp_name;
        int price,stock,order,i,n;
        string publisher;
        
     public:
        void details(int x)
        {
            cout<<"BOOK "<<x+1<<"\n\n";
            cout<<"enter name of book ";
            cin>>name;
            cout<<"enter book auhtor ";
            cin>>author;
            cout<<"enter book publisher ";
            cin>>publisher;
            cout<<"enter book price ";
            cin>>price;
            cout<<"enter stock of book ";
            cin>>stock;            
        }
        void search()
        {
            cout<<"Enter book name ";
            cin>>temp_name;
            cout<<"Enter book author ";
            cin>>temp_aut;
             
                if(name==temp_name && author==temp_aut)
                {
                   cout<<"BOOK IS AVAILABLE\n";
                   cout<<"NAME\tAUTHOR\tPRICE\tPUBLISHER\tSTOCK\n";
                   cout<<name<<"\t"<<author<<"\t"<<price<<"\t"<<publisher<<"\t"<<stock<<"\n";
                   cout<<"Enter no. of books you want ";
                   cin>>order;
                   if(order<=stock)
                   {
                       stock-=order;
                       cout<<"YOU ORDERED "<<order<<" books\n";
                       cout<<"TOTAL PRICE "<<order*price<<" Rs.\n";
                       cout<<"books in stock = "<<stock;
                   }
                   else
                   {
                   cout<<"book out of stock\n";
                   }
                }
                else
                {
                   cout<<"BOOK UNAVAILABLE\n";
                }
            
        }
        void display()
        {
              
              
              cout<<name<<"\t"<<author<<"\t"<<publisher<<"\t"<<price<<"\t"<<stock<<"\n";
              
        }      
};

int main()
{
   books b[10];
   int n,ch,t,i,k,N=0,total_price;
   
   do
   {
      cout<<"1.ENTER DETAILS\n2.PLACE ORDER\n3.DISPLAY\n";
      cout<<"enter choice ";
      cin>>ch;
      switch(ch)
      {
          case 1:cout<<"Enter no. of books you want ";
                 cin>>n;
                 for(i=N;i<n+N;i++)
                 {
                     b[i].details(i);
                 }
                 N+=n;
                 break;
          case 2:cout<<"how many diffrent would you order \n";
                 cin>>k;
                 for(i=0;i<k;i++)
                 {
                      b[i].search();       
                 }
                 break;
          case 3:
                 cout<<"NAME\tAUTHOR\tPUBLISHER\tPRICE\tSTOCK\n";
                  for(i=0;i<N;i++)
                 {
                      b[i].display();
                 }
                 break;
          default:cout<<"invalid choice \n";
       
      }
      cout<<"[PRESS 1 TO CONTINUE]\n";
      cin>>t;  
   }while(t==1);



}
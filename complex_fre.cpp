//overlaoding of binary operator
//operator overloading using friend function

//operator overloading for performing operations on complex nos.
//author:Vahadne M.M.(BS-3:127)
#include <iostream>
using namespace std;

class Complex
{
    public:
       int real,img;
       
       Complex()
       {
        real=0;
        img=0;
       }
       void display()
       {
        cout<<real<<"+"<<img<<"i\n";
       }
       void input()
       {
        cout<<"ENTER THE VALUE OF REAL PART ";
        cin>>real;
        cout<<"ENTER THE VALUE OF IMAGINARY PART ";
        cin>>img;
       }
           friend Complex operator +(Complex &c1,Complex &c2);
           friend Complex operator -(Complex &c1,Complex &c2);
           friend Complex operator *(Complex &c1,Complex &c2);
           friend Complex operator /(Complex &c1,Complex &c2);
         
           
};
Complex operator +(Complex &c1,Complex &c2)
{
    Complex temp;

    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}

Complex operator -(Complex &c1,Complex &c2)
{
    Complex temp;

    temp.real=c1.real-c2.real;
    temp.img=c1.img-c2.img;
    return temp;
}

Complex operator *(Complex &c1,Complex &c2)
{
    Complex temp;

    temp.real=c1.real*c2.real+c1.img*c2.img;
    temp.img=c1.real*c2.img-c1.img*c2.real;
    return temp;
}
Complex operator /(Complex &c1,Complex &c2)
{
    Complex temp;
    
    temp.real=((c1.real*c2.real)+(c1.img*c2.img))/((c2.real*c2.real)+(c2.img*c2.img));
    temp.img=((c1.img*c2.real)-(c1.real*c2.img))/((c2.real*c2.real)+(c2.img*c2.img));
    return temp;
    
}
int main()
{
     Complex x,y,z;
     int ch;
     x.input();
     y.input();
     do
     {
     cout<<"\n1.ADD\n2.SUBTRACT\n3.MULTIPLY\n4.DIVIDE\n";
     cout<<"enter choice ";
     cin>>ch;
     
     switch(ch)
     {
     case 1:z=x+y;
            cout<<"\n";
            cout<<"SUM OF "<<x.real<<"+"<<x.img<<"i"<<" and "<<y.real<<"+"<<y.img<<"i"<<" = ";
            z.display();
            cout<<"\n";
            break;
     case 2:z=x-y;
            cout<<"DIFFERENCE OF "<<x.real<<"+"<<x.img<<"i"<<" and "<<y.real<<"+"<<y.img<<"i"<<" = ";
            z.display();
            cout<<"\n";
            break;
     case 3:z=x*y;
            cout<<"PRODUCT OF "<<x.real<<"+"<<x.img<<"i"<<" and "<<y.real<<"+"<<y.img<<"i"<<" = ";
            z.display();
            cout<<"\n";
            break;
     case 4:z=x/y;
            cout<<"DIVISION OF "<<x.real<<"+"<<x.img<<"i"<<" and "<<y.real<<"+"<<y.img<<"i"<<" = ";
            z.display();
            cout<<"\n";
            break;     
    default:cout<<"INVALID CHOICE\n ";
    
    }
    }
    while(ch<=3 && ch>0);               
     
    
     return 0;
}
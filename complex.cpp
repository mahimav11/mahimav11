//operator overloading using member function
//overloading of binary operator

#include <iostream>
using namespace std;
class Complex
{
   public:
      int img,real;
      Complex()
      {
        real=0;
        img=0;
      }
      void input()
      {
        cout<<"Enter the value of real part ";
        cin>>real;
        cout<<"Enter the value of imaginary part ";
        cin>>img;
      }
      void display()
      {
        cout<<real<<"+"<<img<<"i\n";
      }
      Complex operator+(Complex &a)
      {
         Complex temp;

         temp.real=real+a.real;
         temp.img=img+a.img;
         return temp;
      }
      Complex operator-(Complex &a)
      {
        Complex temp;

        temp.real=real-a.real;
        temp.img=img-a.img;
        return temp;
      }
      Complex operator*(Complex &a)
      {
        Complex temp;

        temp.real=real*a.real-img*a.img;
        temp.img=real*a.img+img*a.real;
        return temp;
      }
     
};
int main()
{
     Complex x,y,z;
     x.input();
     y.input();
     z=x+y;
     cout<<"\n";
     cout<<"Sum of "<<x.real<<"+"<<x.img<<"i"<<" and "<<y.real<<"+"<<y.img<<"i"<<" = ";
     z.display();
     cout<<"\n";
     z=x-y;
     cout<<"Difference of "<<x.real<<"+"<<x.img<<"i"<<" and "<<y.real<<"+"<<y.img<<"i"<<" = ";
     z.display();
     cout<<"\n";
     z=x*y;
     cout<<"Product of "<<x.real<<"+"<<x.img<<"i"<<" and "<<y.real<<"+"<<y.img<<"i"<<" = ";
     z.display();
     cout<<"\n";
     return 0;
}

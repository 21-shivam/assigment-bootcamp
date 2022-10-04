#include<conio.h>
#include<iostream.h>
class sum
{
    private:
    int a,b;
    public:
        void set_data(int x,int y)
        {
            a=x;
            b=y;
        }
        void display()
        {
            std::cout<<"Value of a and b is=";
           std::cout<<a<<"\tand\t"<<b;
        }
        void add()
        {
           int x=a+b;
           std::cout<<"\nSum is="<<x;
        }
};
int main()
{
    sum a;
    int p,q;
    std::cout<<"Enter two numbers:";
    std::cin>>p>>q;
    a.set_data(p,q);
    a.display();
    a.add();
    return 0;
}

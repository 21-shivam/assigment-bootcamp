#include<conio.h>
#include<iostream.h>
using namespace std;
class book
{
private:
    int x;
    float y;
public:
    void display();
    void set_data(int a,int b)
    {
        x=a;
        y=b;
    }
};
void book::display()
{
    cout<<"Value of X is="<<x<<endl<<"Value of Y is="<<y;
}
int main()
{
    book p;
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    p.set_data(a,b);
    p.display();
    return 0;

}

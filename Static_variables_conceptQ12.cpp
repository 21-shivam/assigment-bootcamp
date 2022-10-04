/* Problem in */
#include<conio.h>
#include<iostream.h>
using namespace std;
class book
{
private:
    int x;
   static float y;
public:
    void display();
    void set_data(int a)
    {
        x=a;
    }
    static void com(float c)
    {
        y=c;
        cout<<"Value of y is="<<y;
    }
};
/*void book::display()
{
    cout<<"Value of X is="<<x<<endl<<"Value of Y is="<<y;
}*/
int main()
{
    //book p;
    //int a,b;
   // cout<<"Enter a numbers:";
    //cin>>a;
    //p.set_data(a);
   book :: com (4.5f);
  //  p.display();
    return 0;

}


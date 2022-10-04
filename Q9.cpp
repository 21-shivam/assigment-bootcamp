#include<conio.h>
#include<iostream.h>
using namespace std;
struct book
{
    private:
    int bookid;
    char title[20];
    float price;
    public:
        void set_data()
        {
            cout<<"Enter bookid title and price:";
            cin>>bookid>>title>>price;
        }
        void display()
        {
            cout<<bookid<<" "<<title<<" "<<price;
        }

};
int main()
{
    book b1;
    b1.set_data();
    b1.display();
    return 0;
}

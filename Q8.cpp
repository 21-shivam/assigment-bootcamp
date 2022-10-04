#include<conio.h>
#include<iostream.h>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
};
void display(book);
book set_data();
book set_data()
{
    book b1;
    cout<<"Enter  bookid title and price:";
    cin>>b1.bookid>>b1.title>>b1.price;
    return(b1);
}
void display(book b)
{
    cout<<"\n"<<b.bookid<<" "<<b.title<<" "<<b.price;
}
int main()
{
    book b;
    b=set_data();
    display(b);
    return 0;
}

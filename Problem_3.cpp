#include <iostream>
using namespace std;
class Lumious
{
public:
    int no_of_sold_ticket,remainingTicket = 9,cell_no,percent,Seller_Commission,no_of_ticket_asked;
    string name;
    double ticketPrice;
    int Luminous(int a, long int b)
    {remainingTicket = a;
    no_of_sold_ticket = b;}
    int Luminous(char naam[], long int c )
    {
        name = naam;
        cell_no = c;

        ticketInfo();
    }
    int concession(int c)
    {
        no_of_ticket_asked = c;
        if ( no_of_ticket_asked==1 )
        {
            int percent=0;
            knowPrice(percent);
        }
        else if ( no_of_ticket_asked>1 || no_of_ticket_asked<4)
        {
            int percent=15;

            knowPrice(percent);
        }
        if ( no_of_ticket_asked>3 )
        {
            int percent=30;

            knowPrice(percent);
        }
    }
    int knowCommission(int k)
    {

        if(no_of_sold_ticket>5)
        {
            Seller_Commission = 20;
        }
        else{
            Seller_Commission = 15;
        }
    }
    int knowPrice(int k)
    {
        ticketPrice=(percent/100);
        cout <<ticketPrice;
        confirmation();
    }
    int Availability(int a )
    {
        if (a>remainingTicket)
        {
            cout<<"Not enough tickets\n";
            Choose();

        }
        else
        {
            concession(a);
           return 0;
        }
    }
    int ticketInfo()
    {
        cout<<"\nName: "<<name<<endl;
        cout<<"\nContact no.: "<<cell_no<<endl;
    }
    void Choose()
    {
        int c;
        cout<<"Enter amount of tickets you want: ";
        cin>> c;
        Availability(c);
    }
    void confirmation()
    {
        int c,p;
        string n;
        cout<<endl<<"Confirm Buying"<<endl<<"Enter 1 to buy or 0 to cancel: ";
        cin>>c;
        if (c==1)
        {
            cout<<"Enter your Name: ";
            cin>> n;
            cout<<endl<<"Enter Phone number: ";
            cin>>p;
            char s[n.length()];
            for (int i = 0; i < sizeof(s); i++)
            {
            s[i] = n[i];
            cout << s[i];
            }
            Luminous(s,p);
        }
    }

};
class Seller : public Lumious
{
int ticketsSold,no_of_tickets_toBuy;
    Seller(char customerName[], long int mobile_no, int howManyTicketsToBuy){}
    int yourTicket(){}
int Earning(){}
};
int main()
{
    Lumious q;
    q.Choose();
    return 0;
}


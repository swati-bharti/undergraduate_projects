#include <iostream>
using namespace std;
class grocery
{
public:
  int total1;
  grocery()
  {
    total1 = 0;
  }
  void display()
  {
    int j = 0, k = 0, r, m;
    cout << "Please place your order \n";
    cout << "1.rice\t\t100 \n";
    cout << "2.flour\t\t150 \n";
    cout << "3.oil\t\t300 \n";
    cout << "4.pulses\t85 \n";
    cout << "5.salt\t\t30 \n";
    cout << "Press 0 after completion\n";
    for (j = 0; j >= 0; j++)
    {
      cout << "please choose from the list:\n";
      cin >> r;
      if (r == 0)
        break;
      cout << "enter the quantity\n";
      cin >> m;
      switch (r)
      {
      case 1:
        total1 = total1 + (100 * m);
        break;
      case 2:
        total1 = total1 + (150 * m);
        break;
      case 3:
        total1 = total1 + (300 * m);
        break;
      case 4:
        total1 = total1 + (85 * m);
        break;
      case 5:
        total1 = total1 + (30 * m);
        break;
      default:
        break;
      }
    }
  }
};
class bev
{
public:
  int total2;
  bev()
  {
    total2 = 0;
  }
  void display()
  {
    int j = 0, k = 0, r, m;
    cout << "Please place your order\n";
    cout << "1.tea\t\t50 \n";
    cout << "2.coffee\t60 \n";
    cout << "3.green tea\t120 \n";
    cout << "4.milk\t\t40 \n";
    cout << "Press 0 after completion\n";
    for (j = 0; j >= 0; j++)
    {
      cout << "please choose from the list:\n";
      cin >> r;
      if (r == 0)
        break;
      cout << "enter the quantity\n";
      cin >> m;
      switch (r)
      {
      case 1:
        total2 = total2 + (m * 50);
        break;
      case 2:
        total2 = total2 + (m * 60);
        break;
      case 3:
        total2 = total2 + (m * 120);
        break;

      case 4:
        total2 = total2 + (m * 40);
        break;
      }
    }
  }
};
class snacks
{
public:
  int total3;
  snacks()
  {
    total3 = 0;
  }
  void display()
  {
    int j = 0, k = 0, r, m;
    cout << "Please place your order\n";
    cout << "1.chips\t\t50 \n";
    cout << "2.biscuits\t35 \n";
    cout << "3.chocolate\t70 \n";
    cout << "4.noodles\t55 \n";
    cout << "Press 0 after completion \n";
    for (j = 0; j >= 0; j++)
    {
      cout << "choose from the list:\n";
      cin >> r;
      if (r == 0)
        break;
      cout << "enter the quantity\n";
      cin >> m;
      switch (r)
      {
      case 1:
        total3 = total3 + (m * 50);
        break;
      case 2:
        total3 = total3 + (m * 35);
        break;
      case 3:
        total3 = total3 + (m * 70);
        break;
      case 4:
        total3 = total3 + (m * 55);
        break;
      }
    }
  }
};
class person
{
public:
  int total4;
  person()
  {
    total4 = 0;
  }
  void display()
  {
    int j = 0, k = 0, r, m;
    cout << "Please place your order\n";
    cout << "1.shampoo\t200 \n";
    cout << "2.conditioner\t150 \n";
    cout << "3.face wash\t75 \n";
    cout << "4.soap\t\t25 \n";
    cout << "Press 0 after completion\n";
    for (j = 0; j >= 0; j++)
    {
      cout << "please choose from the list:\n";
      cin >> r;
      if (r == 0)
        break;
      cout << "enter the quantity\n";
      cin >> m;
      switch (r)
      {
      case 1:
        total4 = total4 + (200 * m);
        break;
      case 2:
        total4 = total4 + (150 * m);
        break;
      case 3:
        total4 = total4 + (75 * m);
        break;
      case 4:
        total4 = total4 + (25 * m);
        break;
      }
    }
  }
};
class calculation : public grocery, public bev, public snacks, public person
{
public:
  void calc()
  {
    int t1;
    char q1;
    int i, j = 0, g = 1, t, q, u, r;
    string c;
    string s;
    int rpt = 1;
    cout << "***************WELCOME**************************\n";
    cout << "1.LOGIN\t2.NEW USER\n";
    cin >> u;
    if (u == 1)
    {
      cout << "please enter your phone no.\n";
      cin >> c;
    }
    else
    {
      cout << "please enter your name\n";
      getline(cin, s);
      getline(cin, s);
      cout << "enter your phone no.\n";
      cin >> s;
      cout << "thank you for signing in\n";
    }
    while (rpt != 0)
    {
      cout << "*****************categories*******************\n";
      cout << " 1.GROCERY AND STAPLE\n";
      cout << " 2.BEVERAGES\n";
      cout << " 3.SNACKS\n";
      cout << " 4.PERSONAL CARE\n";
      cout << "enter your choice\n";
      cin >> g;

      switch (g)
      {
      case 1:
        cout << "grocery and staple:\n";
        grocery::display();
        break;
      case 2:
        cout << "beverages:\n";
        bev::display();
        break;
      case 3:
        cout << "snacks:\n";
        snacks::display();
        break;
      case 4:
        cout << "personal care:\n";
        person::display();
        break;
      }
      cout << "to continue press non-zero no.\n";
      cin >> rpt;
    }
    t1 = total1 + total2 + total3 + total4;
    cout << "total= " << t1 << endl;
    if (t1 >= 1000)
    {
      cout << "discount availed" << endl;
      t1 = t1 - ((t1 * 5) / 100);
      cout << "\nsubtotal=" << t1;
    }
    g = payment();
    cout << "enter the address\n";
    string add;
    getline(cin, add);
    getline(cin, add);
    cout << "\n\nORDER SUMMARY:\n";
    cout << "MODE OF PAYMENT: ";
    if (g == 1)
      cout << "CASH ON DELIVERY";
    else

      cout << "CARD ON DELIVERY";
    cout << "\nTOTAL BILL: " << t1 << endl;
    cout << "ADDRESS: ";
    cout << add << endl;
    cout << "\npress y/Y to confirm\n";
    cin >> q1;
    if (q1 == 'Y' || q1 == 'y')
      cout << "order placed\n";
    else
    {
      cout << "no order placed\n";
    }
    return;
  }
  int payment()
  {
    int s;
    cout << "\nPLEASE CHOOSE MODE OF PAYMENT\n";
    cout << "1.Cash On Delivery\n2.Card On Delivery\n";
    cin >> s;
    return s;
  }
};
int main()
{
  calculation c1;
  c1.calc();
}


#include <iostream>
#include <algorithm>
using namespace std;
class student
{
public:
     char student_name[30];
     int sch_id;
     char hostel_type;
     char hostel_name[20];
     int room_no;
     char branch_name[20];

public:
     void student_details()
     {
          cout << "------------------------------------------------------------------ \n";
          cout << "Student's name : \n";
          cin >> student_name;
          cout << "Branch name :\n";
          cin >> branch_name;
          cout << "Scholar Id :\n";
          cin >> sch_id;
          cout << endl;
          cout << "------------------------------------------------------------------";
     }

public:
     void add_Hostel()
     {
          cout << "Hostel Type: ";
          cout << "G for girls UG\n";
          cout << "B for boys UG\n";
          cout << "P for PHD \n";
          cin >> hostel_type;
          switch (hostel_type)
          {
          case 'G':
               cout << "Available Hostels are:";
               cout << "GH1  GH2  GH3";
               break;
          case 'B':
               cout << "Available Hostels are:";
               cout << "BH1  BH2  BH3 BH4  BH5  BH6  BH7  BH8";
               break;
          case 'P':
               cout << "Available Hostels are:";
               cout << "PG1  PG2  PG3";
               break;
          default:
               cout << "invalid \n";
          }
          cout << "Hostel Name:";
          cin >> hostel_name;

          cout << endl;
     }

public:
     void edit_Hostel_details()
     {
          int n;
          cout << "What you want to edit?\n";
          cout << "1. Hostel Name\n2. Hostel Type\n 3.Both Hostel Name and Type";
          cout << "Enter your choice: \n";

          cin >> n;
          switch (n)
          {
          case 1:
               cout << "Enter new Hostel name: ";
               cin >> hostel_name;
               break;
          case 2:
               cout << "Enter new Hostel type: ";
               cin >> hostel_type;
               break;
          case 3:
               cout << "Enter new hostel type: ";
               cin >> hostel_type;
               switch (hostel_type)
               {
               case 'G':
                    cout << "Available Hostels are:";
                    cout << "GH1  GH2  GH3";
                    break;
               case 'B':
                    cout << "Available Hostels are:";
                    cout << "BH1  BH2  BH3 BH4  BH5  BH6  BH7  BH8";
                    break;
               case 'P':
                    cout << "Available Hostels are:";
                    cout << "PG1  PG2  PG3";
                    break;
               default:
                    cout << "invalid";
               }
               break;
               cout << "Hostel Name:";
               cin >> hostel_name;

          default:
               cout << "invalid input!! ";
               break;
          }
     }
};
class mess_menu : public student
{
public:
     void print_menu()

     {
          int ch;
          cout << "Monday"
               << "::"
               << " "
               << "Breakfast:- Burger && Eggs/milk"
               << " "
               << "Lunch:- Pulaw"
               << " "
               << "Dinner:-Chicken/Paneer" << endl
               << endl;
          cout << "Tuesday"
               << "::"
               << " "
               << "Breakfast:-Puri-Sabji "
               << " "
               << "Lunch:- Rice-dal"
               << " "
               << "Dinner:-Chicken/Paneer" << endl
               << endl;
          cout << "Wednesday"
               << "::"
               << " "
               << "Breakfast:- Bhature"
               << " "
               << "Lunch:- Rice-dal-curd"
               << " "
               << "Dinner:-Chicken/Paneer" << endl
               << endl;
          cout << "Thrusday"
               << "::"
               << " "
               << "Breakfast:- Dosa"
               << " "
               << "Lunch:- Rice-dal"
               << " "
               << "Dinner:-Chicken/Paneer" << endl
               << endl;
          cout << "Friday"
               << "::"
               << " "
               << "Breakfast:- Bread"
               << " "
               << "Lunch:- Rice-chhole"
               << " "
               << "Dinner:-Chicken/Paneer" << endl
               << endl;
          cout << "Saturday"
               << "::"
               << " "
               << "Breakfast:- Bread"
               << " "
               << "Lunch:- kitchari"
               << " "
               << "Dinner:-Fish/Paneer" << endl
               << endl;
          cout << "Sunday"
               << "::"
               << " "
               << "Breakfast:- Bread"
               << " "
               << "Lunch:- Rice-dal-curd"
               << " "
               << "Dinner:-Chicken/Paneer/Frooti" << endl
               << endl;
     }

public:
     void edit_menu()
     {
          int ch, c;
          char st[20];
          cout << "Enter the day's menu you want to change ->\n 1.MONDAY  2.TUESDAY 3.WEDNESDAY 4.THURSDAY 5.FRIDAY 6.SATURDAY 7.SUNDAY \n";
          cin >> ch;
          cout << "Enter 1->Change Breakfast \n Enter 2->Change Lunch \n 3->Change Dinner\n";
          cin >> c;
          cout << "Write new item\n";
          cin >> st;
     }
};

class cateringService : public student
{
     char cat_name[10][20];
     int phone_number[4];
     char incharge_name[20];
     int incharge_number;
     int n, j = 4;

public:
     void print_incharge()
     {
          cout << "Caterrar's name - Phone number";
          cout << "Ranjan Pakwan : 877878878 \n Jahnab Jaika-88787090\nMarget FS-87079989}";
     }
     void add_incharge()
     {
          cout << "Add new incharge Name:";
          cin >> incharge_name;

          cout << "Add new incharge Number:";
          cin >> incharge_number;
     }
};
class HMC : public student
{
     char Warden_name[10];
     char Supervisor_name[10];
     char Prefect_name[10];
     char MessSecretary_name[10];
     int n;

public:
     void names()
     {
          cout << "Warden Name:";
          cin >> Warden_name;
          cout << "Supervisor Name:";
          cin >> Supervisor_name;
          cout << "Prefect Name:";
          cin >> Prefect_name;
          cout << "MessSecretary Name:";
          cin >> MessSecretary_name;
          cout << endl;
     }
     void edit_HMC_details()
     {
          cout << "What you want to edit?\n";
          cout << "1. Warden Name\n2. Supervisor Name\n3. Prefect Name\n4. Mess Secretary Name\n";
          cout << "Enter your choice: ";

          cin >> n;
          switch (n)
          {
          case 1:
               cout << "Enter new Warden's name: ";
               cin >> Warden_name;
               break;
          case 2:
               cout << "Enter new Supervisor's name: ";
               cin >> Supervisor_name;
               break;
          case 3:
               cout << "Enter new Prefect's name: ";
               cin >> Prefect_name;
               break;
          case 4:
               cout << "Enter new Mess Secretary's name: ";
               cin >> MessSecretary_name;
               break;
          default:
               cout << "invalid input!! ";
               break;
          }
     }
};
class finances : public student
{
public:
     int sem, sch, amt, late, days;
     char name[100];
     string date;
     void registration()
     {
          cout << "\n---Form for student registration---\n";
          cout << "\nName: ";
          cin >> name;
          cout << "\nSemister Number: ";
          cin >> sem;
          cout << "\nScholar ID: ";
          cin >> sch;
          cout << "\nRoom Number ";
          cin >> room_no;
          cout << "\nAmount Deposited: ";
          cin >> amt;
          cout << "\nPayment Date: ";
          cin >> date;
          cout << "\nLate fine per day: ";
          cin >> late;
          cout << "\nTotal days late: ";
          cin >> days;
          cout << "\n\nTotal amount deposited: " << amt + (late * days) << endl;
     }
     void view_regdetails()
     {
          cout << "\nStudent Details\n";
          cout << "\nName: " << name << endl;
          cout << "\nSemister Number: " << sem << endl;
          cout << "\nScholar ID: " << sch << endl;
          cout << "\nAmount Deposited: " << amt << endl;
          cout << "\nPayment Date: " << date << endl;
          cout << "\nLate fine : " << late << endl;
          cout << "\n\nTotal amount deposited: " << amt + late << endl;
     }
};
class MMC : public cateringService
{
public:
     string messMember[5];
     void messMembers()
     {
          cout << "Assign the Mess Member's name";
          for (int i = 0; i < 5; i++)
          {
               if (i == 0)
               {
                    cout << "Add the" << i + 1 << "st member: ";
                    cin >> messMember[i];
               }
               if (i == 1)
               {
                    cout << "Add the" << i + 1 << "nd member: ";
                    cin >> messMember[i];
               }
               if (i == 2)
               {
                    cout << "Add the" << i + 1 << "rd member: ";
                    cin >> messMember[i];
               }
               if (i > 3)
               {
                    cout << "Add the" << i + 1 << "th member: ";
                    cin >> messMember[i];
               }
          }
     }
     void edit_messMember()
     {
          for (int i = 0; i < 5; i++)
          {
               cout << "Which Mess Member you want to edit?\n";
               cout << "Enter your choice: ";
               int n;
               cin >> n;
               if (n == 1)
               {
                    cout << "Who is the new member";
                    string str;
                    cin >> str;
                    messMember[n - 1] = str;
               }
               if (n == 2)
               {
                    cout << "Who is the new member";
                    string str;
                    cin >> str;
                    messMember[n - 1] = str;
               }
               if (n == 3)
               {
                    cout << "Who is the new member";
                    string str;
                    cin >> str;
                    messMember[n - 1] = str;
               }
               if (n == 4)
               {
                    cout << "Who is the new member";
                    string str;
                    cin >> str;
                    messMember[n - 1] = str;
               }
               if (n == 5)
               {
                    cout << "Who is the new member";
                    string str;
                    cin >> str;
                    messMember[n - 1] = str;
               }
               else
               {
                    cout << "invalid input!! ";
                    break;
               }
          }
     }
};
int main()
{
     int i = 1, d;
     student obj;
     mess_menu m;
     cateringService c;
     MMC mmc;
     HMC hmc;
     finances f;

     obj.student_details();
     while (i == 1)
     {
          cout << "------------------------------------------------------------------ \n";
          cout << "HOW CAN WE HELP YOU?\n";
          cout << "------------------------------------------------------------------\n";
          cout << "1. View events only\n2.V Edit events Details \n 3.View funds  \n 4. Edit funds  \n 5.View incharge details\n 6. Add incharge details \n 7.commitee member names \n 8.edit commitee member details\n 9.Registration details\n10.view task and functions \n 11.add task or functions\n;
          cout << "------------------------------------------------------------------\n";
          cout << "Enter your choice: ";
          ;
          int n;
          cin >> n;
          switch (n)
          {
          case 1:
               obj.add_Hostel();
               break;
          case 2:
               obj.edit_Hostel_details();
               break;
          case 3:
               m.print_menu();
               break;
          case 4:
               m.edit_menu();
               break;
          case 5:
               c.print_incharge();
               break;
          case 6:
               c.add_incharge();
               break;
          case 7:
               hmc.names();
               break;
          case 8:
               hmc.edit_HMC_details();
               break;
          case 9:
               f.registration();
               break;
          case 10:
               f.view_regdetails();
               break;
          case 11:
               mmc.messMembers();
               break;
          case 12:
               mmc.edit_messMember();
               break;
          default:
               cout << "invaild";
          }
          cout << "Press 1 to continue\n";
          cin >> d;
          i = d;
     }
     return 0;
}
     
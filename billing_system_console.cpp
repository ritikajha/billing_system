#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<fstream>
#include<windows.h>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<iomanip>
#include <algorithm>

using namespace std;
//to move cursor anywhere
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

//classes

	class customer
	{
		char mobile[10];
		char name[50];
		int came;
		public:
			
			void set_customer()
			{
				this->came=(this->came)+1;
			}
			char * retm()
			{
				return this->mobile;
			}
			char * retname()
			{
				return this->name;
			}
			customer * retcus()
			{
				return this;
			}
			void show_customer()
			{
				cout<<endl<<"Name: "<<this->name<<"Mobile Number: "<<this->mobile;
			}
			
	};
	
	
    class product 
    {
        int pno;
        char name[50];
        float price, qty, tax, dis,cp;
        public:
            void create_product() 
            {
                cout <<"\n\n\tPlease Enter The Product No. of The Product: ";
                cin >> pno;
                cout << "\n\tPlease Enter The Name of The Product: ";
                cin>>name;
                cout << "\n\tPlease Enter The selling Price of The Product: ";
                cin >> price;
                cout << "\n\tPlease Enter The Discount (in %): ";
                cin >> dis;
                cout << "\n\tPlease Enter The cost Price of The Product: ";
                cin >> cp;
                cout << "\n\tPlease Enter The quantity: ";
                cin >> qty;
            }
            void create_product_parametrized(int pn,char *n,float p,float q,float d,float c)
            {
            	this->pno=pn;
            	strcpy(this->name,n);
            	this->price=p;
            	this->qty=q;
            	this->dis=d;
            	this->cp=c;
			}

        void show_product() 
        {
            cout << "\n\tThe Product No. of The Product: " << pno;
            cout << "\n\tThe Name of The Product: ";
            puts(name);
            cout << "\tThe Price of The Product: " << price;
            cout << "\n\tDiscount: " << dis<<"%";
            cout<<"\n\tCost Price: "<<cp;
            cout<<"\n\tAvailable: "<<qty;
            cout<<"\n";
        }

        int retpno() 
        {
            return pno;
        }

        float retprice() 
        {
            return price;
        }

        char * retname() 
        {
            return name;
        }

        float retdis() 
        {
            return dis;
        }
        
        float retcp()
        {
        	return cp;	
		}
		float retqty()
		{
			return qty;
		}
		void sold(int x)
		{
			if(x<=(this->qty))
			{
				this->qty=(this->qty)-x;	
			}
			else
			{	int t=this->qty;
				this->qty=0;
				throw t;
			}
		}

    }; 
	
	//class ends here
	
	//bill class
	class bill{
		static int count;
		int bno;
		float total_cp;
		float total_amount;
		float gain;
		public:
			void create_bill(float c,float a)
			{	
				this->bno=count;
				this->total_cp = c;
				this->total_amount = a;
				this->gain = (a-c);
				count++;
			}
			int retbn()
			{
				return bno;
			}
			float rettotal_cp()
			{
				return total_cp;
			}
			float rettotal_amount()
			{
				return total_amount;
			}
			float retgain()
			{
				return gain;
			}
		
	};
	int bill::count=1;	
//bill class ends here


//global declaration of fstream object
ofstream fbill;
fstream fp;
fstream fb;
fstream fm;
product pr;
bill b;


// function to write in file
void bill_details() 
{
    //clrscr();
    //reading bill and then showing buisness details
    fb.open("bill.dat", ios:: in );
    if (!fb) 
    {
        cout << "\n\n\n\t\tERROR!!! FILE COULD NOT BE OPEN\n\n\n NO BILL PRESENT ";
        cout << "\n\n Program is closing ....";
        getch();
        exit(0);
    }

    cout << "\n\n\n\t\tBILL DETAILS\n\n";
    cout << "\t======================================================\n";
    
    cout << "\t"<<" "<<"Total CostPrice\tTotal Amount \t\tGAIN\n";
    cout << "\t=======================================================\n";
	float incoming,outgoing,profit=0;
    while (fb.read((char * ) & b, sizeof(bill))) 
    {
        cout <<  "\t\t" << b.rettotal_cp() << "\t\t" <<"  "<< b.rettotal_amount()<< "\t\t\t"<<b.retgain()<<"\t\t\t"<< endl;
        incoming=incoming+(b.rettotal_amount());
        outgoing=outgoing+(b.rettotal_cp());
        profit=profit+(b.retgain());
    }
    cout<<"\n";
    cout<<"\t\tTOTAL OUTGOING AMOUNT: "<<outgoing<<endl;
    cout<<"\t\tTOTAL INCOMING: "<<incoming<<endl;
    cout<<"\t\tTOTAL PROFIT MADE: "<<profit<<endl;
    fb.close();
}

//writing bill
void write_bill(float c,float a)
{
	fb.open("bill.dat",ios::out|ios::app);
	b.create_bill(c,a);
	fb.write((char * ) & b, sizeof(bill));
	fb.close();
	cout<<"\n\tBILL STORED AND A TXT FILE FOR BILL HAS BEEN GENERATED";
}

//writing product
void write_product() 
{	
	cout<<"\n\n\n\t\tPRODUCT CREATION";
    fp.open("Shop.dat", ios::out | ios::app);
    pr.create_product();
    fp.write((char * ) & pr, sizeof(product));
    fp.close();
    cout << "\n\t\tPRODUCT CREATED";
    getch();
}

//displaying all records
void display_all() 
{
    //clrscr();
    cout << "\n\n\n\t\tDISPLAY ALL RECORD\n\n";
    fp.open("Shop.dat", ios:: in );
    while (fp.read((char * ) & pr, sizeof(product))) 
    {
         cout << "\n\t====================================\n";
		 pr.show_product();
        getch();
    }
    cout << "\n\t====================================\n";
    fp.close();
    getch();
}

//function to display product 
void display_sp(int n) 
{
    int flag = 0;
    fp.open("Shop.dat", ios:: in );
    while (fp.read((char * ) & pr, sizeof(product))) 
    {
        if (pr.retpno() == n) 
        {
           // clrscr();
            pr.show_product();
            flag = 1;
        }
    }
    fp.close();
    if (flag == 0)
        cout << "\n\tWrong Product ID Provided";
    //getch();
}

//function to modify shop file with parameters
void modify_product_parametrized(int pno,char n[50],float p,int q,float d,float c)
{
	int found=0;
	fm.open("shop.dat",ios::in|ios::out);
	while(fm.read((char * ) & pr, sizeof(product)) && found == 0)
	{
		if (pr.retpno() == pno) 
        {
            
            pr.create_product_parametrized(pno,n,p,q,d,c);
            int pos = -1 * sizeof(pr);
            fm.seekp(pos, ios::cur);
            fm.write((char * ) & pr, sizeof(product));
            //cout << "\n\n\t Record Updated";
            found = 1;
        }
	}
	fm.close();
    //if (found == 0)
        //cout << "\n\n Record Not Found ";
    //getch();
};

//function to modify shop file without parameters
void modify_product() 
{
    int no, found = 0;
    //clrscr();
    cout << "\n\n\n\t\tTO MODIFY ";
    cout << "\n\n\tPlease Enter The Product No. of The Product to be modified: ";
    cin >> no;
    fp.open("Shop.dat", ios:: in | ios::out);
    //making new temporary shop with modification and then saving it as shop,deleting the previous one
    while (fp.read((char * ) & pr, sizeof(product)) && found == 0) 
    {
        if (pr.retpno() == no) 
        {
            pr.show_product();
            cout << "\n\tPlease Enter The New Details of Product" << endl;
            pr.create_product();
            int pos = -1 * sizeof(pr);
            fp.seekp(pos, ios::cur);
            fp.write((char * ) & pr, sizeof(product));
            cout << "\n\n\t\t PRODUCT UPDATED";
            found = 1;
        }
    }
    fp.close();
    if (found == 0)
        cout << "\n\t\tNo Such Product Found ";
    getch();
}

//deleting product from shop file
void delete_product() 
{
    int no;
    //clrscr();
    cout << "\n\n\n\t\tPRODUCT DELETION";
    cout << "\n\nPlease Enter The product no. of The Product You Want To Delete: ";
    cin >> no;
    fp.open("Shop.dat", ios:: in | ios::out);
    fstream fp2;
    fp2.open("Temp.dat", ios::out);
    fp.seekg(0, ios::beg);
    while (fp.read((char * ) & pr, sizeof(product))) 
    {
        if (pr.retpno() != no) 
        {
            fp2.write((char * ) & pr, sizeof(product));
        }
    }
    fp2.close();
    fp.close();
    remove("Shop.dat");
    rename("Temp.dat", "Shop.dat");
    cout << "\n\t\tPRODUCT DELETED";
    getch();
}

//to display menu
void menu() 
{
    //clrscr();
    fp.open("Shop.dat", ios:: in );
    if (!fp) 
    {
        cout << "ERROR!!! FILE COULD NOT BE OPEN\n\n\n Go To Admin Menu to create  File ";
        cout << "\n\n\n Program is closing ....";
        getch();
        exit(0);
    }

    cout << "\n\n\n\t\tPRODUCT MENU\n\n";
    cout << "=======================================================================================================================\n";
    cout << "P.NO.\t\tNAME\t\t\tPRICE\t\tQUANTITY\t\tCostPrice\t\tDiscount\n";
    cout << "=======================================================================================================================\n";
	//reading in product form from file and then displaying
    while (fp.read((char * ) & pr, sizeof(product))) 
    {
        cout << pr.retpno() << "\t\t" ;
        cout.setf(ios::left,ios::adjustfield);
        cout.width(15);
		cout<< pr.retname() ;
		cout<< "\t\t" << pr.retprice()<< "\t\t"<<pr.retqty()<<"\t\t\t"<<pr.retcp()<< "\t\t\t"<<pr.retdis() <<"\t\t" << endl;
    }
    fp.close();
}

//to display all objects with details,place order and generate bill in txt format
void place_order() 
{
    int order_arr[50], quan[50], c = 0;
    float amt, damt, total ,saving,diff= 0;
    float total_cp=0;
    float cprice=0;
    char ch = 'Y';
    menu();
    string name;
    char m[10];
    fbill.open("bill.txt");
    cout<<"\n\tEnter name :";
    cin>>name;
    cout<<"\tEnter number: ";
    cin>>m;
    fbill<<"\n\t\t\t\t\t=====================";
    fbill<<"\n\t\t\t\t\tSUPERMARKET BILLING ";
    fbill<<"\n\t\t\t\t\t=====================";
    cout << "\n\t==========================================================";
    cout << "\n\t\t\t PLACE YOUR ORDER";
    cout << "\n\t===========================================================\n";
    cout<<"\n\t NAME: "<<name<<"\t\t MOBILE: "<<m<<"\n";
    fbill<<"\n\n\n\t\t\t\t NAME: "<<name<<"\t\t MOBILE: "<<m<<"\n";
    
    do 
    {
        cout << "\n\tEnter The Product No. Of The Product : ";
        cin >> order_arr[c];
        cout << "\tQuantity in number : ";
        cin >> quan[c];
        c++;
        cout << "\n\t\tDo You Want To Order Another Product ? (y/n)";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    cout << "\n\n\tThank You For Placing The Order";
    getch();
    //clrscr();
    cout << "\n\n\t****************************************** INVOICE ****************************************************\n";
    fbill<<"\n\n\t******************************************INVOICE-GENERATED **********************************************************\n";
    cout<<"\n\t---------------------------------------------------------------------------------------------------------";
    fbill<<"\n\t---------------------------------------------------------------------------------------------------------------------------------------------------------------------";
    cout << "\n\tPr No.\t\tProductName\t"<<"  "<<"Quantity \tPrice \tAmount \t Discount%\tAmount after discount\ n ";
    fbill<<"\n\tPr No.\t\tProductName\t"<<"  "<<"Quantity \tPrice \tAmount \t Discount%\tAmount after discount\ n ";
    cout<<"\n\t---------------------------------------------------------------------------------------------------------";
    fbill<<"\n\t----------------------------------------------------------------------------------------------------------------------------------------------------------------------";
    for (int x = 0; x <= c; x++) //this for loop works  to check for quantity and modify the shop with changes
    {	//cout<<"inforloop"<<endl;
        fp.open("Shop.dat", ios:: in );
        fp.read((char * ) & pr, sizeof(product));
        while (!fp.eof()) 
        {
            if (pr.retpno() == order_arr[x]) 
            {	
				if (quan[x]>pr.retqty())
				{
					quan[x]=pr.retqty();
					modify_product_parametrized(pr.retpno(),pr.retname(),pr.retprice(),0,pr.retdis(),pr.retcp());
				}
				else
				{	
					int remaining=( pr.retqty() - quan[x]);
					modify_product_parametrized(pr.retpno(),pr.retname(),pr.retprice(),remaining,pr.retdis(),pr.retcp());
				};

            }
            fp.read((char * ) & pr, sizeof(product));
        }

        fp.close();
        
    }
    for (int x = 0; x <= c; x++) //this makes the bill
    {	//cout<<"inforloop"<<endl;
        fp.open("Shop.dat", ios:: in );
        fp.read((char * ) & pr, sizeof(product));
        while (!fp.eof()) 
        {
            if (pr.retpno() == order_arr[x]) 
            {	
            	cprice = pr.retcp() * quan[x];
                amt = pr.retprice() * quan[x];
                damt = amt - (amt * pr.retdis() / 100);
                cout << "\n\t" << order_arr[x] << "\t\t" ;
                fbill<<"\n\t" << order_arr[x] << "\t\t" ;
                cout.width(15);
                fbill.width(15);
				cout<< pr.retname() << "\t" <<"  "<< quan[x] << "\t\t" << pr.retprice() << "\t" << amt << "\t\t" <<pr.retdis()<<"%"<<"\t"<< damt;
				fbill<<pr.retname() << "\t" <<"  "<< quan[x] << "\t\t" << pr.retprice() << "\t" << amt << "\t\t" <<pr.retdis()<<"%"<<"\t"<< damt;
				diff=amt-damt;
                total += damt;
                total_cp+=cprice;
                saving=saving+diff;
                //cout<<"done"<<endl;
            }
            fp.read((char * ) & pr, sizeof(product));
        }

        fp.close();
    }
    cout << "\n\n\t\t\t\t\tTOTAL = " << total<<" Rupees";
    fbill<<"\n\n\t\t\t\t\tTOTAL = " << total<<" Rupees";
    fbill << "\n\n\n\t\t\t\tThank You For Placing The Order and you saved "<<saving<<" Rupees !!!";
    fbill<<"\n\n\t\t\t\t\t\tVISIT AGAIN :)";
    getch();
    write_bill(total_cp,total);
	fbill.close();
}

//function for introduction
void intro() 
{
    //clrscr();
    gotoxy(11,1);
    cout << "\t******************************************************";
    gotoxy(23,2);
    cout << "SUPER MARKET";
    gotoxy(39, 2);
    cout << "BILLING";
    gotoxy(49,2);
    cout << "PROJECT";
    gotoxy(11,3);
    cout << "\t******************************************************";
   
    cout << "\n\n\tMADE BY : Ritika Jha and Rohan Kumar";
    cout << "\tGUIDED BY : Prof. Mukesh Kumar Giluka";

    getch();

}

//administrator function
void admin_menu() 
{
   // clrscr();
    char ch2;
    cout << "\n\n\t======================================================";
    cout << "\n\tADMIN MENU";
    cout << "\n\t======================================================";
    cout << "\n\n\t1.CREATE PRODUCT";
    cout << "\n\n\t2.DISPLAY ALL PRODUCTS";
    cout << "\n\n\t3.QUERY ";
    cout << "\n\n\t4.MODIFY PRODUCT";
    cout << "\n\n\t5.DELETE PRODUCT";
    cout << "\n\n\t6.VIEW PRODUCT MENU";
    cout << "\n\n\t7.BACK TO MAIN MENU";
    cout << "\n\n\tPlease Enter Your Choice (1-7) ";
    ch2 = getche();
    switch (ch2) 
    {
    case '1':
        //clrscr();
        write_product();
        break;
    case '2':
        display_all();
        break;
    case '3':
        int num;
        //clrscr();
        cout<<"\n\n\n\t\tQUERY";
        cout << "\n\n\tPlease Enter The Product No. ";
        cin >> num;
        display_sp(num);
        cout<<"\n\t\tQUERY FETCHED";
        getch();
        break;
    case '4':
        modify_product();
        break;
    case '5':
        delete_product();
        break;
    case '6':
        menu();
        getch();
    case '7':
        break;
    default:
        cout << "\a";
        admin_menu();
    }
}

//main function
int main() 
{
    char ch;
    intro();
    do 
    {
        //clrscr();
        cout << "\n\n\t======================================================";
        cout << "\n\tMAIN MENU";
        cout << "\n\t======================================================";
        cout << "\n\n\t01. SELL";
        cout << "\n\n\t02. Management";
        cout << "\n\n\t03. Buisness details";
        cout << "\n\n\t04. EXIT";
        cout << "\n\n\tPlease Select Your Option ( 1 - 4 ) ";
        ch = getche();
        switch (ch) 
        {
        case '1':
            //clrscr();
            place_order();
            getch();
            break;
        case '2':
            admin_menu();
            break;
        case '3':
        	bill_details();
        	getch();
        	break;
        case '4':
            exit(0);
        default:
            cout << "\a";
        }
    } while (ch != '4');
}

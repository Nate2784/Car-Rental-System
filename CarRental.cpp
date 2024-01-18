#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <limits>
using namespace std;
int login();
string getName();


struct Cars {

    string company[200]= {"Maruti Suzuki","Volkswagun","BMW","Audi","KIA","Tesla","Mercedes"};
   }car;
   
struct CarInfo {
    string model;
    string color;
    string max_speed;
    int price;
    int date;
};

struct MarutiSuzuki {
    CarInfo cars[5] = {
        {"Swift", "Red", "180 km/h", 15000, 2022},
        {"Baleno", "Blue", "190 km/h", 17000, 2023},
        {"Dzire", "White", "185 km/h", 16000, 2021},
        {"Ciaz", "Black", "200 km/h", 25000, 2022},
        {"Ertiga", "Silver", "195 km/h", 19000, 2023}
    };
}MarutiSuzuki;

struct Volkswagun {
    CarInfo cars[5] = {
        {"Polo", "Red", "190 km/h", 20000, 2022},
        {"Vento", "Blue", "200 km/h", 40000, 2023},
        {"Tiguan", "White", "210 km/h", 12000, 2021},
        {"Passat", "Black", "220 km/h", 15000, 2022},
        {"Jetta", "Silver", "205 km/h", 10000, 2023}
    };
}Volkswagun;
struct BMW {
    CarInfo cars[5] = {
        {"3 Series", "Black", "210 km/h", 40000, 2022},
        {"5 Series", "White", "230 km/h", 60000, 2023},
        {"7 Series", "Blue", "250 km/h", 10000, 2021},
        {"X3", "Red", "220 km/h", 50000, 2022},
        {"X5", "Silver", "240 km/h", 70000, 2023}
    };
}BMW;
struct Audi {
    CarInfo cars[5] = {
        {"A3", "Black", "220 km/h", 30000, 2022},
        {"A4", "White", "230 km/h", 40000, 2023},
        {"A6", "Blue", "240 km/h", 50000, 2021},
        {"Q3", "Red", "210 km/h", 35000, 2022},
        {"Q5", "Silver", "220 km/h", 45000, 2023}
    };
}Audi;

struct KIA {
    CarInfo cars[5] = {
        {"Seltos", "Black", "180 km/h", 60000, 2022},
        {"Sonet", "White", "190 km/h", 31200, 2023},
        {"Carnival", "Blue", "200 km/h", 55000, 2021},
        {"Rio", "Red", "185 km/h", 33000, 2022},
        {"Sportage", "Silver", "195 km/h", 20000, 2023}
    };
}KIA;

struct Tesla {
    CarInfo cars[5] = {
        {"Model 3", "Black", "260 km/h", 25000, 2022},
        {"Model S", "White", "250 km/h", 28000, 2023},
        {"Model X", "Blue", "240 km/h", 50000, 2021},
        {"Model Y", "Red", "230 km/h", 26000, 2022},
        {"Cybertruck", "Silver", "210 km/h", 47000, 2023}
    };
}Tesla;

struct Mercedes {
    CarInfo cars[5] = {
        {"A-Class", "Black", "225 km/h", 23500, 2022},
        {"C-Class", "White", "240 km/h", 44000, 2023},
        {"E-Class", "Blue", "250 km/h", 35000, 2021},
        {"S-Class", "Red", "260 km/h", 60000, 2022},
        {"GLA", "Silver", "230 km/h", 64500, 2023}
    };
}Mercedes;

struct Lease_info{

	string Natio_ID[100];
	int payment_acc[100];
}lease;



void Menu ()
{
    int num=1;
    int size = 7;

  for(int i=0 ;i<size;++i)
{
    cout<<"\tEnter "<<num<<" - To Select  "<<car.company[i]<<endl;
    num++ ;
}

}

void Details (int Choice, string uName)
  {
   system("CLS");
   
	 cout<<"\t----------------------------------------------\n";
     cout<<"\tNDY CAR RENTAL SYSTEM \n";
     cout<<"\tMr/Mrs "<<uName<<", Please Choose a car To rent from the menu : "<<endl;
     cout<<"\t----------------------------------------------\n";
   switch (Choice){
   	case 1:
	   for(int i = 0; i < 5; i++) {
        cout << "\tCar " << i+1 << " Info:" <<endl;
        cout << "\tModel: " << MarutiSuzuki.cars[i].model <<endl;
        cout << "\tColor: " << MarutiSuzuki.cars[i].color <<endl;
        cout << "\tMax Speed: " << MarutiSuzuki.cars[i].max_speed <<endl;
        cout << "\tPrice: " << MarutiSuzuki.cars[i].price <<endl;
        cout << "\tDate: " << MarutiSuzuki.cars[i].date <<endl;
        cout << "\t-------------------------" <<endl;
        cout<<"\tEnter "<<i+1<<" - To Select  "<<MarutiSuzuki.cars[i].model<<endl;
        cout << "\t-------------------------\n" <<endl;
    }
   		break;
   	case 2:
	   for(int i = 0; i < 5; i++) {
        cout << "\tCar " << i+1 << " Info:" <<endl;
        cout << "\tModel: " << Volkswagun.cars[i].model <<endl;
        cout << "\tColor: " << Volkswagun.cars[i].color <<endl;
        cout << "\tMax Speed: " << Volkswagun.cars[i].max_speed <<endl;
        cout << "\tPrice: " << Volkswagun.cars[i].price <<endl;
        cout << "\tDate: " << Volkswagun.cars[i].date <<endl;
        cout << "-------------------------" <<endl;
        cout<<"\tEnter "<<i+1<<" - To Select  "<<Volkswagun.cars[i].model<<endl;
        cout << "-------------------------\n" <<endl;
    }
   		break;
   	case 3:
	   for(int i = 0; i < 5; i++) {
        cout << "\tCar " << i+1 << " Info:" <<endl;
        cout << "\tModel: " << BMW.cars[i].model <<endl;
        cout << "\tColor: " << BMW.cars[i].color <<endl;
        cout << "\tMax Speed: " << BMW.cars[i].max_speed <<endl;
        cout << "\tPrice: " << BMW.cars[i].price <<endl;
        cout << "\tDate: " << BMW.cars[i].date <<endl;
        cout << "\t-------------------------" <<endl;
        cout<<"\tEnter "<<i+1<<" - To Select  "<<BMW.cars[i].model<<endl;
        cout << "\t-------------------------\n" <<endl;
    }
   		break;
   	case 4:
	   for(int i = 0; i < 5; i++) {
        cout << "\tCar " << i+1 << " Info:" <<endl;
        cout << "\tModel: " << Audi.cars[i].model <<endl;
        cout << "\tColor: " << Audi.cars[i].color <<endl;
        cout << "\tMax Speed: " << Audi.cars[i].max_speed <<endl;
        cout << "\tPrice: " << Audi.cars[i].price <<endl;
        cout << "\tDate: " << Audi.cars[i].date <<endl;
        cout << "\t-------------------------" <<endl;
        cout<<"\tEnter "<<i+1<<" - To Select  "<<Audi.cars[i].model<<endl;
        cout << "\t-------------------------\n" <<endl;
    }
   		break;
   	case 5:
	   for(int i = 0; i < 5; i++) {
        cout << "\tCar " << i+1 << " Info:" <<endl;
        cout << "\tModel: " << KIA.cars[i].model <<endl;
        cout << "\tColor: " << KIA.cars[i].color <<endl;
        cout << "\tMax Speed: " << KIA.cars[i].max_speed <<endl;
        cout << "\tPrice: " << KIA.cars[i].price <<endl;
        cout << "\tDate: " << KIA.cars[i].date <<endl;
        cout << "\t-------------------------" <<endl;
        cout<<"\tEnter "<<i+1<<" - To Select  "<<KIA.cars[i].model<<endl;
        cout << "\t-------------------------\n" <<endl;
    }
   		break;
   	case 6:
	   for(int i = 0; i < 5; i++) {
        cout << "\tCar " << i+1 << " Info:" <<endl;
        cout << "\tModel: " << Tesla.cars[i].model <<endl;
        cout << "\tColor: " << Tesla.cars[i].color <<endl;
        cout << "\tMax Speed: " << Tesla.cars[i].max_speed <<endl;
        cout << "\tPrice: " << Tesla.cars[i].price <<endl;
        cout << "\tDate: " << Tesla.cars[i].date <<endl;
        cout << "\t-------------------------" <<endl;
        cout<<"\tEnter "<<i+1<<" - To Select  "<<Tesla.cars[i].model<<endl;
        cout << "\t-------------------------\n" <<endl;
    }
   		break;
   	case 7:
	   for(int i = 0; i < 5; i++) {
        cout << "\tCar " << i+1 << " Info:" <<endl;
        cout << "\tModel: " << Mercedes.cars[i].model <<endl;
        cout << "\tColor: " << Mercedes.cars[i].color <<endl;
        cout << "\tMax Speed: " << Mercedes.cars[i].max_speed <<endl;
        cout << "\tPrice: " << Mercedes.cars[i].price <<endl;
        cout << "\tDate: " << Mercedes.cars[i].date <<endl;
        cout << "\t-------------------------" <<endl;
        cout<<"\tEnter "<<i+1<<" - To Select  "<<Mercedes.cars[i].model<<endl;
        cout << "\t-------------------------\n" <<endl;
    }
   		break;
	default:
		break;
   	
   }
  }
  
void chosenCar(int theChoice,int carChoice){
	system("CLS");
	carChoice-=1;
	switch (theChoice){
  		
	   	case 1:
	        cout << "\t----------------------------" <<endl;
		    cout << "\tYou have chosen: Car " << carChoice+1 << "\n\tInfo:" <<endl;
	        cout << "\tModel: " << MarutiSuzuki.cars[carChoice].model <<endl;
	        cout << "\tColor: " << MarutiSuzuki.cars[carChoice].color <<endl;
	        cout << "\tMax Speed: " << MarutiSuzuki.cars[carChoice].max_speed <<endl;
	        cout << "\tPrice: " << MarutiSuzuki.cars[carChoice].price <<endl;
	        cout << "\tDate: " << MarutiSuzuki.cars[carChoice].date <<endl;
	        cout << "\t----------------------------" <<endl;
	   		break;
	   	case 2:
	        cout << "\t----------------------------" <<endl;
		    cout << "\tYou have chosen: Car " << carChoice+1 << "\n\tInfo:" <<endl;
	        cout << "\tModel: " << Volkswagun.cars[carChoice].model <<endl;
	        cout << "\tColor: " << Volkswagun.cars[carChoice].color <<endl;
	        cout << "\tMax Speed: " << Volkswagun.cars[carChoice].max_speed <<endl;
	        cout << "\tPrice: " << Volkswagun.cars[carChoice].price <<endl;
	        cout << "\tDate: " << Volkswagun.cars[carChoice].date <<endl;
	        cout << "\t----------------------------" <<endl;
	   		break;
	   	case 3:
	        cout << "\t----------------------------" <<endl;
		    cout << "\tYou have chosen: Car " << carChoice+1 << "\n\tInfo:" <<endl;
	        cout << "\tModel: " << BMW.cars[carChoice].model <<endl;
	        cout << "\tColor: " << BMW.cars[carChoice].color <<endl;
	        cout << "\tMax Speed: " << BMW.cars[carChoice].max_speed <<endl;
	        cout << "\tPrice: " << BMW.cars[carChoice].price <<endl;
	        cout << "\tDate: " << BMW.cars[carChoice].date <<endl;
	        cout << "\t----------------------------" <<endl;
	   		break;
	   	case 4:
	        cout << "\t----------------------------" <<endl;
		    cout << "\tYou have chosen: Car " << carChoice+1 << "\n\tInfo:" <<endl;
	        cout << "\tModel: " << Audi.cars[carChoice].model <<endl;
	        cout << "\tColor: " << Audi.cars[carChoice].color <<endl;
	        cout << "\tMax Speed: " << Audi.cars[carChoice].max_speed <<endl;
	        cout << "\tPrice: " << Audi.cars[carChoice].price <<endl;
	        cout << "\tDate: " << Audi.cars[carChoice].date <<endl;
	        cout << "\t----------------------------" <<endl;
	   		break;
	   	case 5:
	        cout << "\t----------------------------" <<endl;
		    cout << "\tYou have chosen: Car " << carChoice+1 << "\n\tInfo:" <<endl;
	        cout << "\ttModel: " << KIA.cars[carChoice].model <<endl;
	        cout << "\tColor: " << KIA.cars[carChoice].color <<endl;
	        cout << "\tMax Speed: " << KIA.cars[carChoice].max_speed <<endl;
	        cout << "\tPrice: " << KIA.cars[carChoice].price <<endl;
	        cout << "\tDate: " << KIA.cars[carChoice].date <<endl;
	        cout << "\t----------------------------" <<endl;
	   		break;
	   	case 6:
	        cout << "\t----------------------------" <<endl;
		    cout << "\tYou have chosen: Car " << carChoice+1 << "\n\tInfo:" <<endl;
	        cout << "\tModel: " << Tesla.cars[carChoice].model <<endl;
	        cout << "\tColor: " << Tesla.cars[carChoice].color <<endl;
	        cout << "\tMax Speed: " << Tesla.cars[carChoice].max_speed <<endl;
	        cout << "\tPrice: " << Tesla.cars[carChoice].price <<endl;
	        cout << "\tDate: " << Tesla.cars[carChoice].date <<endl;
	        cout << "\t----------------------------" <<endl;
	   		break;
	   	case 7:
	        cout << "\t----------------------------" <<endl;
		    cout << "\tYou have chosen: Car " << carChoice+1 << "\n\tInfo:" <<endl;
	        cout << "\tModel: " << Mercedes.cars[carChoice].model <<endl;
	        cout << "\tColor: " << Mercedes.cars[carChoice].color <<endl;
	        cout << "\tMax Speed: " << Mercedes.cars[carChoice].max_speed <<endl;
	        cout << "\tPrice: " << Mercedes.cars[carChoice].price <<endl;
	        cout << "\tDate: " << Mercedes.cars[carChoice].date <<endl;
	        cout << "\t----------------------------" <<endl;
	   		break;
		default:
			break;
	  }
	
	
}
void checklease (int theChoice, int k )
  {
  	
  	switch (theChoice){
  		
	   	case 1:
		    if(lease.payment_acc[k]>=MarutiSuzuki.cars[k].price)
	           cout<<"\n\tProcess has been done successfully!! "<<endl;
	           else
	              cout<<"\n\tNot Available \nReason: Broke "<<endl;
	   		break;
	   	case 2:
		    if(lease.payment_acc[k]>=Volkswagun.cars[k].price)
	           cout<<"\n\tProcess has been done successfully!! "<<endl;
	           else
	              cout<<"\n\tNot Available \nReason: Broke "<<endl;
	   		break;
	   	case 3:
		    if(lease.payment_acc[k]>=BMW.cars[k].price)
	           cout<<"\n\tProcess has been done successfully!! "<<endl;
	           else
	              cout<<"\n\tNot Available \nReason: Broke "<<endl;
	   		break;
	   	case 4:
		    if(lease.payment_acc[k]>=Audi.cars[k].price)
	           cout<<"\n\tProcess has been done successfully!! "<<endl;
	           else
	              cout<<"\n\tNot Available \nReason: Broke "<<endl;
	   		break;
	   	case 5:
		    if(lease.payment_acc[k]>=KIA.cars[k].price)
	           cout<<"\n\tProcess has been done successfully!! "<<endl;
	           else
	              cout<<"\n\tNot Available \n\n\n\t\t\tReason: Broke "<<endl;
	   		break;
	   	case 6:
		    if(lease.payment_acc[k]>=Tesla.cars[k].price)
	           cout<<"\n\tProcess has been done successfully!! "<<endl;
	           else
	              cout<<"\nNot Available \n\n\n\t\t\tReason: Broke "<<endl;
	   		break;
	   	case 7:
		    if(lease.payment_acc[k]>=Mercedes.cars[k].price)
	           cout<<"\n\tProcess has been done successfully!! "<<endl;
	           else
	              cout<<"\n\tNot Available \n\n\n\t\t\tReason: Broke "<<endl;
	   		break;
		default:
			break;
	  }
  }

  void user_input (int theChoice, int carChoice, string uName)
   {
   system("CLS");
   int i;
        int j=carChoice-1 ;
       cout<<"\t----------------------------------------\n";
       cout<<"\tPlease Provide Your Personal Details  : \n";
       cout<<"\t----------------------------------------\n\n";
       cout<<"\n\tNOTE: \n\tPAYMENT WON'T PROCEED IF THE GIVEN ACCOUNT HAS LESS BALANCE THN THE RATE OF CAR\n";
       cout<<"\tYour Name : "<<uName;
       cout<<"\n\tEnter Your National ID : ";
       cin>>lease.Natio_ID[j] ;
       cout<<"\n\tPayment Accouunt Balance: " ;
       cin>>lease.payment_acc[j] ;


     checklease(theChoice, j ) ;
   }


int main(){
	login();
	
	string UName; 
	UName = getName();
	
	string decide ="yes" ;
details:
     cout<<"\t----------------------------------------------\n";
     cout<<"\tNDY CAR RENTAL SYSTEM \n";
     cout<<"\tHello "<<UName<<" Welcome to Our Company, \n\t Please Choose a car company from the menu : "<<endl;
     cout<<"\t----------------------------------------------\n";
     
     while(decide!="exit")
     {
Company:
         Menu();
     cout<<"\n\tYour Choice: ";
     int theChoice ;
     cin>>theChoice ;
	     if(theChoice!= 1 && theChoice!= 2 && theChoice!= 3 && theChoice!= 4 && theChoice!= 5 && theChoice!= 6 && theChoice!= 7 ) {
	     	cin.clear();
	     	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	        	system("CLS");
	        	cout<<"\tPlease enter an appropriate choice from '1 to 7', thanks! :)";
	        	system("PAUSE");
	        goto Company;	
		 }
carChoice:     
     Details(theChoice,UName);
	 int carChoice ;
     cout<<"\n\tSelect A Car you Want To Rent: ";
     cin>>carChoice ;
	     if(carChoice!= 1 && carChoice!=2 && carChoice!= 3 && carChoice!= 4 && carChoice!= 5) {
	     	cin.clear();
	     	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	        	system("CLS");
	        	cout<<"\tPlease enter an appropriate choice from '1 to 5', thanks! :)";
	        	system("PAUSE");
	        goto carChoice;	
		 }
prev:
	decide ="yes" ;
     chosenCar(theChoice,carChoice);
     cout<<"\n\n\tAre You Sure, you want to rent this Car? (yes = y /no = n /exit ) : ";
     cin>>decide ;
	     if(decide!="y"&& decide!="n"&& decide!="exit") {
	     	
	        	system("CLS");
	        goto prev;	
		 }
     if(decide=="y") {
        user_input(theChoice,carChoice, UName);
        cout<<"\n\tDo you want to rent another car ?(y/n) ";
        cin>>decide;
        if (decide =="y") {
        	system("CLS");
        goto details;	
		}
        if (decide=="n") system("CLS"); break ;
     
     }

   else {
      if(decide=="n")
      {
       system("CLS");
          continue ;
      }
     else if  (decide=="exit")
     {
     system("CLS");

         break ;
     }

   }
     }

    cout<< "\tThank you for using our system :)\n\t Have a Great day!\n\n\n\n";

	return 0;
}

int login(){
	string pass ="";
   char ch;
   cout <<"\tNDY Car Rental System Login";
   cout <<"\n\n\n\tEnter Password: ";
   ch = _getch();
   while(ch != 13){
      pass.push_back(ch);
      cout<<'*';
      ch = _getch();
   }
   if(pass == "12345"){
   	  system("CLS");
      cout <<"\n\t Access Granted! Welcome To Our System \n";
      system("PAUSE");
      system("CLS");

   }else{
      system("CLS");
      cout <<"\n\tAccess Denied...Please Try Again!!\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}

string getName(){
	string uName;
    cout <<"\n\tPlease enter your First Name: ";
    cin>>uName;
    
    system("CLS");
    
    cout <<"\n\tWelcome To NDY Car Rentals  Mr/Mrs: "<<uName<<" :)\n\n\n\n";
    system("PAUSE");
    system("CLS");
    return uName;
}


#include <iostream>
#include <conio.h>
#include <stdlib.h>

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
    cout<<"\t\t\t";
    cout<<"Enter "<<num<<"\t- To Select  "<<car.company[i]<<endl;
    num++ ;
}

}

void Details (int Choice, string uName)
  {
   system("CLS");
   
	 cout<<"\t\t\t\t----------------------------------------------\n";
     cout<<"\t\t\t\tNDY CAR RENTAL SYSTEM \n";
     cout<<"\t\t\t\tMr/Mrs "<<uName<<", Please Choose a car To rent from the menu : "<<endl;
     cout<<"\t\t\t\t----------------------------------------------\n";
   switch (Choice){
   	case 1:
	   for(int i = 0; i < 5; i++) {
        cout << "\t\t\t\tCar " << i+1 << " Info:" <<endl;
        cout << "\t\t\t\tModel: " << MarutiSuzuki.cars[i].model <<endl;
        cout << "\t\t\t\tColor: " << MarutiSuzuki.cars[i].color <<endl;
        cout << "\t\t\t\tMax Speed: " << MarutiSuzuki.cars[i].max_speed <<endl;
        cout << "\t\t\t\tPrice: " << MarutiSuzuki.cars[i].price <<endl;
        cout << "\t\t\t\tDate: " << MarutiSuzuki.cars[i].date <<endl;
        cout << "\t\t\t\t-------------------------" <<endl;
        cout<<"\t\t\t\tEnter "<<i+1<<"\t- To Select  "<<MarutiSuzuki.cars[i].model<<endl;
        cout << "\t\t\t\t-------------------------\n" <<endl;
    }
   		break;
   	case 2:
	   for(int i = 0; i < 5; i++) {
        cout << "\t\t\t\tCar " << i+1 << " Info:" <<endl;
        cout << "\t\t\t\tModel: " << Volkswagun.cars[i].model <<endl;
        cout << "\t\t\t\tColor: " << Volkswagun.cars[i].color <<endl;
        cout << "\t\t\t\tMax Speed: " << Volkswagun.cars[i].max_speed <<endl;
        cout << "\t\t\t\tPrice: " << Volkswagun.cars[i].price <<endl;
        cout << "\t\t\t\tDate: " << Volkswagun.cars[i].date <<endl;
        cout << "\t\t\t\t-------------------------" <<endl;
        cout<<"\t\t\t\tEnter "<<i+1<<"\t- To Select  "<<Volkswagun.cars[i].model<<endl;
        cout << "\t\t\t\t-------------------------\n" <<endl;
    }
   		break;
   	case 3:
	   for(int i = 0; i < 5; i++) {
        cout << "\t\t\t\tCar " << i+1 << " Info:" <<endl;
        cout << "\t\t\t\tModel: " << BMW.cars[i].model <<endl;
        cout << "\t\t\t\tColor: " << BMW.cars[i].color <<endl;
        cout << "\t\t\t\tMax Speed: " << BMW.cars[i].max_speed <<endl;
        cout << "\t\t\t\tPrice: " << BMW.cars[i].price <<endl;
        cout << "\t\t\t\tDate: " << BMW.cars[i].date <<endl;
        cout << "\t\t\t\t-------------------------" <<endl;
        cout<<"\t\t\t\tEnter "<<i+1<<"\t- To Select  "<<BMW.cars[i].model<<endl;
        cout << "\t\t\t\t-------------------------\n" <<endl;
    }
   		break;
   	case 4:
	   for(int i = 0; i < 5; i++) {
        cout << "\t\t\t\tCar " << i+1 << " Info:" <<endl;
        cout << "\t\t\t\tModel: " << Audi.cars[i].model <<endl;
        cout << "\t\t\t\tColor: " << Audi.cars[i].color <<endl;
        cout << "\t\t\t\tMax Speed: " << Audi.cars[i].max_speed <<endl;
        cout << "\t\t\t\tPrice: " << Audi.cars[i].price <<endl;
        cout << "\t\t\t\tDate: " << Audi.cars[i].date <<endl;
        cout << "\t\t\t\t-------------------------" <<endl;
        cout<<"\t\t\t\tEnter "<<i+1<<"\t- To Select  "<<Audi.cars[i].model<<endl;
        cout << "\t\t\t\t-------------------------\n" <<endl;
    }
   		break;
   	case 5:
	   for(int i = 0; i < 5; i++) {
        cout << "\t\t\t\tCar " << i+1 << " Info:" <<endl;
        cout << "\t\t\t\tModel: " << KIA.cars[i].model <<endl;
        cout << "\t\t\t\tColor: " << KIA.cars[i].color <<endl;
        cout << "\t\t\t\tMax Speed: " << KIA.cars[i].max_speed <<endl;
        cout << "\t\t\t\tPrice: " << KIA.cars[i].price <<endl;
        cout << "\t\t\t\tDate: " << KIA.cars[i].date <<endl;
        cout << "\t\t\t\t-------------------------" <<endl;
        cout<<"\t\t\t\tEnter "<<i+1<<"\t- To Select  "<<KIA.cars[i].model<<endl;
        cout << "\t\t\t\t-------------------------\n" <<endl;
    }
   		break;
   	case 6:
	   for(int i = 0; i < 5; i++) {
        cout << "\t\t\t\tCar " << i+1 << " Info:" <<endl;
        cout << "\t\t\t\tModel: " << Tesla.cars[i].model <<endl;
        cout << "\t\t\t\tColor: " << Tesla.cars[i].color <<endl;
        cout << "\t\t\t\tMax Speed: " << Tesla.cars[i].max_speed <<endl;
        cout << "\t\t\t\tPrice: " << Tesla.cars[i].price <<endl;
        cout << "\t\t\t\tDate: " << Tesla.cars[i].date <<endl;
        cout << "\t\t\t\t-------------------------" <<endl;
        cout<<"\t\t\t\tEnter "<<i+1<<"\t- To Select  "<<Tesla.cars[i].model<<endl;
        cout << "\t\t\t\t-------------------------\n" <<endl;
    }
   		break;
   	case 7:
	   for(int i = 0; i < 5; i++) {
        cout << "\t\t\t\tCar " << i+1 << " Info:" <<endl;
        cout << "\t\t\t\tModel: " << Mercedes.cars[i].model <<endl;
        cout << "\t\t\t\tColor: " << Mercedes.cars[i].color <<endl;
        cout << "\t\t\t\tMax Speed: " << Mercedes.cars[i].max_speed <<endl;
        cout << "\t\t\t\tPrice: " << Mercedes.cars[i].price <<endl;
        cout << "\t\t\t\tDate: " << Mercedes.cars[i].date <<endl;
        cout << "\t\t\t\t-------------------------" <<endl;
        cout<<"\t\t\t\tEnter "<<i+1<<"\t- To Select  "<<Mercedes.cars[i].model<<endl;
        cout << "\t\t\t\t-------------------------\n" <<endl;
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
	        cout << "\t\t\t\t----------------------------" <<endl;
		    cout << "\t\t\t\tYou have chosen: Car " << carChoice+1 << "\n\t\t\t\tInfo:" <<endl;
	        cout << "\t\t\t\tModel: " << MarutiSuzuki.cars[carChoice].model <<endl;
	        cout << "\t\t\t\tColor: " << MarutiSuzuki.cars[carChoice].color <<endl;
	        cout << "\t\t\t\tMax Speed: " << MarutiSuzuki.cars[carChoice].max_speed <<endl;
	        cout << "\t\t\t\tPrice: " << MarutiSuzuki.cars[carChoice].price <<endl;
	        cout << "\t\t\t\tDate: " << MarutiSuzuki.cars[carChoice].date <<endl;
	        cout << "\t\t\t\t----------------------------" <<endl;
	   		break;
	   	case 2:
	        cout << "\t\t\t\t----------------------------" <<endl;
		    cout << "\t\t\t\tYou have chosen: Car " << carChoice+1 << "\n\t\t\t\tInfo:" <<endl;
	        cout << "\t\t\t\tModel: " << Volkswagun.cars[carChoice].model <<endl;
	        cout << "\t\t\t\tColor: " << Volkswagun.cars[carChoice].color <<endl;
	        cout << "\t\t\t\tMax Speed: " << Volkswagun.cars[carChoice].max_speed <<endl;
	        cout << "\t\t\t\tPrice: " << Volkswagun.cars[carChoice].price <<endl;
	        cout << "\t\t\t\tDate: " << Volkswagun.cars[carChoice].date <<endl;
	        cout << "\t\t\t\t----------------------------" <<endl;
	   		break;
	   	case 3:
	        cout << "\t\t\t\t----------------------------" <<endl;
		    cout << "\t\t\t\tYou have chosen: Car " << carChoice+1 << "\n\t\t\t\tInfo:" <<endl;
	        cout << "\t\t\t\tModel: " << BMW.cars[carChoice].model <<endl;
	        cout << "\t\t\t\tColor: " << BMW.cars[carChoice].color <<endl;
	        cout << "\t\t\t\tMax Speed: " << BMW.cars[carChoice].max_speed <<endl;
	        cout << "\t\t\t\tPrice: " << BMW.cars[carChoice].price <<endl;
	        cout << "\t\t\t\tDate: " << BMW.cars[carChoice].date <<endl;
	        cout << "\t\t\t\t----------------------------" <<endl;
	   		break;
	   	case 4:
	        cout << "\t\t\t\t----------------------------" <<endl;
		    cout << "\t\t\t\tYou have chosen: Car " << carChoice+1 << "\n\t\t\t\tInfo:" <<endl;
	        cout << "\t\t\t\tModel: " << Audi.cars[carChoice].model <<endl;
	        cout << "\t\t\t\tColor: " << Audi.cars[carChoice].color <<endl;
	        cout << "\t\t\t\tMax Speed: " << Audi.cars[carChoice].max_speed <<endl;
	        cout << "\t\t\t\tPrice: " << Audi.cars[carChoice].price <<endl;
	        cout << "\t\t\t\tDate: " << Audi.cars[carChoice].date <<endl;
	        cout << "\t\t\t\t----------------------------" <<endl;
	   		break;
	   	case 5:
	        cout << "\t\t\t\t----------------------------" <<endl;
		    cout << "\t\t\t\tYou have chosen: Car " << carChoice+1 << "\n\t\t\t\tInfo:" <<endl;
	        cout << "\t\t\t\tModel: " << KIA.cars[carChoice].model <<endl;
	        cout << "\t\t\t\tColor: " << KIA.cars[carChoice].color <<endl;
	        cout << "\t\t\t\tMax Speed: " << KIA.cars[carChoice].max_speed <<endl;
	        cout << "\t\t\t\tPrice: " << KIA.cars[carChoice].price <<endl;
	        cout << "\t\t\t\tDate: " << KIA.cars[carChoice].date <<endl;
	        cout << "\t\t\t\t----------------------------" <<endl;
	   		break;
	   	case 6:
	        cout << "\t\t\t\t----------------------------" <<endl;
		    cout << "\t\t\t\tYou have chosen: Car " << carChoice+1 << "\n\t\t\t\tInfo:" <<endl;
	        cout << "\t\t\t\tModel: " << Tesla.cars[carChoice].model <<endl;
	        cout << "\t\t\t\tColor: " << Tesla.cars[carChoice].color <<endl;
	        cout << "\t\t\t\tMax Speed: " << Tesla.cars[carChoice].max_speed <<endl;
	        cout << "\t\t\t\tPrice: " << Tesla.cars[carChoice].price <<endl;
	        cout << "\t\t\t\tDate: " << Tesla.cars[carChoice].date <<endl;
	        cout << "\t\t\t\t----------------------------" <<endl;
	   		break;
	   	case 7:
	        cout << "\t\t\t\t----------------------------" <<endl;
		    cout << "\t\t\t\tYou have chosen: Car " << carChoice+1 << "\n\t\t\t\tInfo:" <<endl;
	        cout << "\t\t\t\tModel: " << Mercedes.cars[carChoice].model <<endl;
	        cout << "\t\t\t\tColor: " << Mercedes.cars[carChoice].color <<endl;
	        cout << "\t\t\t\tMax Speed: " << Mercedes.cars[carChoice].max_speed <<endl;
	        cout << "\t\t\t\tPrice: " << Mercedes.cars[carChoice].price <<endl;
	        cout << "\t\t\t\tDate: " << Mercedes.cars[carChoice].date <<endl;
	        cout << "\t\t\t\t----------------------------" <<endl;
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
	           cout<<"\n\n\n\t\t\tProcess has been done successfully!! "<<endl;
	           else
	              cout<<"\n\n\n\t\t\tNot Available \n\n\n\t\t\tReason: Broke "<<endl;
	   		break;
	   	case 2:
		    if(lease.payment_acc[k]>=Volkswagun.cars[k].price)
	           cout<<"\n\n\n\t\t\tProcess has been done successfully!! "<<endl;
	           else
	              cout<<"\n\n\n\t\t\tNot Available \n\n\n\t\t\tReason: Broke "<<endl;
	   		break;
	   	case 3:
		    if(lease.payment_acc[k]>=BMW.cars[k].price)
	           cout<<"\n\n\n\t\t\tProcess has been done successfully!! "<<endl;
	           else
	              cout<<"\n\n\n\t\t\tNot Available \n\n\n\t\t\tReason: Broke "<<endl;
	   		break;
	   	case 4:
		    if(lease.payment_acc[k]>=Audi.cars[k].price)
	           cout<<"\n\n\n\t\t\tProcess has been done successfully!! "<<endl;
	           else
	              cout<<"\n\n\n\t\t\tNot Available \n\n\n\t\t\tReason: Broke "<<endl;
	   		break;
	   	case 5:
		    if(lease.payment_acc[k]>=KIA.cars[k].price)
	           cout<<"\n\n\n\t\t\tProcess has been done successfully!! "<<endl;
	           else
	              cout<<"\n\n\n\t\t\tNot Available \n\n\n\t\t\tReason: Broke "<<endl;
	   		break;
	   	case 6:
		    if(lease.payment_acc[k]>=Tesla.cars[k].price)
	           cout<<"\n\n\n\t\t\tProcess has been done successfully!! "<<endl;
	           else
	              cout<<"\n\n\n\t\t\tNot Available \n\n\n\t\t\tReason: Broke "<<endl;
	   		break;
	   	case 7:
		    if(lease.payment_acc[k]>=Mercedes.cars[k].price)
	           cout<<"\n\n\n\t\t\tProcess has been done successfully!! "<<endl;
	           else
	              cout<<"\n\n\n\t\t\tNot Available \n\n\n\t\t\tReason: Broke "<<endl;
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
       cout<<"\t\t\t----------------------------------------\n";
       cout<<"\t\t\tPlease Provide Your Personal Details  : \n";
       cout<<"\t\t\t----------------------------------------\n\n";
       cout<<"\n\tNOTE: \n\tPAYMENT WON'T PROCEED IF THE GIVEN ACCOUNT HAS LESS BALANCE THN THE RATE OF CAR\n\n\n\n";
       cout<<"\t\t\t Your Name : "<<uName;
       cout<<"\n\t\t\tEnter Your National ID : ";
       cin>>lease.Natio_ID[j] ;
       cout<<"\t\t\tPayment Accouunt Balance: " ;
       cin>>lease.payment_acc[j] ;


     checklease(theChoice, j ) ;
   }


int main(){
	login();
	
	string UName; 
	UName = getName();
	
	string decide ="yes" ;
details:
     cout<<"\t\t\t----------------------------------------------\n";
     cout<<"\t\t\tNDY CAR RENTAL SYSTEM \n";
     cout<<"\t\t\tHello "<<UName<<" Welcome to Our Company, \n\t\t\t Please Choose a car company from the menu : "<<endl;
     cout<<"\t\t\t----------------------------------------------\n";
     
     while(decide!="exit")
     {
Company:
         Menu();
     cout<<"\n\n\n\t\t\tYour Choice: ";
     int theChoice ;
     cin>>theChoice ;
	     if(theChoice!= 1 && theChoice!= 2 && theChoice!= 3 && theChoice!= 4 && theChoice!= 5 && theChoice!= 6 && theChoice!= 7 ) {
	     	
	        	system("CLS");
	        goto Company;	
		 }
carChoice:     
     Details(theChoice,UName);
	 int carChoice ;
     cout<<"\n\n\n\t\t\tSelect A Car you Want To Rent: ";
     cin>>carChoice ;
	     if(carChoice!= 1 && carChoice!=2 && carChoice!= 3 && carChoice!= 4 && carChoice!= 5) {
	     	
	        	system("CLS");
	        goto carChoice;	
		 }
prev:
	decide ="yes" ;
     chosenCar(theChoice,carChoice);
     cout<<"\n\n\n\t\t\tAre You Sure, you want to rent this Car? (yes = y /no = n /exit ) : ";
     cin>>decide ;
	     if(decide!="y"&& decide!="n"&& decide!="exit") {
	     	
	        	system("CLS");
	        goto prev;	
		 }
     if(decide=="y") {
        user_input(theChoice,carChoice, UName);
        cout<<"\n\n\t\t\tDo you want to continue ?(y/n) ";
        cin>>decide;
        if (decide =="y") {
        	system("CLS");
        goto details;	
		}
        if (decide=="n") break ;
system("CLS");
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

    cout<< "\t\t\t\t Thank you for using our system :)\n \t\t\t\tHave a Great day!";

	return 0;
}

int login(){
	string pass ="";
   char ch;
   cout <<"\n\n\n\n\n\n\n\t\t\t\t  NDY Car Rental System Login";
   cout <<"\n\n\n\n\n\n\n\t\t\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13){//char 13 is enter
      pass.push_back(ch);
      cout<<'*';
      ch = _getch();
   }
   if(pass == "12345"){
      cout <<"\n\n\n\n\t\t\t\t  Access Granted! Welcome To Our System \n\n";
      system("PAUSE");
      system("CLS");

   }else{
      cout <<"\n\n\n\n\t\t\tAccess Denied...Please Try Again!!\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}

string getName(){
	string uName;
    cout <<"\n\n\n\n\n\n\n\t\t\t\t\tPlease enter your First Name: ";
    cin>>uName;
    
    system("CLS");
    
    cout <<"\n\n\n\n\n\n\n\t\t\tWelcome To NDY Car Rentals  Mr/Mrs: "<<uName<<" :)\n\n\n";
    system("PAUSE");
    system("CLS");
    return uName;
}


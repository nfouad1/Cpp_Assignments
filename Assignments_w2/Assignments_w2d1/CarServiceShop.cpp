/*
A car service shop needs to keep track of the records of services they provide to their customer. Create a system
for them so they could keep ATLEAST the below records:
• Date the customer visited
• Services performed (at least 2 different services)
• Parts changed (at least 2 different parts)
• Payment (method & amount)
use dynamic memory allocation
add an exit scenario to delete all the inputs
give also chanse to answer for more records.
give options to the user to print the data.
*/

#include <iostream>
#include <ctime>
#include <string>
#include <array>
using namespace std;

#define arr_size 2

class RecordForCarService {
    
    private:
        string pMethod;
        string firstname;
        string lastname;
        string Fullname;
        string servicetype[arr_size]; // int *myArray = new int[SIZE];
        string serviceparts[arr_size];
        int date;

    public:
        // declare a method to ask for which date the customer need a service and personal informations.  
        // To get the value from the data member.
        // implement date and time here

      //  int records;
      //  string * RecordArray;
      RecordForCarService(){
          string *pMethod = new string;
      }
        int records = 0;
        
        string* RecordArray = new string[records];
        void getinput();
        void display();
        
        void setFirstName(string firstname){
           this->firstname  = firstname;  }
        void setLastName(string lasttname){ this->lastname = lastname;  }
        void setPayment(string pMethod){ this->pMethod = pMethod; }
        void setServiceType(string servicetype[arr_size])
        { 
            for (int i = 0; i < arr_size; i++)
            {
               this->servicetype[i] = servicetype[i]; 
            }
        }
        void setServiceParts(string servicepart[arr_size])
        {   
            for (int i = 0; i < arr_size; i++){
                this->serviceparts[i] = servicepart[i];
              //   this->serviceparts = serviceparts;
            }
           
        }
        
        string getFullName(){ return this-> firstname + " " + lastname; }
        string getPayment(){ return this->pMethod;}
        string getServiceType()
        { 
            for (int i = 0; i < arr_size; i++)
            {   
                cout << "service types from get function: "<<endl;
                cout <<servicetype[i] ;
                return this->servicetype[i];
            }   
        }
        string getServiceParts(){ 
            for (int i = 0; i < arr_size; i++)
            {
                cout << "service parts from get function: "<< endl;
                cout << serviceparts[i];
                return serviceparts[i];
            }
        }
};

void RecordForCarService::getinput() {
        
        int count = 0;
            cout << "Number of records to be inserted: \n";
            cin >> records;
         //   string* RecordArray = new string[records];
         //   while (count < records)
          //  {
            // (int i = 0; i < records; i++){
                cout << "Enter your firstname: "; cin >> firstname; setFirstName(firstname);
           //     RecordArray[count] = firstname;
                cout << endl;
                cout << "Enter your lasttname: "; cin >> lastname; setLastName(lastname);
            //    RecordArray[count] = lastname;
                cout << endl;
                cout << "Kind of service: ";
                for (int  i = 0; i < arr_size; i++)
                {
                    cout << "Service type #"<< i+1 <<": "<< endl;
                    cin >> servicetype[i]; 
                //    RecordArray[count] = servicetype[i];
                };
                //setServiceType(servicetype[]);
                cout << endl;
                cout << "Changed parts: ";
                for (int  i = 0; i < arr_size; i++)
                {
                    cout << "service part: "<< i+1 <<": "<< endl;
                    cin >> serviceparts[i]; 
                //    RecordArray[count] = serviceparts[i];
                };
               // setServiceParts(serviceparts[i]);
                cout << endl;
                cout << "Payment method:  Cash or Creditcard: "<<endl;
                cin >> pMethod; setPayment(pMethod);
              //  RecordArray[count] = pMethod;
                cout << endl;

                count ++;
          //  }
};
 void RecordForCarService::display(){
            RecordForCarService Obj;
            
            time_t t = time(0);
            tm* now = localtime(&t);
            for (int i = 0; i < records; i++)
             {
                cout<<"From the records database: "<< Obj.RecordArray[i] <<endl;
             }
    
         //   delete [] RecordArray;
            cout << "Details for booked services: " <<endl;
            cout <<"Fullname: "<< getFullName(); 
            cout << endl;
            cout << "Service type: " << getServiceType();
            cout << endl;
            cout << "Payment method: "<< getPayment();
            cout << endl;
            cout << "Changed parts: " << getServiceParts();
            cout << endl; 
            cout << "Date of the service: " << (now->tm_year+1900) << '-'<<(now->tm_mon+1) << '-'<< now->tm_mday<< endl;  

};

int main (){

    RecordForCarService service;
    int choice;    
    // as long as the user want to put in informations. give also an exit option.
    while (true){     
        cout << "************WELCOME TO THE CAR SERVICE SHOP************"<<endl;
        cout <<"1. Enter service records"<< endl; cout << "2. Se details of the records."<<endl; cout << "3. Exit the program."<< endl;
        cin >> choice;
        if (choice == 1){
            
                service.getinput();
                
        } else if (choice == 2)
            {
                service.display();
                
            }
            else if (choice == 3)
            {
            return 0;
            }
    }
   return 0;
}
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

        // default constructor
     /*   RecordForCarService(){
                    lastname = 0;
                    firstname = 0;
             for (int i = 0; i < arr_size; i++){
                    serviceparts[i] = 0;
                    servicetype[i] = 0;
                    
        }*/
         // deconstructor
       // ~RecordForCarService(){ delete [] RecordArray;}
        int records;
        string * RecordArray;
        void getinput();
        void display();
        void setFirstName(string firstname){this->firstname = firstname;  }
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
        
        string fname;
            cout << "Number of records to be inserted: \n";
            cin >> records;
            RecordArray = new string [records];
        
            for (int i = 0; i < records; i++){
                cout << "Enter your firstname: "; cin >> firstname; setFirstName(firstname);
                cout << endl;
                cout << "Enter your lasttname: "; cin >> lastname; setLastName(lastname);
                cout << endl;
                cout << "Kind of service: ";
                for (int  i = 0; i < arr_size; i++)
                {
                    cout << "Service type #"<< i+1 <<": "<< endl;
                    cin >> servicetype[i]; 
                };
                //setServiceType(servicetype[]);
                cout << endl;
                cout << "Changed parts: ";
                for (int  i = 0; i < arr_size; i++)
                {
                    cout << "service part: "<< i+1 <<": "<< endl;
                    cin >> serviceparts[i]; 
                };
               // setServiceParts(serviceparts[i]);
                cout << endl;
                cout << "Payment method:  Cash or Creditcard: "<<endl;
                cin >> pMethod; setPayment(pMethod);
                cout << endl;
            }
};
 void RecordForCarService::display(){
            RecordForCarService Obj;
            
            time_t t = time(0);
            tm* now = localtime(&t);

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

    
  //  service_info::~service_info(){
        //delete the arrays allocated in the heap
   //     delete [] parts;
    //    delete [] firstname;
   //     delete [] lastname;
   //     delete [] date;
    }
   return 0;
}
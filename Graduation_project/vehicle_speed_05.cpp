#include <iostream>
using namespace std;

bool engineState{true};
int GearState = 3;                                                 // 1,N; 2,P; 3,D, 4.N
float currentGearratio[] = {0.005, 0.01, 0.02, 0.03, 0.04, 0.06}; // Range 0 - maxGear
int currentGear = 5;                                               // between 1-6
int currentRPM = 4100;
int maxGear = sizeof currentGearratio / 4; //count array size
int throttle = 50; // not used for Vehicle speed calculation. Onlu used to set the gear ratio.
int factor;        // 2000 x (1 + currentGear * currentGear / 10)
int upperrpmlimit = 4000;
int lowerpmlimit = 1500;
int vehicleSpeed = 0; // to be returned by the function
int gearfactor = 80;  // factor of gear to get a proper speed.
const int maxRPM = 9000;
int maxspeed = 250;
int rpm_in = 0;

int f1 = 600;

void shiftUp();
void shiftdown();

void vehiclespeed() //(int rpm_in)
{

    // Check if, engine is on and D gear
    if (engineState == true && GearState == 3)
    { // in this 3 = D

        if (throttle > 0)
        {

            // shift up/down when rpm exceeds gearshift shresholds upper/lowerlimit
        
            if ((currentRPM > upperrpmlimit) && (currentGear < maxGear))
            {
                shiftUp();
                currentRPM = vehicleSpeed / currentGearratio [currentGear - 1]; //Calculate new rpm based on new gearratio
                //delete below row in emulator to keep speed constant
                //vehicleSpeed = currentRPM * currentGearratio [currentGear - 1]; 
            }
            else if ((currentRPM <= upperrpmlimit) && (currentRPM > lowerpmlimit))
            {
                vehicleSpeed = currentRPM * currentGearratio [currentGear - 1];
            }
            //}
            else if ((currentRPM <= lowerpmlimit) && (currentGear > 1)) //{
            // ShiftDown when RPM is bellow lowerpmlimit
            {
                shiftdown();
                //factor = f1 * (1 + currentGear / 10);
                currentRPM = vehicleSpeed / currentGearratio [currentGear - 1];
                //vehicleSpeed = currentRPM * currentGearratio [currentGear - 1];
            }
            else if ((currentRPM <= lowerpmlimit) && (currentGear == 1)) 
            // ShiftDown when RPM is bellow lowerpmlimit
            {
                vehicleSpeed = currentRPM * currentGearratio [currentGear - 1];
            }
            else if ((currentRPM > upperrpmlimit) && (currentGear == maxGear))
            {
                vehicleSpeed = currentRPM * currentGearratio [currentGear - 1];
            }
        }
    }
    if (vehicleSpeed > maxspeed)
    {
        vehicleSpeed = maxspeed;
    }
}

void shiftUp()
{
    // Check if D gear is inside interval 1-5
    if (currentGear > 0 && currentGear < maxGear)
        currentGear++;
}

void shiftdown()
{
    // Check if D gear is inside interval 1-5
    if (currentGear > 1 && currentGear < maxGear + 1)
        currentGear--;
}

int main()
{

vehiclespeed();
 cout << "\nCurrentRPM = " << currentRPM << endl;
    cout << "engineState = " << engineState << endl;
    cout << "currentGear = " << currentGear << endl;
    cout << "GearState = " << GearState << endl;
    cout << "maxGear = " << maxGear << endl;
    cout << "factor = " << factor << endl;
    cout << "vehicleSpeed = " << vehicleSpeed << endl;
    cout << "currentGearratio = " << currentGearratio[currentGear - 1] << endl;

currentGear = 1;
    for (currentRPM = 0; currentRPM < lowerpmlimit; currentRPM = currentRPM + 200)
     {    
     vehiclespeed();
    cout << "\nCurrentRPM = " << currentRPM << endl;
    cout << "engineState = " << engineState << endl;
    cout << "currentGear = " << currentGear << endl;
    cout << "GearState = " << GearState << endl;
    cout << "maxGear = " << maxGear << endl;
    cout << "factor = " << factor << endl;
    cout << "vehicleSpeed = " << vehicleSpeed << endl;
    cout << "currentGearratio = " << currentGearratio[currentGear - 1] << endl;
    }
    
currentGear = 2; 
    for (currentRPM; currentRPM < upperrpmlimit-1; currentRPM = currentRPM + 200)
     {    
     vehiclespeed();
    cout << "\nCurrentRPM = " << currentRPM << endl;
    cout << "engineState = " << engineState << endl;
    cout << "currentGear = " << currentGear << endl;
    cout << "GearState = " << GearState << endl;
    cout << "maxGear = " << maxGear << endl;
    cout << "factor = " << factor << endl;
    cout << "vehicleSpeed = " << vehicleSpeed << endl;
    cout << "currentGearratio = " << currentGearratio[currentGear - 1] << endl;
    }
 
currentGear = 3; 
    for (currentRPM = lowerpmlimit+1; currentRPM < upperrpmlimit-1; currentRPM = currentRPM + 200)
     {    
     vehiclespeed();
    cout << "\nCurrentRPM = " << currentRPM << endl;
    cout << "engineState = " << engineState << endl;
    cout << "currentGear = " << currentGear << endl;
    cout << "GearState = " << GearState << endl;
    cout << "maxGear = " << maxGear << endl;
    cout << "factor = " << factor << endl;
    cout << "vehicleSpeed = " << vehicleSpeed << endl;
    cout << "currentGearratio = " << currentGearratio[currentGear - 1] << endl;
    }

currentGear = 4; 
    for (currentRPM = lowerpmlimit+1; currentRPM < upperrpmlimit-1; currentRPM = currentRPM + 200)
     {    
     vehiclespeed();
    cout << "\nCurrentRPM = " << currentRPM << endl;
    cout << "engineState = " << engineState << endl;
    cout << "currentGear = " << currentGear << endl;
    cout << "GearState = " << GearState << endl;
    cout << "maxGear = " << maxGear << endl;
    cout << "factor = " << factor << endl;
    cout << "vehicleSpeed = " << vehicleSpeed << endl;
    cout << "currentGearratio = " << currentGearratio[currentGear - 1] << endl;
    }


currentGear = 5; 
    for (currentRPM = lowerpmlimit+1; currentRPM < upperrpmlimit-1; currentRPM = currentRPM + 200)
     {    
     vehiclespeed();
    cout << "\nCurrentRPM = " << currentRPM << endl;
    cout << "engineState = " << engineState << endl;
    cout << "currentGear = " << currentGear << endl;
    cout << "GearState = " << GearState << endl;
    cout << "maxGear = " << maxGear << endl;
    cout << "factor = " << factor << endl;
    cout << "vehicleSpeed = " << vehicleSpeed << endl;
    cout << "currentGearratio = " << currentGearratio[currentGear - 1] << endl;
    }

cout<<"\nset Rpm to upper threshold\n";
currentRPM = 4001;
vehiclespeed();


currentGear = 6; 
    for (currentRPM ; currentRPM < maxRPM-1; currentRPM = currentRPM + 200)
     {    
     vehiclespeed();
    cout << "\nCurrentRPM = " << currentRPM << endl;
    cout << "engineState = " << engineState << endl;
    cout << "currentGear = " << currentGear << endl;
    cout << "GearState = " << GearState << endl;
    cout << "maxGear = " << maxGear << endl;
    cout << "factor = " << factor << endl;
    cout << "vehicleSpeed = " << vehicleSpeed << endl;
    cout << "currentGearratio = " << currentGearratio[currentGear - 1] << endl;
    }

    return 0;
}
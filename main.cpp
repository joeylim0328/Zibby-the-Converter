/*
This is a project for PPS0335-Problem Solving and Programming assignment.
Members:
Joey Lim, Y.F.,Tan, T.C.,Chan, J.Z.,Neow
*/

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

// Currency rate
// Last updated on July 9, 2021
const float MY_SGD = 0.32;
const float MY_USD = 0.24;
const float MY_EU  = 0.20;
const float MY_GBP = 0.17;
const float MY_RMB = 1.55;
const float MY_THB = 7.81;
const float MY_INR = 17.83;

void main_screen(){
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~_______________________________~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~_______________________________~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~_________~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~_________~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~_________~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~_________~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~_________~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~_________~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~_________~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~__________~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~__________~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~__________~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~__________~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~__________~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~________________________________~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~________________________________~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"Hello, user.I am Zibby and I will help you to convert from Ringgit Malaysia to other currency."<<endl;
    cout<<"Please key in either 1/2/3/4/5/6/7."<<endl;
    cout<<"Please enter the currency that you want to convert:"<<endl;
    cout<<"1. Singapore dollar"<<endl;
    cout<<"2. United States dollar"<<endl;
    cout<<"3. Euro"<<endl;
    cout<<"4. Great British Pound"<<endl;
    cout<<"5. RenMinBi"<<endl;
    cout<<"6. Thai Baht"<<endl;
    cout<<"7. Indian Rupee"<<endl;
    cout<<".............................................................................................."<<endl;
    cout<<"----------------------------------------------------------------------------------------------"<<endl;
    cout<<"=============================================================================================="<<endl;
}


int main()
{
    int choice;
    float amount_before, amount_after;
    char again;
    do{
    main_screen();

    cout<<endl<< "Choice: ";
    cin>>choice;

    while ((choice!=1) && (choice!=2) && (choice!=3) && (choice!=4) && (choice!=5) && (choice!=6) && (choice!=7)){
    system("cls");
    main_screen();
    cout<<"Your input is invalid. Please key in correctly."<<endl;
    cout<<endl<< "Choice: ";
    cin>>choice;
    }
    system("cls");


    cout<<"Please enter the amount that you want to convert (RM): ";
    cin>>amount_before;

    while (amount_before<0.0){
        cout<<"Invalid amount. Please enter again (RM): ";
        cin>>amount_before;
    }

    switch(choice){
    case 1: amount_after = amount_before*MY_SGD;
    cout<<"Total amount is: SGD "<<amount_after<<endl;
    break;
    case 2: amount_after = amount_before*MY_USD;
    cout<<"Total amount is: "<<amount_after<<" USD"<<endl;
    break;
    case 3: amount_after = amount_before*MY_EU;
    cout<<"Total amount is: "<<amount_after<<" Euros"<<endl;
    break;
    case 4: amount_after = amount_before*MY_GBP;
    cout<<"Total amount is: "<<amount_after<<" Pounds"<<endl;
    break;
    case 5: amount_after = amount_before*MY_RMB;
    cout<<"Total amount is: "<<amount_after<<" Ren Min Bi"<<endl;
    break;
    case 6: amount_after = amount_before*MY_THB;
    cout<<"Total amount is: "<<amount_after<<" Thai Baht"<<endl;
    break;
    case 7: amount_after = amount_before*MY_INR;
    cout<<"Total amount is: "<<amount_after<<" Rupees"<<endl;
    break;

    }
    cout<<"Would you like to do another conversion? (Y/N): ";
    cin>>again;

    system("cls");

    }while((again=='Y'||again=='y'));

    system("cls");
    cout<<"THANK YOU FOR USING! HAVE A NICE DAY!";





    }


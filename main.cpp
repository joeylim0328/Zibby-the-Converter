#include <iostream>
#include <string>

using namespace std;

const float MY_SGD = 0.34;
const float MY_USD = 0.25;
const float MY_EU  = 0.21;
const float MY_GBP = 0.19;
const float MY_RMB = 1.60;
const float MY_THB = 8.07;
const float MY_INR = 17.06;

int main()
{
    int choice;
    float amount_before, amount_after;
    char again;

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
    cout<<"Please enter the currency that you want to convert.:"<<endl;
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

    cout<<endl<< "Choice: ";
    cin>>choice;

    while((choice!=1) && (choice!=2) && (choice !=3) && (choice!=4) && (choice!=5) && (choice!=6) && (choice!=7) ){
        cout<<"Please enter a valid choice. It is either (1/2/3/4/5/6/7): "<<endl;
        cin>>choice;
    }

    cout<<"Please enter the amount that you want to convert. "<<endl;
    cin>>amount_before;

    while (amount_before<0.0){
        cout<<"Invalid amount. Please enter again. ";
        cin>>amount_before;
    }

    switch(choice){
    case 1: amount_after = amount_before*MY_SGD;
    cout<<"Total amount is:SGD "<<amount_after<<endl;
    break;
    case 2: amount_after = amount_before*MY_USD;
    cout<<"Total amount is:"<<amount_after<<" USD"<<endl;
    break;
    case 3: amount_after = amount_before*MY_EU;
    cout<<"Total amount is:"<<amount_after<<" Euros"<<endl;
    break;
    case 4: amount_after = amount_before*MY_GBP;
    cout<<"Total amount is:"<<amount_after<<" Pounds"<<endl;
    break;
    case 5: amount_after = amount_before*MY_RMB;
    cout<<"Total amount is:"<<amount_after<<" Ren Min Bi"<<endl;
    break;
    case 6: amount_after = amount_before*MY_THB;
    cout<<"Total amount is:"<<amount_after<<" Thai Baht"<<endl;
    break;
    case 7: amount_after = amount_before*MY_INR;
    cout<<"Total amount is:"<<amount_after<<" Rupees"<<endl;
    break;

    }







    }


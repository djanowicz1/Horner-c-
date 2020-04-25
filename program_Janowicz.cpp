#include <iostream>
#include <math.h>
#include <iomanip>
#include <limits>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

using namespace std;

int main() {
    
    char strq[1000];
    int len;
    char strw[1000];
    int len2;
    char strs[1000];
    int len3;
    

    cout << "Function form: " << endl;
    cout << "q*x^2 + w*x + s " << endl;
    cout << "Put q value first. If 'q' is negative, insert '-' before the number. " << endl;

    while (true) {
        cin >> strq;
        len = strlen(strq);
        
        bool isValid = true;

        for (int i = 0; i < len; i++)
        {
            if (!isdigit(strq[i]) && strq[i] != '-')
            {
                isValid = false;            
            }
        }
    
        if (!isValid)
        {
            cout << "Error: a number must be entered" << endl;
            cout << "Please enter a valid value! " << endl;
            cin.clear();
            cin.ignore();
        } else {
            break;
        }
    }
    
    
    cout << strq << "x^2 + w*x + s " << endl;
    cout << "Now insert 'w' value. If 'w' is negative, insert '-' before the number. " << endl;
    while (true) {
        cin >> strw;
        len2 = strlen(strw);
        
        bool isValid = true;

        for (int i = 0; i < len2; i++)
        {
            if (!isdigit(strw[i]) && strq[i] != '-')
            {
                isValid = false;            
            }
        }
    
        if (!isValid)
        {
            cout << "Error: a number must be entered" << endl;
            cout << "Please enter a valid value! " << endl;
            cin.clear();
            cin.ignore();
        } else {
            break;
        }
    }
    
    cout << strq << "x^2 + " << strw << "*x + s " << endl;
    cout << "Lastly insert 's' value. If 's' is negative, insert '-' before the number. " << endl;
      while (true) {
        cin >> strs;
        len3 = strlen(strs);
        
        bool isValid = true;

        for (int i = 0; i < len3; i++)
        {
            if (!isdigit(strs[i]) && strq[i] != '-')
            {
                isValid = false;            
            }
        }
    
        if (!isValid)
        {
            cout << "Error: a number must be entered" << endl;
            cout << "Please enter a valid value! " << endl;
            cin.clear();
            cin.ignore();
        } else {
            break;
        }
    }
    
     cout << strq << "x^2 + " << strw << "*x + " << strs << endl;
     
     
    char lowerLimit[1000];
    int len4;
    char upperLimit[1000];
    int len5;
    float integral;
    
    cout << "Enter lower limit: ";
    while (true) {
        cin >> lowerLimit;
        len4 = strlen(lowerLimit);
        
        bool isValid = true;

        for (int i = 0; i < len4; i++)
        {
            if (!isdigit(lowerLimit[i]) && strq[i] != '-')
            {
                isValid = false;            
            }
        }
    
        if (!isValid)
        {
            cout << "Error: a number must be entered" << endl;
            cout << "Please enter a valid value! " << endl;
            cin.clear();
            cin.ignore();
        } else {
            break;
        }
    }
    
    cout << "Enter upper limit: ";
    while (true) {
        cin >> upperLimit;
        len5 = strlen(upperLimit);
        
        bool isValid = true;

        for (int i = 0; i < len5; i++)
        {
            if (!isdigit(upperLimit[i]) && strq[i] != '-')
            {
                isValid = false;            
            }
        }
    
        if (!isValid)
        {
            cout << "Error: a number must be entered" << endl;
            cout << "Please enter a valid value! " << endl;
            cin.clear();
            cin.ignore();
        } else {
            break;
        }
    }

    double doubleStrq = stod(strq);
    double doubleStrs = stod(strs);
    double doubleStrw = stod(strw);
    double doubleLowerLimit = stod(lowerLimit);
    double doubleUpperLimit = stod(upperLimit);
    integral = ((upperLimit - lowerLimit) / 2) * ((doubleStrq*(pow(doubleLowerLimit,2)) + doubleStrw*(doubleLowerLimit) + doubleStrs) + (doubleStrq*(pow(doubleUpperLimit,2)) + doubleStrw*(doubleUpperLimit) + doubleStrs));

    cout << "Integral is equal to: " << integral << endl;
    
    return 0;
};
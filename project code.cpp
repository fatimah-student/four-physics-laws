/******************************************************************************
//Fatimah Naji Alnasser 2210003501
//Walaa Hussain Alsaeed 2210003609
//Hoor Alabdulwahab     2210003633
//laws: newton's 2nd law , kinetic energy's law , ideal gas' law , coulomb's law 

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
const double k = 8.99*1000000000, R = 8.314;

double Coulomb(double q1, double q2, double r) {
  return (k * q1 * q2) / pow(r,2);
}

double Newton(double a, double m) {
  return a * m;
}

double Ideal_gas(double n, double t, double v) {
  return n * R * t /v ;
}

double Ideal_gas2(double n, double t, double p) {
  return n * R * t /p ;
}

double Kinetic(double m, double v) {
  return 0.5 * m *pow(v,2);
}

int main()
{
  cout << "Welcome, this program calculates some of Physics\' laws:\n";
  cout << "1. Newton's second law \n";
  cout << "2. Coulomb's law \n";
  cout << "3. Kinetic energy\'s law \n";
  cout << "4. The ideal gas\' law \n";
  
  int choice;
  
  char answer;
  
  do {
    cout << "Please enter your choice (1-4) or 0 to exit: ";
    cin >> choice;
    
    if (choice < 0 || choice > 4) {
      cout << "Please try a number between 1-4. \n";
      continue;
    }
    
    if (choice == 0) {
      cout << "Thank you \n";
      break;
    }
    
    double q1, q2, r, a, m, n, t, v, p, result;
    double option;
    
    switch (choice) {
        
      case 1:
        cout << "Please enter the value of acceleration (a) in m/s^2: ";
        cin >> a;
        cout << "Please enter the value of mass (m) in kg: ";
        cin >> m;
        result = Newton(a, m);
        cout << "The force is   " <<result << " N \n";
        break;
        
        case 2:
        cout << "Please enter the values of charges (q1) and (q2) in C: \n";
        cin >> q1;
		cin>> q2;
        cout << "Please enter the value of distance (r) in m: ";
        cin >> r;
        result = Coulomb(q1, q2, r);
        cout << "The Coulomb force is   " << result << " N \n";
        break;
        
        case 3:
        cout << "Please enter the value of mass (m) in kg: ";
        cin >> m;
        cout << "Please enter the value of velocity (v) in m/s: ";
        cin >> v;
        result = Kinetic(m, v);
        cout << "The kinetic energy is " << result << " J \n";
        break;
        
        case 4:
      	cout<<"If you want to calculate the pressure using the ideal gas\' law, inter 1 .\n";
      	cout<<"If you want to calculate the volume using the ideal gas\' law, inter 2 : ";
      	cin>> option;
      	if (option==1)
        {cout << "Please enter the value of moles (n) in mol: ";
        cin >> n;
        cout << "Please enter the value of temperature (T) in K: ";
        cin >> t;
        cout << "Please enter the value of volume (v) in m^3: ";
        cin >> v;
        result = Ideal_gas(n, t, v);
        cout << "The pressure by the ideal gas\' law is " << result << " Pa \n";
		}
		else 
		{cout << "Please enter the value of moles (n) in mol: ";
        cin >> n;
        cout << "Please enter the value of temperature (T) in K: ";
        cin >> t;
        cout << "Please enter the value of pressure (p) in Pa: ";
        cin >> p;
        result = Ideal_gas2(n, t, p);
        cout << "The volume by the ideal gas\' law is " << result << " m^3 \n";
		}
        break;
           
    }
    
    cout << "Do you want to continue (y) or exit (n)? ";
    cin >> answer;
    if (answer != 'y' && answer != 'n') {
      cout << "Invalid answer. Please try again. \n";
      continue;
    }
    if (answer == 'n') {
      cout << "End the program \n";
      break; 
    }
  } while (true); 
  return 0; 
}

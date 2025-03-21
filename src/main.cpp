/* Amerike university
  Author: Julio López
  Practice #: 13
  Date: 20/03/25
  Description: This program shall ask the user for a degree conversion of their choice, and then again to conver them into a different kind, and the console shall dispense the correct calculation to that degree m*/

  #include <iostream>
  using namespace std;

  double FarenheithK(double coun){

    return coun - 32 * 5 / 9;
 
  }
  double FarenheithC(double coun){

    return coun - 32 / 1.8;
  }
  double KelvinF(double coun){

    return coun - 273.15 * 1.8 + 32;
  }
  double KelvinC(double coun){

    return coun -273.15;
  }
  double CelsiusF(double coun){

    return coun * 1.8 + 32;
  }
  double CelsiusK(double coun){

    return coun + 273.15;
  }


  int main(){

    char  degree;
    double count;
    char convert;


    cout << "What degree you want to convert? \n";
 
     cout << "Kelvin(K)\n";
     cout << "Farenheith (F)\n";
     cout << "Celsius(C)\n";
 
     cin >> degree;
     cout << "How much? ";
     cin >> count;
     cout << "Into? ";
     cin >> convert;

     switch (degree)
     {
      case 'F':
      switch(convert){
      case 'K':
         cout << FarenheithK(count);
         break;
       case 'C':
          cout << FarenheithC(count);
          break; 
      }
      break;
      case 'K':
      switch (convert){
      case 'F':
         cout << KelvinF(count);
         break;
       case 'C':
       cout << KelvinC(count);
       break;
      }
      break;
      case 'C':
      switch(convert){
        case 'F':
        cout << CelsiusF(count);
        break;
        case 'K':
        cout << CelsiusK(count);
        break;

      }
      break;
     
      default:
         cout << "Didn't i give you options yet again?";
 



  }
 }
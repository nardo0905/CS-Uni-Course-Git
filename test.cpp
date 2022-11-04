#include <iostream>
#include <iomanip>

using namespace std;


void Foo(int Bar)
{
   switch(Bar)
   {
      case 1:
         cout << 'A';
      case 2:
         
      case 3:
         cout << 'B';
   }
}

int main() {

int found = 0, count = {6}; 

if (!found || --count == 0) 
    cout << "danger" << ','; 
cout << "count = " << count;


}
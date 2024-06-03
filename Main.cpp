#include <iostream>
#include <iomanip>   //For setprecision
using namespace std;

int main() {
   double caffeineMg;  // "double" supports floating-point like 75.5, versus int for integers like 75.
   double after6;
   double after12;
   double after24;
   
   cin >> caffeineMg;
   after6 = caffeineMg / 2;
   after12 = after6 / 2;
   after24 = after12 / 4;
   
   cout << fixed << setprecision(2);   // All later cout's will print floating-point values to exactly 2 decimal places.
                                       // Ex: 3.60
   cout << "After 6 hours: " << after6 <<  " mg" << endl;
   cout << "After 12 hours: " << after12 << " mg" << endl;
   cout << "After 24 hours: " << after24 << " mg" << endl;

   return 0;
}

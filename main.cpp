// New Multiply.cpp - This program prints the numbers 0 through 10 along
//         with these values multiplied by 2 and by 10.
// Input:  None
// Output: Prints the numbers 0 through 10 along with their values 
//         multiplied by 2 and by 10. 

#include <iostream>
#include <string>

using namespace std;

int main()
{
		
   string head1 = "Number: ";
   string head2 = "by Two: ";
   string head3 = "by Ten: ";				
   int numberCount ; 		    // Numbers 0 through 10
   int byTen = 10;		            // Stores the number multiplied by 10
   int byTwo = 2; 		            // Stores the number multiplied by 2
   const int NUM_LOOPS = 11;    // Constant used to control loop

   // Housekeeping section
    
	cout << "Final Exam Part 1 A\n\n";
	cout << "\n1 through 10 multiplied by 2 and by 10. \n\n" ;

	int sum = 1;
	int count = 1;
	do {
	
		cout << "Number: " << sum ;
		cout << "\tby Two: " << byTwo ;
		cout << "\tby Ten: " << byTen << endl;
        sum++;
        count++;
        byTwo = sum * 2;
        byTen = sum * 10;
        
		
	} while (count < NUM_LOOPS);
   
   
	cout << "\nEnd of Program";
   return 0;
}
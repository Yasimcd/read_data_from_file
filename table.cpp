// This program reads data from a file and prints it in a nicely aligned table.
// Yasim Cruz

#include <iostream>
#include <fstream>  
#include <string>  
using namespace std;

int main()
{
   string code,            // Item code of an inventory item
          description;     // Description of an inventory item
   int quantity;           // Quantity in stock of an inventory item
   
   ifstream dataIn;        // Define an input file stream object
   
   // WRITE A STATEMENT TO OPEN THE table.dat FILE THAT WILL BE 
   // ACCESSED THROUGH THE dataIn FILE STREAM OBJECT. 
   dataIn.open("table.dat");
   // Print table heading
   cout << "     Warehouse Inventory      \n";
   cout << "==============================\n\n";
	cout << "Item        Item          Item\n";
	cout << "Code     Description       Qty\n\n";
   
   // Read in five data records and display them
   dataIn >> code >> description >> quantity;        // Record 1
   cout   << code << "    " << left << setw(14) << description << right << setw(7)<< quantity << endl;
   
   // REPEAT THE ABOVE CODE FOR RECORDS 2 THROUGH 5.
   dataIn >> code >> description >> quantity;        // Record 2
   cout   << code << "    " << left << setw(14) << description << right << setw(7)<< quantity << endl;
   
   dataIn >> code >> description >> quantity;        // Record 3
   cout   << code << "    " << left << setw(14) << description << right << setw(7)<< quantity << endl;
   
   dataIn >> code >> description >> quantity;        // Record 4
   cout   << code << "    " << left << setw(14) << description << right << setw(7)<< quantity << endl;
   
   dataIn >> code >> description >> quantity;        // Record 5
   cout   << code << "    " << left << setw(14) << description << right << setw(7)<< quantity << endl;
   // Close the file
   dataIn.close();             
   
   return 0;
}

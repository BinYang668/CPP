#include <iostream>
#include <iomanip>
using namespace std;

const int edgeMin(1);
const int edgeMax(2);
const int colwidth(6);

void printHeadline() {
    cout << setfill('=') 
    << setw((colwidth * 2 + edgeMax + edgeMin) * 6 + edgeMax +1) << "\n";
} 

int main()
{
	char letter;
    

    
    // Print header
    printHeadline();    
    cout << "||";
    for (int j = 1; j <= 6; j++)
    { 
        cout << " Code " << "|" << " Char " << "||";
    }    
    cout << "\n";
    printHeadline();    


    // print body
	letter = 32;
    
    cout << "||";
	for(int count = 32; count <= 127; count++)
	{	
        
        cout << setfill(' ') <<setw(colwidth) << count 
        << "|" << setw(colwidth) << letter << "||";
	    
        if (count % 6 == 1)
        {
            cout << "\n";
            if (count != 127)
            cout << "||";
        }		

        letter++;
        
	} 
  
  // print the end
  printHeadline();
  return 0;
}
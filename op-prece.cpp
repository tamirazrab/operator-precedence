#include <iostream>

using namespace std;

enum precedence = {
	lower,
	higher,
	equal,
	join
};

void matrix_value(void)
{

 cout << "Operator Precedence";

 for(int i=0; i<5; i++)
 {
    cout << stack_op[i];
 }
 cout << endl;

 for(int i=0;i<5;i++)
 {
   cout << cur_op[i];
   for(int j=0;j<5;j++)
   {
   	switch( matrix[i][j] ) {
   		case precedence.lower:
   			cout << "<"; 
   			break;
   		case precedence.higher:
   			cout << ">";
   			break;
   		case precedence.equal:
   			cout << "=";
   			break;
   		case precedence.join:
   			 cout << " ";
   			 break;
	   }
        
            
    }
	cout << endl;
 }

}



int main() {
	
	return 0;
}

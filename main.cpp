// simple reversing challenge by 0x913
// written february the 10th 2020

#include <iostream>

using namespace std;

int main(){
    
    int x;
    
    int y = 1928642823;
    
    int a = 144677;
    
    int b = 43;
    
    /*
     The "key" is : 1928787543
    */
    
    cout << "Please Enter a valid License Key\n";
    
    cin >> x;
    
    cout << "your key is\n" << x << "\n";
    
    if(x > y+a+b)
	{
		cout<< "\n This is not a valid key \n";
	}
	
	if(x < y+a+b)
	{
		cout<< "\n This is not a valid key \n";
	}
	
	if(x == y+a+b)
	{
		cout<< "\n Right Licensekey \n";
    }
    
    system("pause");
    
    return 0;
    
}

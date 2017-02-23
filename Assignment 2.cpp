#include <iostream>

using namespace std;

int main()
{
    cout<< "This program converts meter into feet"<<endl;
    cout<< ""<<endl;

    int length;                                          
    //you did not use the declared variable length anywhere, so this line is useless
    
    cout<< "Enter a value of length in meter"<<endl;

    float meter;
    //declare variables all together if you have just one code body
    //since you did not use int length, float meter isn't conflicting. But if you did int variables wouldn't be able to handle float inputs.
    
    cin>> meter;

    float feet = meter * 3.28084;
    //declare feet as a float before defining/use it, preferably in the same line in float meter.
    //example: float meter, feet;

    cout<< "Length in feet = " <<feet<< endl;

    return 0;
}

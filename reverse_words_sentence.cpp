/******************************************************************************
                              Juan Rodriguez Pacheco
*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input = "Hello word juanr beber salir";
    string output;
    size_t x=0;
    
    for(int i=input.length()-1; i >= 0; i--){
        if(input[i] == ' '){
            x=output.length();
            output.insert(x,1,input[i]);
            x++;
        }
        else
            output.insert(x,1,input[i]);   
    }
    cout<<output;
    return 0;
}

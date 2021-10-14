#include<bits/stdc++.h> 
#include<fcntl.h> 
#include<errno.h> 
using namespace std;
extern int errno; 
int main() 
{       
    int fopen = open("input.txt", O_RDONLY | O_CREAT);  
      
    if(fopen>=0)
	{cout<<"File successfully opened. \n";
	cout<<"File Descriptor Used = "<<fopen<<endl; 
     } 
    else if (fopen ==-1) 
    { 
        cout<<"Oops! An error occoured.  Could not open the file."<<endl;
        cout<<"Error Number "<<errno<<endl; 
          
        // print program detail "Success or failure" 
        perror("Program");                  
    } 
    return 0; 
} 

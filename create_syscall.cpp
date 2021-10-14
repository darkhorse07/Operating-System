#include<bits/stdc++.h> 
#include<fcntl.h> 
#include<errno.h> 
using namespace std;
extern int errno; 
int main() 
{       
    int fopen = creat("newfile.txt", 0777);  
      
    if(fopen>=0)
	{cout<<"File successfully created. \n";
	cout<<"File Descriptor Used = "<<fopen<<endl; 
     } 
    else if (fopen ==-1) 
    { 
        cout<<"Oops! An error occoured.  Could not created the file."<<endl;
        cout<<"Error Number "<<errno<<endl; 
          
        // print program detail "Success or failure" 
        perror("Program");                  
    } 
    return 0; 
} 

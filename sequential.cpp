#include <iostream>
using namespace std;

int main(){
	cout<<"Enter the total space in the memory: ";
	int n;
	cin>>n;
	int memory[n]={0};
	int ans=1;

	do{
		if(ans==1)
		{
			cout<<"Enter the file size: ";
				int size;
				cin>>size;
				int c=0;
				int index;
				for(int i=0;i<n;i++)
                {
					if(memory[i]==0)
						{
							c++;
						}
					else
						c=0;

					if(c>=size)
						{
							index=i-size+1;
							break;
						}

				}

				if(c>=size)
				{
					for(int i=index;i<index+size;i++){
							memory[i]=1;
						}

						memory[index]=2;
				}
				else
                {
                    cout<<"No space"<<endl;
                    break;
                }
        }
				else
				{
					cout<<"Enter the number of file to delete: ";
					int num;
					cin>>num;
					int c=0;
					for(int i=0;i<n;i++)
                    {
						if(memory[i]==2){
							c++;
						}

						if(c==num){
							memory[i]=0;
						}

						if(c==num+1){
							break;
						}
					}

					cout<<"File is deleted."<<endl;
				}

		cout<<"Do you want to add more files?(if yes press 1 else press 0) or if you want to delete the file(press 2)";
		cin>>ans;




	}while(ans==1 || ans==2);
}

#include<iostream>
#include<algorithm>
using namespace std;
int LinearSearch(int array[], int n, int num) {
    for(int i=0; i<n; i++) {
        if(array[i] == num) {
            return i;
        }
    }
    return -1;
}


int BinarySearch(int array[], int n, int num) {
    int low = 0;
    int high = n-1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(array[mid] == num) {
            return mid;
        }
        else if(array[mid] < num) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
		int num,n,res,choice;
		char ch;
	cout<<"Enter the number of elements: "<<endl;
	cin>>n;
		int array[n];
	cout<<"Enter the elements in an array:"<<endl;
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	
do{

	cout<<endl<<"Enter the number  to search : \n";
	cin>>num;
	
	cout<<"********************************************************************************"<<endl;
	cout<<"\nPress 1  to search  by linear search.";
	cout<<endl<<"Press 2  to search  by binary search.\n";	    
	cin>>choice;
	switch (choice){	
	case 1:
		{		
	 res=LinearSearch(array,n,num);
	 if(res==-1){
	 	cout<<"Number is not found."<<endl;
	 }
	 else{
	 	cout<<"the number "<<num<<" is at index "<<res<<endl;
	 }
	 		break;
}
	case 2:
		{
				sort(array, array+n);
			 res=BinarySearch(array,n,num);
	 if(res==-1){
	 	cout<<"Number is not found."<<endl;
	 }
	 else{
	 	cout<<"the number "<<num<<" is at index "<<res<<endl;
	 }
			
			break;
		}
		default:
			cout<<"Invalid character entered.";
}
			
			cout<<"Press y to again search";
			cin>>ch;

}while(ch=='y'|| ch=='Y');
	
}

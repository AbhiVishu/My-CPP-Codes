#include <bits/stdc++.h>
using namespace std;

bool myfunction (int i,int j) { return (i<j); }

int main() {
	vector<int> expDate;
	int noOfCups;
	
	cin >> noOfCups;
	
	int cupsEat;
	cin >> cupsEat;
	
	int a=0;
	
//	cout << "Enter 1st" << endl;
	
	for(int i=0; i<noOfCups; ++i){
	    cin >> a;
	    expDate.push_back(a);
	}
	
//	cout << "Leaving 1st..." << endl;
	
	sort (expDate.begin(), expDate.end(), myfunction);
	int count=0;
	int algo=0;
	
	cout << "Enter while" << endl;
	
	while(algo<(noOfCups)){
	
    	int rem=-1;

    	while(rem<cupsEat-1){
    	   // cout << "Esing..." << endl;
    	    if(!expDate.empty()){
    	    expDate.erase (expDate.begin()+0);
    	    count++;
    	    }
    	    ++rem;
    	}
    	count--;
    	
    	for(int i=0; i<expDate.size(); ++i){
    	   /// cout << "Enter subtracting..." << endl;
    	    expDate[i] = expDate[i] - 1;
    	    
    	  //  cout << expDate[i] << ' ';
    	    if(expDate[i] == 0){
    	     //   cout << "Deleting zero" << endl;
    	        count--;
    	        expDate.erase (expDate.begin());
    	        
    	    }
    	}
    	
    	cout << endl;
    	
    //	cout << "Done!!!" << endl;
    	
    // 	++count;
    	++algo;
    	
    //	cout << "COUNT: " << count << endl;
	}
	
//	cout << "Leaving While.." << endl;
	
	cout << noOfCups + count << endl;
}

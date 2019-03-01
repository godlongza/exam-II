#include <iostream>
#include<string>
#include <fstream>
using namespace std;

float sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	
	//Write your code here
    ifstream source("score1.txt");
	string line[20];
	while(getline(source,line[20])){
	
        cout << line[20] << "\n";
	}
    	atof(line[20].c_str());
        
        for(int i = 0; i < 20; i++)
        {
            
        }
        
    
	ifstream s2("rank.txt");
    ofstream dest("rank.txt");
    for(int i = 0; i < 20;i++){
		dest << line[i] << "\n";
	}
    dest.close();
}


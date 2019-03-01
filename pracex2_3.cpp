#include<iostream>
#include <cstdlib>
#include<ctime>
using namespace std;
char alphabet[8][8];
char q[25]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','w','x','y','z'};  
void showAlphabet(int);int randomAlphabet();

int main(){
	srand(time(0));	
	int y ;
	for(int i = 0; i < 10; i++)
	{
	randomAlphabet(); 
	y=randomAlphabet();
	}
	showAlphabet(y);
}
void showAlphabet(int x){
	
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			srand(time(0));
			cout << alphabet[i][j] << q[x] << " ";

		}
		cout << "\n";
	}
}

//Write definition of function randomAlphabet() here.
int randomAlphabet (){
	    
		
		srand(time(0));	
		int x=rand()%25;
		
		return x;
}


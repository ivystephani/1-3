#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	int num;
	bool primo = true; 
	cout<< "Digite um n�mero inteiro:";
	cin>> num;
	
	if (num <= 1){
		primo =false;	
		
	}else {
		for (int i=2; i<= (num); i++) {
			if (num % i== 0){
				primo= false;
				break;
			}
		}
		
	}if (primo) {
		cout << " O n�mero � primo" << endl;		
	}else {
		cout << "O n�mero nao � primo" << endl;	
	} return 0;
	
}

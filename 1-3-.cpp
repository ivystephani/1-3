#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	int num;
	bool primo = true; 
	cout<< "Digite um número inteiro:";
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
		cout << " O número é primo" << endl;		
	}else {
		cout << "O número nao é primo" << endl;	
	} return 0;
	
}

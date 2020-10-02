#include <iostream>

using namespace std;

int swap(int *a, int *b){
	
	int ab;
	
	ab = *a;
	*a = *b;
	*b = ab;
	
}

char swap(char *a, char *b){
	
	char ab;
	
	ab = *a;
	*a = *b;
	*b = ab;
	
}

double swap(double *a, double *b){
	
	double ab;
	
	ab = *a;
	*a = *b;
	*b = ab;
	
}

int main(){
    
   	int num1 = 20 , num2 = 30;
	swap(&num1, &num2);
	cout << num1 << ' ' << num2 << endl;
	
	char ch1 = 'A' , ch2 = 'Z';
	swap(&ch1, &ch2);
	cout << ch1 << ' ' << ch2 << endl;
	
	double db1 = 1.111 , db2 = 5.555;
	swap(&db1, &db2);
	cout << db1 << ' ' << db2 << endl;
     
    return 0;
}

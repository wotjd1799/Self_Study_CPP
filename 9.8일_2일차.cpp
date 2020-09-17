#include <iostream>
//template <typename T>

// 참조형 변수 ( l-value)
// 형식& 이름 ; (l-value) 
// 형식&& 이름 ; (r-value) 임시객체 (연산중의) 
// 반환형식 호출규약 함수이름(매개변수) 

/*____________________________________________________________________________________________
int Test(int a = 0){
	return a * 10;
}
//______________________________________________________________________________________________*/
/*
int Add(int a, int b){
	return  a + b;
}
int Add(int a, int b, int c){
	return a+b+c;
} 
double Add(double a, double b){
	return a + b;
}
//___________________________________________________________________________________________________*/
/*
T TestFunc(T a){
	std::cout << "매개변수 a : " << a << std::endl;
	return a;
}
//_____________________________________________________________________________________________*/
/*
inline int Add(int a, int b){
	
	return a + b;
	
}
//_________________________________________________________________________________*/
/*
int num;

namespace aaa {
	int num;
	namespace bbb{
		int num;
	}
}
using namespace std;
//____________________________________________________________________________________________*/

int main(){
//___________________________________________________________________________________________________
	/*
	int a(10);
	int b(20);
	int& pa(a); // l-value 참조 
	
	std::cout << &pa << ' ' << &a << std::endl ;
	pa = b;
	a = 10;
	a = b;
	 
	std::cout << pa << ' ' << a << std::endl ;
//____________________________________________________________________________*/
/*
	int a(10); 
	
	int&& rD(10+10);
//_______________________________________________________________________________*/
/*
	int nArr[5] = {20,30,10,40,50};
	for ( int i = 0 ; i < 5 ; i++ )
		std::cout << nArr[i] << ' ';
	// 범위기반 for문 
	std::cout << ' ';
	
	for ( auto n: nArr )
		std::cout << n << ' '; 
//_________________________________________________________________________________________________________*/
	
	//std::cout << Test(20) << std::endl;
//____________________________________________________________________________________________________________*/
/*	
	std::cout	<<	Add(3,	4)	<<	std::endl;
	std::cout	<<	Add(3,	4,	5)	<<	std::endl;
	std::cout	<<	Add(3.3,	4.4)	<<	std::endl;
//_________________________________________________________________________________________________*/
/*	
	std::cout	<<	"int	\t"	<<	TestFunc(3)	<<	std::endl;
	std::cout	<<	"double	\t"	<<	TestFunc(3.3)	<<	std::endl;
	std::cout	<<	"char	\t"	<<	TestFunc('A')	<<	std::endl;
	std::cout	<<	"char*	\t"	<<	TestFunc("TestString")	<<	std::endl;
//______________________________________________________________________________________________________*/
/*	
	??
//__________________________________________________________________________________________________________*/
/*	
	::num = 10;
	aaa::num = 20;
	aaa::bbb::num = 30;
	cout << num << ' ' << aaa::num << ' ' << aaa::bbb::num << endl;	
//___________________________________________________________________________________________________________*/
	return 0;
} 

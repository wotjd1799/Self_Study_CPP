#include <iostream>
using namespace std;

// 접근 제어 지시자 // 클래스
// public : 외부에서 멤버 모두 접근허용
// protected : 외부에서 일단 차단 + 파생클래스 허용
// private :  외부에서 모두 차단! 


// 생성자 : 객체를 생성할때 홏ㄹ되는 함수(자동으로)
// 소멸자 : 객체를 소멸할때 호출되는 함수(자동으로)
// 클래스 이름 = 함수이름
// 반환형식 x,  소멸자 ~함수이름
// 생성자 > 멤버 변수를 초기화
//			다중정의 가능(매개변수 갯수, 타입)
// 소멸자 > 클래스당 하나로 유일! 
class Cmydata{
	
	
	int& m_ndata; // default = private 
	/*
	public:
		int GetData(){
			return m_ndata; 
		}
		void SetData(int nParam){
			m_ndata = nParam;
		}
		*/
		/*
	public:
		Cmydata(){
			cout << "Cmydata() 생성자 " << endl;
		}
		~Cmydata(){ 
			cout << "Cmydata() 소멸자 " << endl;
		}*/
		
	public:
//		Cmydata(){
//			m_ndata = 0;
//			cout << "Cmydata() 생성자 " << endl;
//		}
		Cmydata(int& n):m_ndata(n){ 
//			m_ndata = n;
			cout << "Cmydata(int n) 생성자 " << endl;
		}
		~Cmydata(){ 
			cout << "~Cmydata() 소멸자 " << m_ndata<< endl;
		}

		
	

};

int main(){
	
	cout << "main() 시작 " << endl;
	int a(10);
	Cmydata b(a);
	a = 20;
//	Cmydata * pa[5];
	/*
	for ( int i = 0 ; i < 5 ; i++ ){
		pa[i] = new Cmydata(i*10);
	}
	for ( int i = 0 ; i < 5 ; i++ ){
		delete pa[i];
	}*/
//	for ( auto& n : pa ){
//		n = new Cmydata(10);
//	}
//	
//	for ( auto& n : pa ){
//		delete n;
//	}
	
//	Cmydata a(10);
//	Cmydata* pa = new Cmydata[5]{1,2,3};
//	delete [] pa;
//	a.m_ndata;
/*
	a.SetData(10);
	cout << a.GetData() << endl;*/
	
	cout << "main() 끝 " << endl;
	return 0;
}



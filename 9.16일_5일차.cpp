#include <iostream>

using namespace std;

class CtestRef{
	int& ref;
	
//	public:
////	CtestRef(){ << ���� 
//		CtestRef(int& n) : ref(n){
//			
//		}
//		~CtestRef(){
//		
//		}
//		void Print(){
//			cout << ref << endl;
//		}
};

///*
class Ctest{
	int m_ndata;
	
	public:
//		Ctest() : m_ndata(){ //����Ʈ ������ 
//		//	m_ndata = 0;  
//		// ������� �ʱ�ȭ 	
//		}
//		Ctest(int nParam) : m_ndata(nParam){
//		//	m_ndata = nParam;
//			cout << m_ndata << endl;
//		}
//		Ctest(int x, int y) : m_ndata(x+y){
//		//	m_ndata = x + y;	
//			cout << m_ndata << endl;
//		}
		int m_x, m_y;
		Ctest(int x) : m_ndata(x){
			if (x > 10){
				x = 10;
			}
			m_x = x;
		}
		Ctest(int x, int y) : Ctest(x){ //������ ���� 
			if (y > 10){
				y = 10;
			}
			m_y = y;
		}
		~Ctest(){}
		void Print() {
			cout << m_x + m_y << endl;
		}
			
};//*/

int main(){
	
//	Ctest a;
//	Ctest b(10);
//	Ctest c(10,5);
//	Ctest* np = new Ctest[2] {{1,2},{1}};
	Ctest a(8, 7);
	Ctest b(12, 15);
	a.Print();
	b.Print();
	
	
	return 0;
}

#include <iostream>
using namespace std;

// ���� ���� ������ // Ŭ����
// public : �ܺο��� ��� ��� �������
// protected : �ܺο��� �ϴ� ���� + �Ļ�Ŭ���� ���
// private :  �ܺο��� ��� ����! 


// ������ : ��ü�� �����Ҷ� �M���Ǵ� �Լ�(�ڵ�����)
// �Ҹ��� : ��ü�� �Ҹ��Ҷ� ȣ��Ǵ� �Լ�(�ڵ�����)
// Ŭ���� �̸� = �Լ��̸�
// ��ȯ���� x,  �Ҹ��� ~�Լ��̸�
// ������ > ��� ������ �ʱ�ȭ
//			�������� ����(�Ű����� ����, Ÿ��)
// �Ҹ��� > Ŭ������ �ϳ��� ����! 
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
			cout << "Cmydata() ������ " << endl;
		}
		~Cmydata(){ 
			cout << "Cmydata() �Ҹ��� " << endl;
		}*/
		
	public:
//		Cmydata(){
//			m_ndata = 0;
//			cout << "Cmydata() ������ " << endl;
//		}
		Cmydata(int& n):m_ndata(n){ 
//			m_ndata = n;
			cout << "Cmydata(int n) ������ " << endl;
		}
		~Cmydata(){ 
			cout << "~Cmydata() �Ҹ��� " << m_ndata<< endl;
		}

		
	

};

int main(){
	
	cout << "main() ���� " << endl;
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
	
	cout << "main() �� " << endl;
	return 0;
}



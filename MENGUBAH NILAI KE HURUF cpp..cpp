#include<iostream>
using namespace std;
int main (){
	
	int nilai;
	cout<<" Nilai Angka = ";
	cin>>nilai;
	if ((nilai >80)&&(nilai <100))
	{
		cout << "Nilai Hurufnya Adalah A" << endl;
	}
	else if((nilai >60)&&(nilai <80))
	{
		cout << "Nilai Hurufnya Adalah B" << endl;
	}
	else if((nilai <40)&&(nilai <60))
	{
		cout<< "Nilai Hurufnya Adalah C" << endl;
	}
	else if((nilai <20)&&(nilai <40))
	{
		cout <<"Nilai Hurufnya D" << endl;
	}
	else if((nilai <0)&&(nilai <20))
	{
		cout <<"Nilai Hurufnya E" << endl;
	}
	else
	{
		cout <<" Nilai Yang Anda Masukan Salah ...... ! "<< endl;
	}
	
	return 0;
}

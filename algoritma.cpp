#include<iostream>
using namespace std;
int main()
{
	int i, n, nim[5];
	int algo[5], fis[5], kal[5];
	float r, rata[5];
	cout<<"Masukan Jumlah Data Yg Diinput = "; cin>>n;
for(i=0;i<n;i++)
	{
		cout<<"Data Ke "<<i+1<<"\n-Masukan NIM = "; cin>>nim[i];
		cout<<"Masukan Nilai Algoritma\t= "; cin>>algo[i];
		cout<<"Masukan Nilai Fisika\t= "; cin>>fis[i];
		cout<<"Masukan Nilai Kalkulus\t= "; cin>>kal[i];
		// rumus
		r=algo[i]+fis[i]+kal[i];
		rata[i]=r/3;
	}
	cout<<"\n\t\t\t\tDAFTAR NILAI\n";
	cout<<"--------------------------------------------------------------------------------\n";
	cout<<"NO\t"<<"NIM\t"<<"ALGORITMA\t"<<"FISIKA\t"<<"KALKULUS\t"<<"RATA\t"<<"KET.."<<endl;
	cout<<"--------------------------------------------------------------------------------\n";

for(i=0;i<n;i++)
	{
		cout<<i+1<<"\t"<<nim[i]<<"\t"<<algo[i]<<"\t\t"<<fis[i]<<"\t"<<kal[i]<<"\t\t"<<rata[i]<<"\t";
		if(rata[i]>=65)
		 cout<<"LANJUT\n";
		 else
		 cout<<"MENGULANG\n";
	}
	
}

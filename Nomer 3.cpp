#include<iostream>
#include<cstring>
#include<string>

using namespace std;

class Kalimat{
	private:
	char *huruf;
	char alpha;
	int counter;
	
	public:
	Kalimat();
	~Kalimat(){}
	void setData(char*);
	void analysis();
	void print(char,int);
};

Kalimat::Kalimat()
{
	counter=0;
	huruf=0;
	
}
void Kalimat::setData(char*sentence)
{
	huruf=new char [10000];
	strcpy(huruf,sentence);
	counter=0;
}
void Kalimat::analysis()
{
	for(alpha='a';alpha<='z';alpha++)
{
	for(int j=0;*(huruf+j)!='\0';j++)
{
	if(*(huruf+j)==alpha)
	counter++;	
}
print(alpha,counter);
counter=0;
}
}
void Kalimat::print(char alpha,int counter)
{
	cout<<"Character"<<alpha<<"="<<counter<<endl;
}
int main()
{
	Kalimat obj;
	char sentence[10000];
	cout<<"Masukan Kalimat Yang Akan Dihitung !:";
	cin.getline(sentence,10000);
	obj.setData(sentence);
	cout<<"Hasil Perhitungan: \n";
	obj.analysis();
	return 0;
}
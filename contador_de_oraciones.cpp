#include<iostream>
using namespace std;

int main()
{
	char c1[20];
	int cont=1;
	int esp=32;
	
	cout<<"coloca una frase :";
	cin.getline(c1,20,'\n');
	
		int palabras=1;
	for(int i=0;c1[i];i++)
	{
		if(c1[i]==esp && c1[i+1]!=32)
			cont++;
	}
	cout<<cont;
	
	return 0;
}

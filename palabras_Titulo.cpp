#include<iostream>
#include<stdlib.h>
#include<cstring>
using namespace std;
int Titulo(char cad[]);

int main()
{
	char cad[200];
	cout<<"Coloca una frase: ";
	cin.getline(cad,200,'\n');
	 cout<<"Titulos: ";
    Titulo(cad);
}

int Titulo(char cad[])
{
	int esp=32;
	for(int i=0;cad[i];i++)
	{
		if(cad[i]>='a' && cad[i]<='z')
		{
			if(i==0)
				cad[i]-=esp;
	    }
		else
		{
			if(cad[i]==esp && cad[i+1]!=32)
				cad[i+1]-=esp;
		}
	}
	cout<<cad;
}


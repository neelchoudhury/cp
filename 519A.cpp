#include<bits/stdc++.h>

using namespace std;

int main()
{
	char a[8][9];
	int w=0,b=0;
	for(int i=0; i<8; i++)
	{
		scanf("%s", a[i]);
	}
	for(int i=0;i<8; i++)
	{
		for(int j=0; j<8; j++)
		{
			switch(a[i][j])
			{
				case 'Q': {
					w+=9;
					break;
				}
				case 'q':{
					b+=9;
					break;
				}
					case 'R': {
					w+=5;
					break;
				}
				case 'r':{
					b+=5;
					break;
				}
					case 'B': {
					w+=3;
					break;
				}
				case 'b':{
					b+=3;
					break;
				}
					case 'N': {
					w+=3;
					break;
				}
				case 'n':{
					b+=3;
					break;
				}
					case 'P': {
					w+=1;
					break;
				}
				case 'p':{
					b+=1;
					break;
				}
				
			}
		}
	}
	if(w>b)
		cout<<"White"<<endl;
	else if(b>w)
		cout<<"Black"<<endl;
	else
		cout<<"Draw"<<endl;
	return 0;
}

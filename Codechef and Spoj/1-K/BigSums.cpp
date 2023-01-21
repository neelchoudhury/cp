#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

int main()
{
	int t;
	char q[402];
	int a[200],b[200],c[201];
	
	cin>>t;
		char d='d';
	while(t--)
	{
		for(int i=0; i<200; i++)
		{
			a[i]=0;
			b[i]=0;
			c[i]=0;
		}
		c[200]=0;
		scanf("%s",q);
		char ch;
		int m;
		for(int i=0; i<strlen(q); i++)
		{
			if(q[i]=='+' or q[i]=='-')
			{
				ch=q[i];
				m=i;
			}
		}
		//cout<<"ch: "<<ch<<" m: "<<m<<endl;
		for(int i=m-1; i>=0; i--)
		{
			char ch1[2];
			ch1[0]=q[i]; 
			a[m-1-i]=atoi(ch1);
			//cout<<a[m-i-1];
		}
		int l=strlen(q);
		//cout<<endl;	
		for(int i=l-1; i>=m+1;i--)
		{ 
			char ch1[2];
			ch1[0]=q[i];
			b[l-1-i]=atoi(ch1);
			//cout<<b[l-1-i];
		}
		//cout<<endl;
		switch(ch)
		{
			case '+':
				{
					//cout<<"Adding"<<endl;
					int cr=0;
					if(m>=strlen(q)-m-1)
					{
						for(int i=0;i<m+1; i++)
						{
							c[i]=(a[i]+b[i]+cr)%10;
							cr=(a[i]+b[i]+cr)/10;
							//cout<<c[i]<<" = "<<a[i]<<" + "<<b[i]<<endl;
						}
						//cout<<endl;
					}
					
					else
					{
						for(int i=0;i<strlen(q)-m; i++)
						{
							c[i]=(a[i]+b[i]+cr)%10;
							cr=(a[i]+b[i]+cr)/10;
							//cout<<c[i]<<" = "<<a[i]<<" + "<<b[i]<<endl;
						}
							//cout<<endl;
					}
				
					break;
				
				}
			case '-':
				{
					//cout<<"Subtracting"<<endl;
					int cr=0;
					if(m>l-m-1)
					{
						for(int i=0;i<m+1; i++)
						{
								if(a[i]-b[i]-cr<0)
											{
												c[i]=(a[i]-b[i]-cr+10)%10;
												cr=1;
											}
											else
											{
												c[i]=(a[i]-b[i]-cr)%10;
												cr=(a[i]-b[i]-cr)/10;
											}
							//cout<<c[i]<<" = "<<a[i]<<" + "<<b[i]<<endl;
						}
					}
					else if(m>l-m-1)
					{
						for(int i=0;i<l-m; i++)
						{
							
							if(a[i]-b[i]-cr<0)
											{
												c[i]=(a[i]-b[i]-cr+10)%10;
												cr=1;
											}
											else
											{
												c[i]=(a[i]-b[i]-cr)%10;
												cr=(a[i]-b[i]-cr)/10;
											}
							//cout<<c[i]<<" = "<<a[i]<<" + "<<b[i]<<endl;
						}
						//c[l-m-1]=c[l-m-1];
					}
					else
					{
						//cout<<"Equal entered:"<<endl;
					
						for(int i=m;i>=0; i--)
						{
							if(a[i]>b[i])
							{
								d='a';
								break;
							}
							else if(b[i]>a[i])
							{
								d='b';
								break;
							}
						}
						//cout<<"d:  "<<d<<endl;
							switch(d)
							{
								case 'a':
									{
										//cout<<"a entered"<<endl;
										cr=0;
										for(int i=0; i<m+1; i++)
										{
											if(a[i]-b[i]-cr<0)
											{
												c[i]=(a[i]-b[i]-cr+10)%10;
												cr=1;
											}
											else
											{
												c[i]=(a[i]-b[i]-cr)%10;
												cr=(a[i]-b[i]-cr)/10;
											}
											//cout<<c[i]<<" = "<<a[i]<<" + "<<b[i]<<endl;
										}
										break;
									}
									case 'b':
									{
										//cout<<"b entered"<<endl;
												cr=0;
										for(int i=0; i<m+1; i++)
										{
											if(b[i]<a[i])
											{
												c[i]=(b[i]-a[i]-cr+10)%10;
												cr=1;
											}
											else
											{
												c[i]=(b[i]-a[i]-cr)%10;
												cr=(b[i]-a[i]-cr)/10;
											}
											//cout<<c[i]<<" = "<<a[i]<<" + "<<b[i]<<endl;
										}
								
										break;
									}
									case 'd':
										{
											c[0]=0;
										}
							}
						
					}
					break;
				}
		}
		cout<<endl;
		int flag=0;
		int o=0;
		if(m>l-m-1)
	 	{
	 		if(c[m]==0)
	 			flag=0;
	 		else
	 			flag=1;
	 		for(int i=m;i>=0; i--)
	 		{
	 			if(flag==0)
	 			{
	 				if(c[i]!=0)
	 				{
	 						flag=1;
	 						 
	 				}
	 			}
	 			if(flag==1  )
	 			{
	 				cout<<c[i];
	 			 
	 			}
	 		 
	 		}
	 		if(flag==0)
	 			cout<<0;
	 	}
	 	else
	 	{	
	 		o=0;
	 		if(ch=='-' and d=='b')
	 		{
	 			if(c[l-m-1]==0)
	 				flag=0;
	 			else
	 				flag=1;
	 			for(int i=l-m-1;i>=0; i--)
	 			{
	 				if(flag==0)
	 				{
	 					if(c[i]!=0)
	 					{
	 						flag=1;
	 						o++;
	 					}
	 				}
	 				if(flag==1 and o==1)
	 				{
	 					cout<<c[i]*(-1);
	 					o++;
	 				}
	 				else if(flag==1 and o!=1)
	 				{
	 					//cout<<"Sign not coming";
	 					cout<<c[i];
	 					o++;
	 				}
	 			}
	 			if(flag==0)
	 				cout<<0;
	 		}
	 		else
	 		{
	 			if(c[l-m-1]==0)
	 				flag=0;
	 			else
	 				flag=1;
	 			for(int i=l-m-1;i>=0; i--)
	 			{
	 				if(flag==0)
	 				{
	 					if(c[i]!=0)
	 						{
	 							flag=1;
	 						 
	 						}
	 				}
	 				if(flag==1 )
	 				{
	 					cout<<c[i];
	 				 
	 				}
	 			}
	 			if(flag==0)
	 			cout<<0;
	 		}
	 	
	 	}
		cout<<endl;
	}
	return 0;
}

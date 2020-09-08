#include<iostream>
#include<cmath>
//Use quadratic Concept
using namespace std;
 
 
int main(){
    int T;
    cin>>T;
    while(T--)
    {
 
	    double A,B,C,K,c;
 
    	cin>>A>>B>>C>>K;
        c= C-K;
        double  D;
        D = B*B - 4*A*c;
        //cout<<D<<endl;
        if(D <=0)
            cout<<"0"<<endl;
        if(D>0){
            double r1,r2;
            r1 = (-B+sqrt(D))/(2*A);
            r2 = (-B-sqrt(D))/(2*A);
            //cout<<r1<<" "<<r2<<endl;
            if(r1<0 && r2<0)
                cout<<"0"<<endl;
            else if(r1>0 && r2>0){
                if(r1>r2)
                    cout<<(int)r2<<endl;
                else
                    cout<<(int)r1<<endl;
            }
            else{
                if(r1>=0){
                    if((int)r1 == r1)
                        cout<<r1<<endl;
                    else
                        cout<<(int)(r1+1)<<endl;
                }
                else{
                    if((int)r2 == r2)
                        cout<<r2<<endl;
                    else
                        cout<<(int)(r2+1)<<endl;
                }
 
            }
        }
    }
    	return 0;
 
}

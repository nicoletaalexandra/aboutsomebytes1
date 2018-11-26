
#include<iostream>
using namespace std;
unsigned int n;
unsigned int ziua;
unsigned int luna;
unsigned int anul;
unsigned int cod=0;
int main()
{
        cout<<" Day = ";cin>>ziua;
        cout<<" Month= ";cin>>luna;
        cout<<" Year = ";cin>>anul;
        cout<<endl<<"(dd/mm/yy)=1;(dd/mm/yy)=2";
int code;
cout<<endl<<"code=";cin>>code;
if (code==1)
    {
        cout<<endl<<" French format "<<endl;

        ziua=ziua<<27;
        n=n|ziua;
        luna=luna<<23;
        n=n|luna;
        anul=anul<<21;
        n=n|anul;
        cout<<endl<<"french format="<<endl;
        cout<<n}

else

if (code==2)
   {luna=luna<<28;
    n=n|luna;
    ziua=ziua<<23;
    n=n|anul;
    n=n|ziua;
    cout<<"english format"<<endl;
    cout<<n;}
else
{ cout<<endl<<" Sorry , no bananas today !"; }
return  0;
}

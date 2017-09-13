
#include"string"
#include"iostream"
using namespace std;
int main()
{
	string a;
	  int i,j,t,n,k;
	  k=1;
	  cin>>t;
	  while(t--)
	  {
		 cin>>a;
		 n=a.length();
			
			 if(n>=4&&a[n-4]=='d'&&a[n-3]=='e'&&a[n-2]=='s'&&
				 a[n-1]=='u')
			 {
				 a[n-4]='n';
				 a[n-3]='a';
				 a[n-2]='n';
				 a[n-1]='o';
				 a+="desu";
			 }
			 else 
				 a+="nanodesu";
			 cout<<"Case #"<<k<<": ";
			 cout<<a<<endl;
			 k++;
	  }
}
					 

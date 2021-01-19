ques:  xor profit

	#include<iostream>
	using namespace std;
	
	int main (){
		int x,y;
		cin>>x>>y;
		int ones=~(0);
		if(x==y){
			cout<<x<<" "<<y<<endl;
		}
		else{
			int m1,m2,cnt=0;
			int y1=y;
			int x1=x;
			while(y1 || x1){
				if(y1&1) m1=cnt;
				if(x1&1) m2=cnt;
				y1>>=1;
				x1>>=1;
				cnt++;
			}
			bool g=false;
			for(int i=m1;i>=0;i--){
				int o1=y&(1<<i);
				int o2=x&(1<<i);
				if((o1>0) && (o2==0)){
					g=true;
					continue;
				}
				else if(o1 && o2 && g){
					int s= ((ones<<(i+1)) | ((1<<i)-1));
					y=y&s;
				}
				else if(!o1 && !o2 && g){
					int s= ~(((ones<<(i+1)) | ((1<<i)-1)));
					x=x|s;
				}
				else{
					continue;
				}
			}
			cout<<x<<" "<<y<<endl;
		}
		return 0;
	}


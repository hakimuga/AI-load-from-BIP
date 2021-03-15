#include<iostream>
#include"trace_helper.cpp"

using namespace std;

int main()
{
	int t1,t2,t3,t4,bavg,favg,res_i;
	float res_f;	

	t1=60000000; t2=60000005; t3=60000023; t4=60000054;	
	bavg=40; favg=5;

	res_i = (t2 + t3 - t1 - t4) / 2 + (bavg - favg) / 2;
	res_f = (t2 + t3 - t1 - t4) / 2 + (bavg - favg) / 2;

	//cout<<endl;
	//cout<<res<<endl;
	trace_i("res_i",res_i);
	cout<<"res_f = "<<res_f<<endl;

	return 0;
	
}

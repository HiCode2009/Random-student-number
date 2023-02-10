#include<bits/stdc++.h> 
using namespace std;
string m;
int num;
int main()
{
	cout<<"Choose mode (boy/girl/class):";
	cin>>m;
	srand(time(0)); 
	if(m=="boy") printf("%d %d %d",(rand()%24)+1,(rand()%24)+1,(rand()%24)+1);
	else if(m=="girl") printf("%d %d %d",(rand()%22)+25,(rand()%22)+25,(rand()%22)+25);
	else printf("%d %d %d",(rand()%46)+1,(rand()%46)+1,(rand()%46)+1);
	return 0;
}

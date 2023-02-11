#include<bits/stdc++.h> 
using namespace std;
string m;
int num,b1,b2,g1,g2;
int main()
{
    cout<<"Enter the boy student number range:";
    cin>>b1>>b2;
    cout<<"Enter the girl student number range:";
    cin>>g1>>g2;
	cout<<"Choose mode (boy/girl/class):";
	cin>>m;
	srand(time(0)); 
	if(m=="boy") printf("%d %d %d",(rand()%(b2-b1+1))+b1,(rand()%(b2-b1+1))+b1,(rand()%(b2-b1+1))+b1);
	else if(m=="girl") printf("%d %d %d",(rand()%(g2-g1+1))+g1,(rand()%(g2-g1+1))+g1,(rand()%(g2-g1+1))+g1);
	else 
    {
        int Max=max(b2,g2);
        printf("%d %d %d",(rand()%Max)+1,(rand()%Max)+1,(rand()%Max)+1);
    }
	return 0;
}

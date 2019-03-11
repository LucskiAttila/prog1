#include <iostream>
using namespace std;
int main(){

int n;
cout<<"Adjon meg egy decimalis szamot: ";
cin >> n;
for(int i=1;i<=n;i++){
cout<<"|";
if(i%5==0){cout<<" ";}

}
cout<<"\n";


return 0;
}

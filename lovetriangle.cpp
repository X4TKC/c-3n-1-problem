#include <iostreamu>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int contador,y;
 

    while(std::cin >> contador){

    int num[contador];
    int var1,var2,var3,whilevar;
    bool k=false;
     
    
    for (int i = 0; i < contador; i++)
    {
       
    
         cin >> num[i];
    }
    for (int i = 0; i < contador; i++)
    {
       // whilevar=0;
        var1=num[i];
        var2=num[var1-1];
        var3=num[var2-1];
      if(var1==num[var3-1]&& var1!=var2&&var2!=var3&&var3!=var1){
           k=true;
           
      }
       
    }
    if(k==false){
        cout <<"NO\n";
    }
    else{
        cout <<"YES\n";
    }
        
}
    //while(std::cin>>x>>y){
    
    //}
    //string line;
    
    //getline(cin, line);
    //cin >> line;
    //cout <<x << line << y << "\n";
}

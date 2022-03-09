#include <iostream>
asdasdas
asdaint
sdas
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int x,y;
     int z,q;
    // int x,y;
    // cin >> x >> y;
    // string line;
    
    // getline(cin, line);
    // cin >> line;
    // cout <<x << line << y << "\n";
    while(std::cin>>x>>y){
        int res;
        int res2;
        int var;
    if(x>y){
    res=y;
    res2=x;
    var=y;
    }
    else{
    res=x;
    res2=y;
    var=x;
    }
   // cout << res << res2 <<"\n";
    int resultado=0;
    
      int contador=1;
    while(res<=res2){
        while(res!=1){
        contador++;
        if(res%2==0){
           
            res=res/2;
        }
        else{
            res=(res*3)+1;
        }
     
        }
        var++;
        res=var;
        if(contador>resultado){
        resultado=contador;
         contador=1;
        }
        else{
        contador=1;
        }
    }
    cout  << x <<" "<< y <<" "<< resultado << "\n";
    }
    return 0;
}

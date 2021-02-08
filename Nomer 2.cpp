#include <iostream>
using namespace std;
int main()
{
    int bil[11], n, i, j, temp, total, trbesar, trkecil;
    double rata;
    total=0;
    
    for (n=1; n<=11; n++){
        cout << "Bilangan ke [ "<< n <<" ] : ";
        cin >> bil[n];
        total=total+bil[n];
  		rata=total/11;
  		if(n==1){
   trbesar=bil[n];
   trkecil=bil[n];
  }
  else if(trkecil>bil[n]){
   trkecil=bil[n];
  }
   else if (trbesar<bil[n]){
    
    trbesar=bil[n];
   }
    else { } 
  
 }

    cout << "\nHasil pengurutan bilangan besar ke kecil : " <<endl;
    for (i=1; i<=11; i++){
        for (j=1; j<=11; j++){
            if (bil[i] > bil[j]){
                temp = bil[i];
                bil[i] = bil[j];
                bil[j] = temp;
            }
        }
    }
    for (i=1; i<=11; i++){
        cout << bil[i] << ", ";
    }
    
 
 cout<<"\nJumlah Bilangan = "<<total<<endl;
 cout<<"\nRata-rata = "<<rata;
 cout<<"\nBilangan Terbesar = "<<trbesar;
 cout<<"\nBilangan Terkecil = "<<trkecil<<endl;
    
    
    
    return 0;
}
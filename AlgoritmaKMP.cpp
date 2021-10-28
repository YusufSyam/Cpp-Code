    /*

     * Implementasi Knuth�Morris�Pratt Algorithm (KMP)

     */

    #include <iostream>

    #include <cstring>

    using namespace std;

    void preKMP(string pattern, int f[]){
        int m = pattern.length(), k;
        
        f[0]= -1;
        for (int i=1; i<m; i++){
            k = f[i-1];

            while (k >= 0){
                if (pattern[k] == pattern[i - 1]) break;
                else k = f[k];
            }
			
            f[i] = k + 1;
            cout << f[i];
        }
    }

    bool KMP(string pattern, string target){
        int m= pattern.length();
        int n= target.length();
        int f[m];     

        preKMP(pattern, f);     

        int i= 0;
        int k= 0;        

        while (i<n){
            if (k == -1){
                i++;

                k = 0;
            }

            else if (target[i] == pattern[k]){
                i++;
                k++;

                if (k==m) return 1;
            }
            else k= f[k];
        }

        return 0;

    }

    int main(){

        string tar;

        string pat;
        
        
  		printf("Masukkan String : ");
        cin >> tar;
        
        
  		printf("Masukkan Kata yang ingin dicari : ");
        cin >> pat;

        if (KMP(pat, tar)) cout<<"'"<<pat<<"' ditemukan pada '"<<tar<<"'"<<endl;
        else cout<<"'"<<pat<<"' tidak ditemukan pada '"<<tar<<"'"<<endl;

        return 0;
    }

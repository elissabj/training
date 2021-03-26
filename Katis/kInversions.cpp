//https://open.kattis.com/problems/kinversions

#include <bits/stdc++.h>
using namespace std;

typedef complex<double> comp;
typedef vector<comp> Vec;

//const double PI = acos(-1.0);

void fft(vector<comp> &a, int sign = +1){
    int n = a.size();

    for (int i = 1, j = 0; i < n - 1; ++i)
    {
        for (int k = n >> 1; (j ^= k) < k; k >>= 1);

        if (i < j) swap(a[i], a[j]);
    }

    double theta = 2 * atan2(0, -1) * sign;

    for (int m, mh = 1; (m = mh << 1) <= n; mh = m)
    {
        comp wm(cos(theta / m), sin(theta / m)), w(1, 0);

        for (int i = 0; i < n; i += m, w = comp(1, 0))
            for (int j = i, k = j + mh; j < i + mh; ++j, ++k, w = w * wm)
            {
                comp x = a[j], y = a[k] * w;
                a[j] = x + y;
                a[k] = x - y;
            }
    }

    if (sign == -1)
        for (comp &p : a) p = p / (1. * n);
}


int nearestPowerOfTwo(int n){
 int ans = 1;
 while(ans < n){
  ans <<= 1;
 }
 return ans;
}


Vec multiply(Vec A, Vec B){
  int m = A.size(), n = B.size();
  int size = m + n - 1;
  int N = nearestPowerOfTwo(size);
  A.resize(N);
  B.resize(N);
  
  fft(A, 1);
  fft(B, 1);
  Vec C(N);
  
  for(int i = 0; i < N; i++){
   C[i] = A[i]*B[i];
  }
  fft(C, -1);
  return C;
} 

int main (){
 string s;
 cin>>s;
 vector<comp>a(s.size(), 0);
 vector<comp>b(s.size(), 0);
 for(int i = 0; i < s.size(); i++){
  if(s[i] == 'A')
   a[i] = 1;
    else
      b[i] = 1;
 }
 
 reverse(a.begin(), a.end());
 /*for(int i = 0; i < b.size(); i++){
     if(b[i].real() == 0)b[i] = 1;
     else b[i] = 0;
 }*/
 
 vector<comp> res;
 res = multiply(a, b);
 for(int i = s.size()-2; i >= 0; i--)
     cout<<(long long)(round(res[i].real()))<<"\n";
     //if(i > 0)cout<<"\n";
 return 0;
}


#include <bits/stdc++.h>

using namespace std;
                             
int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);          
  int tt;
  cin >> tt;
  while (tt--) {
  	int n;
  	cin >> n;
  	vector<float> a(n);
  	for (int i = 0; i < n; i++) {
  		cin >> a[i];
  	}
  	// view the image in this repository for better understanding
  	// create a set to locate different areas of a triangle pasture
  	set<float> s;
  	for (int i = 0; i < n; i++) {
  		for (int j = i + 1; j < n; j++) {
  			// check if the area formed by two points (base = next point - current point)
  			// and (0, 1) as the height can create an nonzero area
  			// if yes, then insert it into the set
  			float area = 0.5 * (a[j] - a[i]);
  			if (area > 0) {
  				s.insert(area);
  			}
  		}
   	}
   	// print the size of the set to find out the distinct areas calculated above
  	cout << s.size() << '\n';
  }
  return 0;
}      
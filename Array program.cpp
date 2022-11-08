1. Array program to display  2 by 3 by 3 matrix.
2.
3. #include <iostream>
4. using namespace std;
5. int main(){
6. int a[2][3][3]={
7.            {{1,2,3},{4,5,6},{7,8,9}},
8.            {{10,11,12},{13,14,15},{16,17,18}}
9. };
10. for(int i=0; i<2; ++i){
11. for(int j=0; j<3; ++j){
12. for(int k=0; k<3;++k){
13. cout<<"a["<<i<<"]["<<j<<"]["<<k<<" ]= "<<a[i][j][k];
14. }
15. }
16. } 
17. return }
// Debug ques1

// #include<iostream>
// using namespace std;
// int main() {
// 	char c;
//     cin>>c;
//     if('a'<=c || c<= 'z'){
//         cout<<0;
//     }
// 	else if('A'<=c || c<= 'Z'){
//         cout<<1;
//     }
//     else{
//         cout<<-1;
//     }
// }

// Debug solution1

// int main() {
// 	char c;
//     cin>>c;
//     if('a'<=c && c<= 'z'){
//         cout<<0;
//     }
// 	else if('A'<=c && c<= 'Z'){
//         cout<<1;
//     }
//     else{
//         cout<<-1;
//     }
// }


// Debug ques2

/*
Pattern
1
23
345
4567
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int i=1;
//     while(i<n){
//         int j = i,count = 1;
//         while(count<i){
//             cout<<j;
//             j = j + 1;
//             count = count + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }

// Debug solution2

// int main(){
//     int n;  
//     cin >> n;   
//     int i=1;    
//     while(i<=n){    
//         int j = i, count = 1;  
//         while(count<=i){    
//             cout<<j;        
//             j = j + 1;      
//             count = count + 1; 
//         }
//         cout<<"\n";
//         i = i + 1;  
//     }
// }


// Debug ques3

// /*
// Pattern
// N = 4
//    *
//   ***
//  *****
// *******
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<n){
//         int j = i,count = 2*n+1,gaps=(n-i-1),k=1;
//         while(k<gaps){
//             cout<<" ";
//             k = k + 1;
//         }
//         int m = 1,ch = count - 2*gaps;
//         while(m<ch){
//             cout<<"*";
//             m = m + 1;
//         }
//         k = 1;
//         while(k<gaps){
//             cout<<" ";
//             k = k + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }

// Debug solution3

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j = i,count = 2*n-1,gaps=(n-i),k=1;
//         while(k<=gaps){
//             cout<<" ";
//             k = k + 1;
//         }
//         int m = 1,ch = count - 2*gaps;
//         while(m<=ch){
//             cout<<"*";
//             m = m + 1;
//         }
//         k = 1;
//         while(k<=gaps){
//             cout<<" ";
//             k = k + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }


// Debug ques4

// /*
// Pattern
// N = 4
// 1
// 22
// 333
// 4444
// */
// #include<iostream>
// using namespace std;

// int main(){
//   int i,j,n;
//     cin>>n;
//     for(i=1;i<n;i++){
//         for(j=1;j<n;j++){
// 	        cout<<i;
//         }
//     cout<<endl;
//     }
// }

// Debug solution4

// #include<iostream>
// using namespace std;

// int main(){
//   int i,j,n;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
// 	        cout<<i;
//         }
//     cout<<endl;
//     }
// }


// Debug ques5

// /*
// Pattern
// N = 4
// 1
// 21
// 321
// 4321
// */
// #include<iostream>
// using namespace std;

// int main(){
//   int i,j,n;
//     cin>>n;
//     for(i=1;i<n;i--){
//        int p;
//         for(j=1;j<n;j++){
//           cout<<p;
//           p--;
//         }
//         cout<<endl;   
//     }
// }

// Debug solution5

// #include<iostream>
// using namespace std;

// int main(){
//   int i,j,n;
//     cin>>n;
//     for(i=1;i<=n;i++){
//        int p=i;
//         for(j=1;j<=i;j++){
//           cout<<p;
//           p--;
//         }
//         cout<<endl;
//     }
// }


// Debug ques6

// /*
// Pattern
// N = 5
// E
// DE
// CDE
// BCDE
// ABCDE
// */
// #include<iostream>
// using namespace std;

// int main() {
//     int i,j,n;;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         char p='A'-i;
//         for(j=1;j<=i;j++){
//             cout<<p;
//             p++;  
//         }
//         cout<<endl;
//     }
// }

// Debug solution6

// #include<iostream>
// using namespace std;

// int main() {
//     int i,j,n;;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         char p='F'- i ; // or 'A'+n-i
//         for(j=1;j<=i;j++){
//             cout<<p;
//             p++;  
//         }
//         cout<<endl;
//     }
// }


// Debug ques7

// /*
// Pattern
// N = 4
//    1
//   232
//  34543
// 4567654
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int no;
//     cin>>no;
//     int i=1;
//     int n = 2*no;
//     while(i<=(no)){
//         int gaps = n-2*i+1,k=1;
//         int j = i;
//         while(k<=gaps/2){
//             cout<<" ";
//             k = k + 1;
//         }
//         int ch = n - gaps + 1, z = (ch+1)/2;
//         while(z>1){
//             cout<<j;
//             j = j - 1;
//             z = z + 1;
//         }
//         j = j - 1;
//         z = (ch-1)/2;
//         while(z>=1){
//             j = j - 1;
//             cout<<j;
//             z = z - 1;
//         }
//         k = 1;
//         while(k<=gaps/2){
//             cout<<" ";
//             k = k + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }

// Debug solution7

// #include<iostream>
// using namespace std;
// int main(){
//     int no;
//     cin>>no;
//     int i=1;
//     int n = 2*no-1;
//     while(i<=(no)){
//         int gaps = n-2*i+1,k=1;
//         int j = i;
//         while(k<=gaps/2){
//             cout<<" ";
//             k = k + 1;
//         }
//         int ch = n - gaps , z = (ch+1)/2;
//         while(z>=1){
//             cout<<j;
//             j = j + 1;
//             z = z - 1;
//         }
//         j = j - 1;
//         z = (ch-1)/2;
//         while(z>=1){
//             j = j - 1;
//             cout<<j;
//             z = z - 1;
//         }
//         k = 1;
//         while(k<=gaps/2){
//             cout<<" ";
//             k = k + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }


// Debug ques8

// /*
// Pattern
// N = 5
//   *
//  ***
// *****
//  ***
//   *
// */
// void printPatt(int n){
//     int i=1;
//     while(i<(n)){
//         int gaps = n-2*i,k=1;
//         if(i>(n)/2){
//             int no = (n+1)/2;
//             gaps = 2*(i%no);
//         }
//         while(k<=gaps/2){
//             cout<<" ";
//             k = k + 1;
//         }
//         int ch = n - 1 - gaps;
//         while(ch>=1){
//             cout<<"*";
//             ch = ch - 1;
//         }
//         k = 1;
//         while(k<=gaps/2){
//             cout<<" ";
//             k = k + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }

// Debug solution8

// #include<iostream>
// using namespace std;

// void printPatt(int n){
//     int i=1;
//     while(i<=(n)){
//         int gaps = n-2*i+1,k=1;
//         if(i>(n)/2){               // if(i>(n+1)/2){
//             int no = (n+1)/2;                       
//             gaps = 2*(i%no);
//         }
//         while(k<=gaps/2){
//             cout<<" ";
//             k = k + 1;
//         }
//         int ch = n + 1 - gaps;     // ch = n - gaps
//         while(ch>1){
//             cout<<"*";
//             ch = ch - 1;
//         }
//         k = 1;
//         while(k<=gaps/2){
//             cout<<" ";
//             k = k + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }
// int main() {
//     printPatt(5);
// }





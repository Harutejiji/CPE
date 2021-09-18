cin輸入為字串時，遇到“空格”、enter, Tab等會表示字串輸入結束。但是，cin讀完之後雖然會忽略這些，他們的指標仍會停留在這些終止符號上。
cin.get( , , )遇到終止字元停止讀取後，指標不向後移動；cin.getline( , , )遇到終止字元結束後，指標移到終止字元後。
getline()是string類的函式，它一般用來輸入string型別的字串，接受空格，與到換行符結束，結束後指標如cin.getline（）一樣會指到換行符之後。


1. cin

　　cin是從檔案輸入流中取出一個int/char/string等。最簡單的用法是輸入一個數字，即

　　　　

#include <iostream> 
using namespace std; 
main () 
{ 
int a,b; 
char c[20];
string str;
cin >> a >> b;
cin >> c;
cin >> str; 
cout << a+b << endl; 
cout << c<< endl;
cout << str << endl;
}
注意：“>>”會過濾掉不可見字元（如空格，enter, Tab等），當輸入為字串時，遇到“空格”、enter, Tab等會表示字串輸入結束。但是，cin讀完之後雖然會忽略這些，他們的指標仍會停留在這些終止符號上。

cin>>noskipws>>input[j];//不想略過空白字元，那就使用 noskipws 流控制

2. cin.get()

用法一：使用cin.get(ch)來將接收到的字元存入 char ch中，如果讀取成功返回非0值，讀取失敗（遇到檔案結束符eof）返回0，可接受空格，回車，Tab等。

#include<iostream>
using namespace std;

int main(){
    char c;
    while(cin.get(c))
        cout.put(c);
    return 0;
}
用法二：使用char ch = cin.get(), 將接收到的字元存入ch中，cin.get()函式的返回值就是這個字元，檔案結束符會返回EOF，一般以-1代表EOF。

#include<iostream>
using namespace std;

int main(){
    char c;
    while((c=cin.get()!=EOF))
        cout.put(c);
    return 0;
}
用法三：cin.get（字元指標，字元個數n，終止字元），讀取n-1個字元，若在n-1個字元之前遇到終止字元，提前結束讀取。

#include<iostream>
using namespace std;

int main(){
    char c[20];
    cin.get(c,10,'\n');
    cout<<c<<endl;
    return 0;
}
或者使用char*, 如下

#include<iostream>
using namespace std;

int main(){
    char* c;
    c = new char[20]; //動態指標使用前需要分配記憶體 
    cin.get(c,10,'\n');
    cout<<c<<endl;
    return 0;
}
 

3. cin.getline()（字元陣列（或指標），字元個數n，終止字元）

cin.getline()，和cin.get()的用法類似，只不過cin.getline（）的終止字元預設為“\n”(換行符)，而且cin.getline與cin.get的區別：cin.get( , , )遇到終止字元停止讀取後，指標不向後移動；cin.getline( , , )遇到終止字元結束後，指標移到終止字元後。

#include<iostream>
using namespace std;
int main(){
    char c[20];
    cin.getline(c,20,'/');
    cout<<c<<endl;
    return 0;
}
 

4. getline()

getline()是string類的函式，它一般用來輸入string型別的字串，接受空格，與到換行符結束，結束後指標如cin.getline（）一樣會指到換行符之後。

和cin.getline()類似，但是cin.getline()屬於istream流，而getline()屬於string流，是不一樣的兩個函式。

#include<iostream> 
#include<string> 
using namespace std; 
main () 
{ 
string str; 
getline(cin,str); 
cout<<str<<endl; 
}
5. gechar() 需要引入 <cstdio>

C 庫函式 int getchar(void) 從標準輸入 stdin 獲取一個字元（一個無符號字元）。

#include <stdio.h>

int main ()
{
   char c;
 
   printf("請輸入字元：");
   c = getchar();
 
   printf("輸入的字元：");
   putchar(c);

   return(0);
}
 

這個可以看《c++的geline問題》http://www.cnblogs.com/hhddcpp/p/4308587.html一文，當出現getline(cin,str);語句不執行而是直接跳過的時候，可以在getline一句之前加一句cin.get()或者getchar()，吃掉不需要的空格和換行符。

#include <iostream>
#include <cstring>
#include <cstdio>


using namespace std;

int main()
{
    string str;
    int guess[10];

    while(str != "abc"){
        cin >> guess[j];
        //getchar();
        cin.get();
        getline(cin , str);
        j++;
    }
    return 0;
}

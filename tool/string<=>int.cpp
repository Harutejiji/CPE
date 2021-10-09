https://www.itread01.com/content/1544839584.html
https://home.gamer.com.tw/creationDetail.php?sn=4114818
#include <sstream>
using namespace std;
int main()
{
    stringstream string_to_int;
    string s1="12345";
    int n1;

    string_to_int<<s1;
    //也可以使用string_to_int.str(s1);
    //或者 s1=string_to_int.str();
    
    string_to_int>>n1;

    cout<<"s1="<<s1<<endl;//s1=12345
    cout<<"n1="<<n1<<endl;//n1=12345
    
}

    //連續使用時須清空
    ss.str("");
    ss.clear();//將指標重置,容器內的字串尚存

string s1="12345";
string s2="67890";
ss << s1;
ss << s2;
ss >> n ;// n = 1234567890

ss << s1;
ss.str(s2);
ss >> n ;// n = 67890


int n, m;
string s;
s = to_string(n);
m = stoi(s)

    
int main() {
char a;
stringstream ss;
int n = 1;
ss << n;
if(ss.fail()) cout << '2' << endl;
ss >> a;
ss >> a;
if(ss.fail()) cout << '1' << endl;//輸出 
return 0;
}

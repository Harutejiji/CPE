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

int n;
string res = "";
while(n) {
    res = (n % 2 + '0') + res;
    n /= 2;
}
return res;

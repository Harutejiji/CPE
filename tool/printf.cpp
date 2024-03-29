https://edisonx.pixnet.net/blog/post/35305668

%c//：以字元方式輸出
%d//：10 進位整數輸出
%lld//:long long int
%o//：以 8 進位整數方式輸出
%u//：無號整數輸出
%x//、%X：將整數以 16 進位方式輸出
%f or %lf//：浮點數輸出
%e//、%E：使用科學記號顯示浮點數
%g//、%G：浮點數輸出，取 %f 或 %e（%f 或 %E），看哪個表示精簡
%%//：顯示 %
%s//：字串輸出
%lu//：long unsigned 型態的整數
%p//：指標型態
  
  
 .*s//這表示要顯示字串中 0 到多個字元，實際的字元數可以在第二個參數指定
 int main(void) {
    printf("%.*s\n", 3, "Justin");
    printf("%.*s\n", 5, "Justin");
    printf("%.*s\n", 7, "Justin");
}

%4s // 4個字元向右對齊，不足的話左邊補空格
%-4s // 輸出字元小於4時右邊補空格

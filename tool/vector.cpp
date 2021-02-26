vector<int>
  => vector<int>arr //宣告名為 arr 的 vector<int>
  => arr.push_back(a) // 把 a 放到 arr 的最後面
  => arr.size()
  => arr[1]
  => arr.clear()//清空
  
  vector<int> arr = {5, 4, 1, 7, 3, 8, 9, 10, 6, 2};
  sort(arr.begin(), arr.begin()+10);//升序
  sort(v.begin(), v.end());//升序

  bool mycompare(int a, int b) {
    return a > b; // 降序排列
}
    int arr[] = {5, 4, 1, 7, 3, 8, 9, 10, 6, 2};
    std::vector<int> v(arr, arr+10);
    std::sort(v.begin(), v.end(), mycompare);// 降序排列

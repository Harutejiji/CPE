map<int ,int> mapinfo ;
//直接将map删除了
mapinfo.clear();
 
 
//用map.erase(map.begin(),map.end())比较好  清空元素
gTaskDeal.matrix_info.erase(gTaskDeal.matrix_info.begin(),gTaskDeal.matrix_info.end());

map<string, int, greater<string>> test; //指定引數3為greater<string> 降冪排列

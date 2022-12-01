string longestCommonPrefix(vector<string>& strs) {
  sort(strs.begin(),strs.end());
  int i;
  if(strs[0]=="") return "";
  for( i =0 ; i< strs[0].size();i++){
    if(strs[0][i]!=strs[strs.size()-1][i]) break;
  }
  return strs[0].substr(0,i);
}

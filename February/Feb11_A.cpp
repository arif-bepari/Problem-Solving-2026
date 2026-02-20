vector<int> v(26,0);
for(int i=0; i<s.size(); i++){
    int x=s[i]-'a';
    v[x]=v[x]+1;
}
int maxVal = *std::max_element(v.begin(), v.end());
cout<<s.size()-maxVal<<endl;
string reverseString(string &str){
	str+=' ';
	string ans="",tmp="";
	int n=str.size();

	for(int i=0;i<n;i++){
		if(str[i]==' '){
			if(tmp!=""){
				if(ans!=" "){
					ans=tmp + ' '+ans;
				}
				else ans=tmp;
				tmp="";
			}
		}
		else tmp+=str[i];
	}
   return ans;
}
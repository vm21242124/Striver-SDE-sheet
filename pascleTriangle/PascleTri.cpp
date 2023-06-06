#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  //creating returning vector of vector
  
  vector<vector<long long int>> pasTri;
  //traversing by row
  for(int i=0;i<n;i++){
    //creating stage for taking the the addition of above step
    vector <long long int> stage;
    for(int j=0;j<=i;j++){
        //in first we are pushing 1
        //and last we are pushing 1
        //else adding aboove two element from pascle tringle in stage
      if(j==0 || j==i) stage.push_back(1);
      else stage.push_back(pasTri[i-1][j-1]+pasTri[i-1][j]);
    }
    //adding stage to pass trinangle
    pasTri.push_back(stage);

  }
  return pasTri;

}

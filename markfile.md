 # for the maps in c++
 if we use an sorted list 
 * map<char,int> fre *
 * unordered_map<char,int> freq *
 ## the way to manipule the dictionaire  in c++
  - add a value : fre[key] = value
  - count number : fre.count(key) return 0 if there is no one 
  - to find ?? : if (age.find("zzz") == age.end()) cout << "not found\n";
  - if by examples you have key[value]++ so to verifie there is exist if(key.count(key"you wnat found")) <mp.count(key)>


## range for :
 - ` for list ` : for(int i=0;i<n ;i++)
 - ` for charcters ` : for (char c:s) <avec s string you want to found>
 - ` for maping ` : for (auto [k,v] :mp ) and treat is as mp[k] 
 ` next time ` :Loops, vector, string, map/unordered_map/set, sort

## deal with string :
 - pour ajouter a le dernier d'une word : ` string.push_back('a') `
 - pour creer une mot complete : ` word=string(total,'P') `

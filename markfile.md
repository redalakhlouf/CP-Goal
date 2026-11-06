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

## opertores xor and or 
- ` XOR ^ ` : return 1 if two bits have different value if not return 1 
    ## propriets:
      - a ^ a =0
      - a ^ 0 =a
      - a ^ b=b ^ a
      - a ^ b ^ a = b 
    ## implementation :
    int r = a ^ a
    int r=0 for(x:a) r^=x
- ` OR ` :return 1 if an elmenet have one bit 
   ## propriets:
     - a|a=a
     - a|0=a
   ## implementation:
   int r=0
   for(x:a) r|=a
- ` << ` : to shit or crease all bits by 1 
  - int r =1 << 2 -> r=2 use like r*2 



class Solution {
public:
    bool isAnagram(string s, string t) {
// Brute Force solution
//         if(s.length()!=t.length())
//         return false;
      
//       sort(s.begin(),s.end());
//       sort(t.begin(),t.end());

//       for(int i=0;i<s.length();i++){
          
//           if(s[i]!=t[i])
//           return false;

//       }

// return true;

int freqTable[256]={0};
// O(m)
for(int i=0;i<s.size();i++){

freqTable[s[i]]++;

}
// O(n)
for(int i=0;i<t.size();i++){

freqTable[t[i]]--;

}

// O(256)==Constant
for(int i=0;i<256;i++){

    if(freqTable[i]!=0)
    return false;
}
return true;

             
    }
};

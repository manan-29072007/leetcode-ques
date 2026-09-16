class Solution {
public:
    int maxFreqSum(string s) {
        int count_a=0,count_e=0,count_i=0,count_o=0,count_u=0;
        int freq_1;
        int freq_2[26];
        for(int i=0;i<s.size();i++){
        if(s[i]=='a'){
            count_a++;
        }
        else if(s[i]=='e'){
            count_e++;
        }
        else if(s[i]=='i'){
            count_i++;
        }
        else if(s[i]=='o'){
            count_o++;
        }
        else if(s[i]=='u'){
            count_u++;
        }
        else {
             freq_2[s[i]-'a']++;
        }


    }
    int max_vowel=freq_2[0];
    for(int i=0;i<26;i++){
        if(freq_2[i]>max_vowel){
            max_vowel=freq_2[i];
        }
    }
    freq_1=max({count_a,count_e,count_i,count_o,count_u});
    return freq_1+max_vowel;
}
};
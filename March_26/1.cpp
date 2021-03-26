#include<unordered_map>
#include<string>
#include<iostream>
#include<vector>

using namespace std;


string lon_nonrep_subs(string s )

{   unordered_map <char , int > map;
    int max_len=2,start=0,index=0;
    if (s.size()<=2) return "no such string exist";
    for (int i=0; i<s.size();i++)
    {
        if (map.find(s[i]) != map.end())
        {

            start=map[s[i]]+1;
        }
        else
        {
            if (i-start+1 > max_len)
            {   index=i;
                max_len=i-start+1;

            }

        }
         map[s[i]]=i;
    }

   return  s.substr(index-max_len+1,max_len);


    }




int main()
{


    string a=lon_nonrep_subs("akonmjsing");
    cout << a;


}

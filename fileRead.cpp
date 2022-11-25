#include <iostream>
#include <fstream>
#include <ostream>
#include <bits/stdc++.h>
using namespace std;
unordered_map<string, string> mp;

void read()
{
    ifstream fin;
    string line;
    // Open an existing file
    fin.open("cm21NOV2022bhav.csv");
    int st = 0;
    int end = 0;
    int count = 0;
    while (!fin.eof())
    {
        fin >> line;
        string s = line;
        string w, q;
        int i = 0;
        count++;
        vector<string> v;
        while (i < s.size())
        {
            w.push_back(s[i]);
            // cout<<w<<endl;
            if (s[i] == ',')
            {
                w.pop_back();
                v.push_back(w);
                w = "";
            }
            i++;
        }

        // cout << v[0] << " " << v[9];
        // cout << endl;
        // cout<<v[0]<<" "<<v[9]<<endl;
        mp[v[0]] = v[9];
        v.clear();
        // mp[v[0]] = v[6];
        // v.clear();
    }
}

int main()
{
    read();
    for (auto it : mp)
    {
        cout << it.first << " " << mp[it.first] << endl;
    }

    return 0;
}
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

// Levenstein distance function
int levenshtein_distance(const string &s1, const string &s2)
{
    const size_t len1 = s1.size(), len2 = s2.size();
    vector<vector<int>> d(len1 + 1, vector<int>(len2 + 1));

    d[0][0] = 0;
    for (int i = 1; i <= len1; ++i)
        d[i][0] = i;
    for (int i = 1; i <= len2; ++i)
        d[0][i] = i;

    for (int i = 1; i <= len1; ++i)
        for (int j = 1; j <= len2; ++j)
            d[i][j] = min({d[i - 1][j] + 1, d[i][j - 1] + 1, d[i - 1][j - 1] + (s1[i - 1] == s2[j - 1] ? 0 : 1)});

    return d[len1][len2];
}

// function to compare two files and display Levenstein distance return sum of Levenstein distances
int compare_files(string file1, string file2)
{
    ifstream f1(file1);
    ifstream f2(file2);
    if (!f1.is_open() && !f2.is_open())
    {
        cout << "Error opening file" << endl;
        return 1;
    }
    
    vector<string> line1;
    vector<string> line2;
    string _line1, _line2;

    while (getline(f1, _line1) && getline(f2, _line2))
    {
        line1.push_back(_line1);
        line2.push_back(_line2);
    }


    int sum = 0;
    for (int i = 0; i < line1.size(); i++)
    {
        if (line1[i] != line2[i])
        {
            sum += levenshtein_distance(line1[i], line2[i]);
        }
    }
    return sum;
}

int main()
{
    cout << "Compare merged.txt and A03.txt" << endl;
    cout << "Distance brtwean merged, A03: "<< compare_files("./files/merged.txt", "./files/A03.txt");
    cout << endl;

    cout << "Compare A0102.txt and A03.txt" << endl;
    cout << "Distance A0102, A03: " <<compare_files("./files/A0102.txt", "./files/A03.txt");
    cout << endl;

    cout << "Compare A0201.txt and A03.txt" << endl;
    cout << "Distance A0201, A03: " <<compare_files("./files/A0201.txt", "./files/A03.txt");
    cout << endl;

    return 0;
}
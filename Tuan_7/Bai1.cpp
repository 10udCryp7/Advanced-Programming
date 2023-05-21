#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    string fileName;
    getline(cin, fileName);
    ifstream file(fileName);
    vector<int> save;
    int n;
    while(file >> n)
    {
        save.push_back(n);
    }
    cout << int(save.size()) << " ";
    for (int i = 0; i < int(save.size()) - 1; i++)
    {
        for (int j = i + 1; j < int(save.size()); j++)
        {
            if (save[i] > save[j])
            {
                int temp = save[i];
                save[i] = save[j];
                save[j] = temp;
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < int(save.size()); i++)
    {
        sum+=save[i];
    }
    cout << save[0] << " " << save[int(save.size())- 1] << " " << sum;
}

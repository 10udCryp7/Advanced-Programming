#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string fileName;
    cin >> fileName;
    ifstream file(fileName);
    int num;
    vector<int> save;
    while(file >> num)
    {
        save.push_back(num);
    }
    for (int i = 0; i < int(save.size()) - 1; i++)
    {
        for (int j = 0; j < int(save.size()); j++)
        {
            if (save[i] > save[j])
            {
                int temp = save[i];
                save[i] = save[j];
                save[j] = temp;
            }
        }
    }
    cout << save[int(save.size())/2];
}

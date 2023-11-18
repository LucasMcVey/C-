#include <iostream>
#include<bits/stdc++.h>




using namespace std;

int main()
{
    string name;
    string name2;

    getline(cin, name);

    transform(name.begin(), name.end(), name.begin(), ::tolower);
    name[0] = toupper(name[0]);
    cout << "Hello, " << name << endl;
    if(name.empty()) {
        cout << "Hello, CP2 " << endl;
    }

    else {
        while(getline(cin, name)) {
            if(name.empty()) {
                cout << "Hello, CP2 " << endl;
            }
            else {
                while(getline(cin, name)) {
                    transform(name.begin(), name.end(), name.begin(), ::tolower);
                    name[0] = toupper(name[0]);
                    cout << "Hello, " << name << endl;
                }
            }

            }
        }


    return 0;




}

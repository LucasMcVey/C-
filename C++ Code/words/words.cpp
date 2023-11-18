/**
 * Computer Programming 2 (COMP2711, COMP8801)
 * Practical 4: Words
 */

#include <iostream>
#include <string>
#include <unistd.h>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;


template <class T>
class MyVector {
public:
    typedef T* iterator; // creates an alias of the T* type called iterator
    MyVector() {}

    iterator begin() {
        return &items[0];
    }
    iterator end() {
        return &items[used];
    }
    int size() {
        return used;
    }
    iterator insert (iterator position, const T& item) {
        for (MyVector<T>::iterator i = &items[999]; i > position; i--) {
            *i = *(i - 1);
        }
        *position = item;
        ++used;
        return position;

    }
private:
    T items[1000];
    int used = 0;
};

struct WordInfo {
string text;
int count = 0;
};

int main(int argc, char** argv)
{

MyVector<string> words;
MyVector<WordInfo> test;

    enum {
        total,
        unique,
        individual
    } mode = total;



    for (int c; (c = getopt(argc, argv, "tui")) != -1;) {
        switch (c) {
        case 't':
            mode = total;
            break;
        case 'u':
            mode = unique;
            break;
        case 'i':
            mode = individual;
            break;

        }

    }
    argc -= optind;
    argv += optind;

    string word;
    int count = 0;






    while (cin >> word) {
        bool duplicate = false;
        count += 1;
        MyVector<WordInfo>::iterator i = test.begin();
        for (; i->text <= word && i != test.end(); i++) {
            if (i->text == word) {
                duplicate = true;

            }

        }
        if (duplicate) {
            i->count = i-> count+1;
        } else {
            WordInfo newtest;
            newtest.text = word;
            newtest.count = 1;
            test.insert(i, newtest);
        }
    }




            switch (mode) {
                case total:
                    cout << "Total: " << count << '\n';
                    break;
                case unique:
                    cout << "Unique: " << test.size() << '\n';
                    break;
                case individual:

                    for (MyVector<WordInfo>::iterator i = test.begin(); i != test.end(); i++) {
                        cout << i-> text << ": " << i-> count << endl;
                    }
            }
            return 0;
        }






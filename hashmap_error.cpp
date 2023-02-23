#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    system("CLS");

    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    unordered_map<string, int> word_pos;
    int pos = 0;
    for (int i = 0; i < kalimat.length(); i++) {
        if (kalimat[i] == ' ') {
            string word = kalimat.substr(pos, i - pos);
            word_pos[word] = pos;
            pos = i + 1;
        }
    }
    // Insert the last word into the map
    string last_word = kalimat.substr(pos);
    word_pos[last_word] = pos;

    string input_awal, input_akhir;
    if (!word_pos.empty()) {
        input_awal = word_pos.begin()->first;
        input_akhir = std::prev(word_pos.end())->first;
        cout << "Inputan awal: " << input_awal << endl;
        cout << "Inputan akhir: " << input_akhir << endl;
    } else {
        cout << "Input tidak mengandung kata." << endl;
    }

    return 0;
}

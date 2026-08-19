#include<iostream>
using namespace std;


int stringToInt(string charNum) {
    int intNum = 0;
    int tens = 1;

    for (int i = len(charNum); i >= 0; i--) {
        if (i == charNum.length-1) {
            num = ascii(charNum[i]) - 48;
            intNum += num;
        } else if (charNum[i] == '-') {
            intNumSave = -intNum;
            intNumSave += 5;
            
        } else {
              num = ascii(charNum[i]) - 48;
              tens *= 10;
              num *= tens;
              intNum += num;
        }
    }
}

int main() {
    string charNum = "1234";
    int intNum = stringToInt(charNum);
    cout << intNum;
    return 0;
}
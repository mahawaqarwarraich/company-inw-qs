#include<iostream>
using namespace std;


int stringToInt(string charNum) {
    int intNum = 0;
    int tens = 1;
    int num;

    // 25-30 = -5 = -5-20 = -25

    for (int i = charNum.length()-1; i >= 0; i--) {
        if (i == charNum.length()-1) {
            num = charNum[i] - 48; // to find the original digit
            intNum += num;
        } else if (charNum[i] == '-') {
            int temp = intNum - (intNum+5);
            int temp2 = temp - (intNum-5);
            intNum = temp2;     
        } else {
              num = charNum[i] - 48; // to find the original digit
              tens *= 10;
              num *= tens;
              intNum += num;
        }
    }

    return intNum;
}

int main() {
    string charNum = "0";
    int intNum = stringToInt(charNum);
    cout << intNum;

    return 0;
}
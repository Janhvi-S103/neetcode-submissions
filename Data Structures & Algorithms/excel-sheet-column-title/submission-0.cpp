class Solution {
public:
    string convertToTitle(int columnNumber) {
        string name;
        do
        {
            columnNumber--;
            int r= columnNumber % 26;
            name+= (char)r+65;
            columnNumber = columnNumber / 26;


        }while(columnNumber!=0);
        reverse(name.begin(), name.end());
        return name;
    }
};
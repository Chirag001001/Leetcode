class Solution {
public:
    string interpret(string command) {
        string a;
        int i=0;
        while(i<command.size()){
            if(command[i]=='G'){
                a=a+'G';
                i++;
            }

            // string temp = command[i]+command[i+1];
            else if(command[i]=='(' && command[i+1]==')'){
                a=a+'o';
                i=i+2;
            }
            else{
                i=i+4;
                a=a+"al";
            }
        }
        return a;
    }
};

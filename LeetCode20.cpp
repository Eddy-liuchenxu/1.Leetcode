/*************************************************************************
	> File Name: 20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月27日 星期四 19时25分33秒
 ************************************************************************/
bool isValid(char * s){
    int n = strlen(s);
    int top = -1;
    char * st= (char *) malloc(sizeof(char) * n);
    for(int i = 0; i < n; i++) {
        if(s[i] == ')'){
            if(top > -1 && st[top] == '(') {
                top--;
            }else{
                return false;
            }
            }else if(s[i] == ']') {
                    if(top > -1 && st[top] == '[') {
                         top--;
                     }else{
                         return false;
                     }
            }else if(s[i] == '}') {   
                    if(top > -1 && st[top] == '{') {
                         top--;
                     }else{
                         return false;
                     }
                    }else{
                        st[++top] = s[i];
                    }
    }
    if(top > -1) return false;
    return true;

}

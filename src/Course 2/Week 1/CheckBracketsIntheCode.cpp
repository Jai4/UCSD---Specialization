#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string st;
typedef char c;
typedef stack<c> stc;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
class check
{
    st stinput;c rt;ll index;ll ax;
    stc united;c er;
    public:
    void getinput()
    {
        cin>>stinput;
        forn(i,0,stinput.size())
        {
            rt=stinput[i];
            if((rt=='(')||(rt=='[')||(rt=='{'))
            {
                if(united.empty()==true)
                {
                    index=i+1;
                    united.push(rt);
                }
                else
                {
                    united.push(rt);
                }
            }
            else if((rt==')')||(rt==']')||(rt=='}'))
            {
                if(united.empty()==true)
                {
                    cout<<i+1<<endl;
                    return;
                }
                else 
                {
                    if(rt==')')
                    {
                        er=united.top();
                        united.pop();
                        if(er!='(')
                        {
                            cout<<i+1<<endl;
                            return;
                        }
                    }
                    else if(rt==']')
                    {
                        er=united.top();
                        united.pop();
                        if(er!='[')
                        {
                            cout<<i+1<<endl;
                            break;
                        }
                    }
                    else if(rt=='}')
                    {
                        er=united.top();
                        united.pop();
                        if(er!='{')
                        {
                            cout<<i+1<<endl;
                            return;
                        }
                    }
                }
            }
        }
    
        if(united.empty()==true)
        {
            cout<<"Success"<<endl;
        }
        else 
        {
            cout<<index<<endl;
        }
    }
};
int main()
{
    check g;
    g.getinput();
    return 0;
}
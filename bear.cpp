//Narendra
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxn=300010;
struct Edge {int x,y;} E[maxn<<1];
bool cmp(const Edge &a,const Edge &b) {return a.x<b.x || (a.x==b.x && a.y<b.y);}
int next[maxn], prev[maxn];
int In[maxn];
int con1[maxn];
int Eh[maxn];
int n,m,k,cnt;
int q[maxn];
void DFS(int x)
{
    int top=1,tail=1;
    q[1]=x;
    In[x]=0;
    ::next[::prev[x]]=::next[x];
    ::prev[::next[x]]=::prev[x];
    while (top<=tail)
    {
        x=q[top++];
        for (int i=::next[1],j=Eh[x];i<=n;i=::next[i])
        {
            while (j<Eh[x+1]-1 && E[j+1].y<=i) j++;
            if (E[j].x==x && i==E[j].y) continue;
            ::next[::prev[i]]=::next[i];
            ::prev[::next[i]]=::prev[i];
            In[i]=0;
            q[++tail]=i;
        }
    }
}
 
int main()
{
    scanf("%d%d%d",&n,&m,&k);
    cnt=0;m<<=1;
    for (int i=1,x,y;i<=m;i+=2)
    {
        scanf("%d%d",&E[i].x,&E[i].y);
        E[i+1].x=E[i].y,E[i+1].y=E[i].x;
    }
    sort(E+1,E+1+m,cmp);
    for (int i=1;i<=m && E[i].x==1;i++) con1[E[i].y]=1,cnt++;
    if (cnt+k>=n) {puts("impossible");return 0;}
    for (int i=1,j=1;i<=m;i++) while (j<=E[i].x) Eh[j++]=i;Eh[n+1]=m+1;
    cnt=0;
    for (int i=2;i<=n;i++) In[i]=1,::next[i]=i+1,::prev[i]=i-1;
    ::next[1]=2;::prev[n+1]=n;
    for (int i=2;i<=n;i++) if (In[i] && !con1[i]) DFS(i),cnt++;
    if (::next[1]!=n+1) {puts("impossible");return 0;}
    if (cnt>k) {puts("impossible");return 0;}
    puts("possible");
    return 0;
}


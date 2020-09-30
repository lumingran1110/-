#include<string>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<cmath>
#include <fstream>
#include <sstream>
#include<vector>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
#define LL long long
#define MOD 998244353
#define PI 3.1415926535898
#define INF 0x3f3f3f3f
#define MAXN 80000080
const double EPS = 1e-8;
ifstream input("data.txt");
LL read()
{
	LL x = 0;
	input >> x;
	return x;
}
int n;
struct node
{
	LL num;
	string s;
	int a, b, c;
	double d;
};
node student[100005];
bool cmp(node a, node b)
{
	return a.d > b.d;
}
void init()
{
	n = read();
	for (register int i = 1; i <= n; i++)
	{
		student[i].num = read();
		input >> student[i].s;
		student[i].a = read();
		student[i].b = read();
		student[i].c = read();
		student[i].d = (double)student[i].a * 0.2 + (double)student[i].b * 0.2 + (double)student[i].c * 0.6;
	}
}
void out(int x)
{
	cout << student[x].num << ' ' << student[x].s << ' ' << student[x].a << ' ' << student[x].b << ' ' << student[x].c << ' ' << student[x].d << endl;
}
void tj()
{
	cout << "所有学生的成绩为(按总成绩降序)"<<endl;
	sort(student + 1, student + n + 1, cmp);
	for (register int i = 1; i <= n; i++)
		out(i);
}
void check(LL x)
{
	cout << "学号为" << x << "的成绩是:";
	for (register int i = 1; i <= n; i++)
	{
		if (student[i].num == x)
		{
			out(i);
			break;
		}
	}
}
void fx()
{
	double s1=0, s2=0;
	for (register int i = 1; i <= n; i++)
	{
		s1 += student[i].d;
	}
	s1 /= n;
	cout << "平均成绩：" << s1;
	for (register int i = 1; i <= n; i++)
	{
		s2 += (student[i].d - s1) * (student[i].d - s1);
	}
	s2 /= n;
	s2 = sqrt(s2);
	cout << "标准方差：" << s2 << endl;
}
int main()
{ << "所有学生的成绩为(按总成绩降序)"<<e
	//freopen("data.txt", "r", stdin);
	//freopen("a.out", "w", stdout);
	init();
	tj();
	check(2017000002);
	fx();
	return 0;
}

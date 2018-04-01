/**#include<iostream>
#include<time.h>
using namespace std;
int main()
{
       long beginTime =clock();//获得开始时间，单位为毫秒
       for(int i=0;i<10000;i++){cout<<i<<endl;}//输出10000行数字
       long endTime=clock();//获得结束时间
      cout<<"beginTime:"<<beginTime<<endl
             <<"endTime:"<<endTime<<endl
             <<"endTime-beginTime:"<<endTime-beginTime<<endl;
       return 0;
}
**/

/***#include <cstdio>
#include <cstdlib>

using namespace std;

int main(int argc, char **argv)
{
  int w;
  scanf("%d", &w);

  int p1 = 2;
  int p2 = w - 2;

  if (w > 2 && p2 % 2 == 0) {
    printf("YES");
  } else {
    printf("NO");
  }

  return 0;
}**/
/**BW EXCHANGE**/
/**#include <cstdio>
#include <cstdlib>
#include <string>
#include<iostream>
using namespace std;

int main(int argc, char **argv)
{
    string s;
    //scanf("%s" , &s);
    cin >>s;
    int num_w = 0, num_b = 0;
    int len = s.length();
    if (len > 50 || len < 3)
    {
        return 0;
    }
    for(int i = 0; i < len; i++ )
    {
        if (i%2 == 0)
        {
            if (s[i] == 'B')
            {
                num_b ++;
            }
            else if(s[i] == 'W')
            {
                num_w ++;
            }
            else
            {
                printf("input must be B or W");
                return 0;
            }
        }
        else
        {
            if(s[i] == 'W')
            {
                num_b ++;
            }
            else if(s[i] == 'B')
            {
                num_w ++;
            }
            else
            {
                printf("input must be B or W");
                return 0;
            }
        }
    }
    if (num_b < num_w)
    {
        cout<<num_b<<endl;
    }
    else
    {
        cout<<num_w<<endl;
    }
    return 0;
}
**/

/**
#include <iostream>
#include <set>
using namespace std;

//Student结构体
struct Student {
    string name;
    int age;
    string sex;
};

//*“仿函数"。为Student set指定排序准则
class studentSortCriterion {
    public:
        bool operator() (const Student &a, const Student &b) const {
            //*先比较名字；若名字相同，则比较年龄。小的返回true
            if(a.name < b.name)
                return true;
            else if(a.name == b.name) {
                if(a.age < b.age)
                    return true;
                else
                    return false;
            } else
                return false;
        }
};

int main()
{
    set<Student, studentSortCriterion> stuSet;

    Student stu1, stu2;
    stu1.name = "a";
    stu1.age = 13;
    stu1.sex = "male";

    stu2.name = "b";
    stu2.age = 23;
    stu2.sex = "female";

    stuSet.insert(stu1);
    stuSet.insert(stu2);

    //构造一个测试的Student，可以看到，即使stuTemp与stu1实际上并不是同一个对象，
     //*但当在set中查找时，仍会查找成功。这是因为已定义的studentSortCriterion的缘故。
     //
    Student stuTemp;
    stuTemp.name = "b";
    stuTemp.age = 13;

    set<Student, studentSortCriterion>::iterator iter;
    iter = stuSet.find(stuTemp);
    if(iter != stuSet.end()) {
        cout << (*iter).name << endl;
    } else {
        cout << "Cannot fine the student!" << endl;
    }

    return 0;
}
****/
#include<iostream>
#include<string>
using namespace std;
int main (int argc, **argv)
{
    string str;
    cin>>str;
    int len = str.length();

}

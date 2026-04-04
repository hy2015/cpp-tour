#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mymap;
        for (int i = 0; i < nums.size(); i++){
            if (mymap.find(target - nums[i]) != mymap.end()) {
                return vector<int>{mymap[target - nums[i]], i};
            }
            else {
                mymap[nums[i]] = i;
            }
        }

        return vector<int>();
    }
};

class Blonde 
{
public:
    Blonde(string name, int age)
    {
        m_Name = name;
        m_Age = age;
    }

    bool operator==(Blonde b)
    {
        if (m_Name == b.m_Name && m_Age == b.m_Age)
        {
            return true;
        }
        return false;
    }

    bool operator!=(Blonde b)
    {
        if (m_Name == b.m_Name && m_Age == b.m_Age)
        {
            return false;
        }
        return true;
    }

private:
    string m_Name;
    int m_Age;

};

void test05()
{
    Blonde b1("Miyong", 18);
    Blonde b2("Ria", 18);

    if (b1 == b2)
    {
        cout << "b1 is equal to b2" << endl;
    }
    else
    {
        cout << "b1 is not equal to b2" << endl;
    }

    if (b1 != b2)
    {
        cout << "b1 is not equal to b2" << endl;
    }
    else
    {
        cout << "b1 is equal to b2" << endl;
    }
}

int main05()
{
   /* Solution solution;
    vector<int> nums = { 2,7,11,15 };
    int target = 9;

    vector<int> result = solution.twoSum(nums, target);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }*/

    test05();
   
    return 0;

}
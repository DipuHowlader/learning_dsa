#include <bits/stdc++.h>

using namespace std;

int maxValue(vector<int>& vec)
{
    auto max_Element = max_element(vec.begin(), vec.end());

    if (max_Element != vec.end())
    {
        return *max_Element;
    }
}

int minValue(vector<int> &vec)
{
    auto min_Element = min_element(vec.begin(), vec.end());

    if (min_Element != vec.end())
    {
        return *min_Element;
    }
}

int PrimeNumber(vector<int>& vec)
{
    int count = 0;
    for (int Prime : vec)
    {
        if (Prime == 1) count ++;
        for (int i = 2; i * i <= Prime; i++)
        {
            if (Prime % i != 0) {
                count++;
                break;
            };
        }
    }
    return count;
}

int Palindrome(vector<int> &vec)
{
    int reverseNum = 0;
    int count = 0;

    for (int num : vec)
    {
        int orginalNum = num;
        while (num > 0)
        {
            reverseNum = reverseNum * 10 + (num % 10);
            num /=10;
        }


        if (orginalNum == reverseNum)
            count++;
        reverseNum = 0;
    }
    return count;
}

int Max_divisors(const vector<int>& vec){
    int maxDivisors, numWithmaxDivisors;
    for (int num: vec)
    {
        int divisors = 0;
        for (int i = 1; i <= num; i++)
        {
            if (num%i == 0) divisors++;
        }
        if(divisors > maxDivisors){
            maxDivisors = divisors;
            numWithmaxDivisors = num;
        }
        
    }
    return numWithmaxDivisors;
    
    
}



int main()
{
    int t;
    cin >> t;
    vector<int> vecc;

    while (t--)
    {
        int num;
        cin >> num;
        vecc.push_back(num);
    }
    
    cout << "The maximum number : " << maxValue(vecc) << "\n";
    cout << "The minimum number : " << minValue(vecc) << "\n";
    cout << "The number of prime numbers : " << PrimeNumber(vecc) << "\n";
    cout << "The number of palindrome numbers : " << Palindrome(vecc) << "\n";
    cout << "The number that has the maximum number of divisors : " << Max_divisors(vecc);
}
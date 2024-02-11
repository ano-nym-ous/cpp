/*
To celebrate the Reunion of 96 Batch of the Famous School the Ram and Jannu the organizers of the
event decided to liters of Fruit Drinks. However, an unexpected difficulty occurred in the shop: it
turned out that Fruit Drinks is sold in bottles 0.5, 1 and 2 li volume. At that, there are exactly 0.5
bottles in volume, bone-liter bottles and c of two-liter ones. The organizers have enough money to buy
any amount of Fruit Drinks. What did cause the heated arguments was how many bottles of every kind
to buy, as this question is pivotal for the of Fruit Drinks among the Friends. Your task is to count the
number of all the possible ways to buy exactly n liters of Fruit Drinks and persuade the organ this
number is too large .All the bottles of Fruit Drinks are considered indistinguishable, i.e. two variants of
buying are different from each other they differ in the number of bottles of at least one kind.
Constraints:
1≤n≤ 10000
0≤ a, b, c < 5000
Input Format:
The first line contains four integers representing, a, b, c respectively. Output Format:
Print the unique number representing the solution to the problem.
If it is impossible to buy exactly n liters of Fruit Drinks, print 0.
*/

#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    int count = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            for (int k = 0; k <= n; k++)
            {
                if (i * 0.5 + j + k * 2 == n && i <= a && j <= b && k <= c)
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}

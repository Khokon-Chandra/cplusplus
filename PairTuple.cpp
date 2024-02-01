#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

pair<int, int> findMaxMin(vector<int> &A)
{
    // First value of pair will be Maximum of array A and second will be Minimum of array A
    sort(A.begin(), A.end());
    return {A[A.size() - 1], A[0]};
}

tuple<int, int, int> compute(vector<int> &A)
{
    // First value of tuple will be sum of array A
    // Second value of tuple will be sum of even values in array A
    // Third value of tuple will be sum of odd values in array A
    int sum[3] = {0, 0, 0};

    for (int i = 0; i < A.size(); i++)
    {
        sum[0] += A[i];
        if (A[i] % 2 == 0)
        {
            sum[1] += A[i];
        }
        else
        {
            sum[2] += A[i];
        }
    }

    return {sum[0], sum[1], sum[2]};
}

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    pair<int, int> max_min = findMaxMin(A);
    cout << max_min.first << " " << max_min.second << endl;

    tuple<int, int, int> tuple_values = compute(A);
    cout << get<0>(tuple_values) << " " << get<1>(tuple_values) << " " << get<2>(tuple_values) << endl;

    return 0;
}

/*
 * From each of the m Berland regions a team of two people is invited to part-
 * icipate in the olympiad. The qualifying contest to form teams was held and
 * it was attended by n Berland students. There were at least two schoolboys
 * participating from each of he m regions of Berland. The result of each of
 * the participants of the qualifying competition is an integer score from
 * 0 to 800 inclusive.
 *
 * The team of each region is formed from two such members of the qualifying
 * competition of the region.
 *
 * Your task is, given the results of the qualifying competition, to identify
 * the team from each region, or to announce in this region its formation
 * requires additional contests.
 *
 */

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

// a list of participant names.
// p[0], p[1] correspond to region 1, p[2], p[3] correspond to region 2, and
// so on.
vector<string> p;

// a list of scores.
// s[i] correspond to p[i]'s score.
// -1: not yet determined.
// -2: cannot determine team. need additional contests.
vector<int> s;

string find_k_max_score(int k)
{
    return "test";
}

void find_qualifying_participants()
{

}

int main()
{
    int n, m; // num of participants, num of regions.
    cin >> n >> m;
    p.push_back("test");

    for (vector<string>::iterator it = p.begin(); it != p.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    unordered_multimap<string, string> fruits_color = {
        {"apple", "red"},
        {"apple", "green"},
        {"orange", "orange"},
        {"strawberry", "red"}
    };

    cout << "multimap contains: ";
    for (unordered_multimap<string, string> it = fruits_color.begin();
            it != fruits_color.end(); ++it) {
        cout << " " << it->first << ": " << it->second;
    }
    cout << endl;

    return 0;
}

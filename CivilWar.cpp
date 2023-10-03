
/*In this superhero epic, the denizens of the Marvel Universe are forced to pick sides when Captain America and Iron Man come to blows over ideological differences.

The government decides to push for the Hero Registration Act, a law that limits a hero's actions. This results in a division in The Avengers. Iron Man stands with this Act, claiming that their actions must be kept in check otherwise cities will continue to be destroyed, but Captain America feels that saving the world is daring enough and that they cannot rely on the government to protect the world. And here the civil war begins.

They are trying make their team stronger by adding more avengers to their team. There are N avengers lined up.

Rules to add avenger to their team-

Any team can start first. But they will alternatively only.
They can select avenger from any side. But if they start from one side they can't move to other side in current chance.
They can select consecutive avengers as many they want.
They will stop only when all the avengers are part of either side.
Every Avenger has a power associated with him
There are some spurious avengers who will decrease the overall power of the team.
Both teams will select players optimally. Find the difference of powers of the two teams.

Constraints
1<= N <= 10^6

-10^9 <= P[i]<= 10^9

Input
First line contains an integer denoting the number of Avengers(N).

Next lines contain N space separated values denoting power of every avenger(P[i]).

Output
Print the difference of the powers of teams

Time Limit (secs)
1

Examples
Input

5

2 -7 8 -1 20

Output

2

Explanation-

Let's assume Ironman's team started selecting the avengers first so he will pick 20 from the back. In the Captain will pick 2 from the front. Now its Ironman's chance so he will select -1 from the back and now it is captain's chance so he will select 8 and finally ironman will select -7. So, the difference between the two team's power is [(20 + (-1) + (-7)] - [(2) + (8)] I.e., 2

Example 2

Input

3

3 10 -8

Output

21

Explanation-

Let's assume Captain's team started selecting the avengers first so he will pick 3 and 10 from the front. Now it's Ironman's chance so he will pick -8. Now the difference will be I.e.,21. [(3+10) - (-8))].
*/
#include <iostream>
using namespace std;

void diff(int n, int p[]){
    int capindex = 0;  
    int ironindex = n - 1;  
    long long cap = 0, iron = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            cap += p[capindex];
            capindex++;
        } 
        else {  
            iron += p[ironindex];
            ironindex--;
        }
    }

  
    long long powerDiff = cap - iron;

    cout << powerDiff << endl;

}

int main() {
    int n;
    cin >> n;
    int p[n];  

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    diff(n,p);

    return 0;
}

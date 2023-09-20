#include <bits/stdc++.h> 
int fishEater(vector<int> &fishes)  {
    int n= fishes.size(), c=1;
    int first=fishes[0];

    

    for (int i = 1; i <n; i++) {
        
            if (first >fishes[i]) {
                continue;
            }

            else {
                c++;
                first = fishes[i];
            }
    }

 /*   for (int i = 0; i < arrsize; i++) {
        if (fishes[i] != -1)
            c++;
    }*/

    return c;
}
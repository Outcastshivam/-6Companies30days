#include <bits/stdc++.h>
using namespace std;

int findTheWinner(int n, int k) {
        if (n == 1) 
            return 1;
        int winner = findTheWinner(n - 1, k);
        int newWinner = (winner + k) % n;

        return newWinner == 0 ? n : newWinner;
    }
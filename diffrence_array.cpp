vll initializeDiffArray(vll& A){
    int n = A.size();
    vll D(n + 1);
    D[0] = A[0], D[n] = 0;
    for (int i = 1; i < n; i++)
        D[i] = A[i] - A[i - 1];
    return D;
}
void update(vll& D, int l, int r, int x){
    D[l] += x;
    D[r + 1] -= x;
}
void finalArray(vll& A, vll& D){
    for (int i = 0; i < A.size(); i++) 
        (i == 0)?A[i] = D[i]:A[i] = D[i] + A[i - 1];
}

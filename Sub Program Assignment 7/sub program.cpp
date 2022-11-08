#include <iostream>
#include <iomanip>
using namespace std;

float gpa(int n, char score[], int sks[]){
    double totalScore = 0, totalSKS = 0;
    
    for (int i = 1; i <= n; i++){
        totalSKS += sks[i];
        if (score[i] == 'A'){
            totalScore += (4*sks[i]);
        } else if (score[i] == 'B') {
            totalScore += (3*sks[i]);
        } else if (score[i] == 'C') {
            totalScore += (2*sks[i]);
        } else if (score[i] == 'D') {
            totalScore += (1*sks[i]);
        } else if (score[i] == 'E') {
            totalScore += (0*sks[i]);
        }
    }
    return totalScore/totalSKS;
}

int main() {
    int n;
    cout<<"Enter course taken amount "; cin>>n;
    
    char score[n];
    int sks[n];
    
    for (int i = 1; i <= n; i++){
        cout<<"\nInput Score for Course "<<i<<endl; cin>>score[i];
        cout<<"Input total credits "; cin>>sks[i];
    }
    cout<<"GPA: "<<fixed<<setprecision(2)<<gpa(n, score, sks)
}


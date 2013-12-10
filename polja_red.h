#include <iostream>
using namespace std;

struct osoba {
    int ai,bi,ci,di,ei,datum;
    char ime[20],prezime[20],spol[1];
    osoba*sljedeci;
};

int AddOne(int n) {
    return((n+1)%10000);
}

struct tred {
    osoba*pacijent[10000];
    int front,rear;
};
void EnQueueQ (osoba*pacijent, tred *red) {
    if (AddOne(AddOne(red->rear)) == (red->front))
        cout<<"Red je pun "<<endl;
    else {
        red->rear = AddOne(red->rear);
        red->pacijent[red->rear] = pacijent;
    }
}

int IsEmptyQ(tred*red) {
    if(AddOne(red->rear)==red->front)return 1;
    return 0;
}

osoba*FrontQ(tred*red) {
    if(!IsEmptyQ)cout<<"Red je prazan!"<<endl;
    return red->pacijent[red->front];
}

void DeQueueQ(tred*red) {
    red->front++;
}

void InitQ(tred*red) {
    red->front=0;
    red->rear=9999;
}

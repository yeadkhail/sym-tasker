#include<iostream>
#include<string>
#include<cstdlib>
#include<vector>
using namespace std;
int main()
{
    string quotes[11];
    quotes[0]="\"A goal is a dream with a deadline.\" -Napoleon Hill";
    quotes[1]="\"A goal properly set is halfway reached.\" -Zig Ziglar";
    quotes[2]="\"A good conscience is a continual Christmas.\" -Benjamin Franklin";
    quotes[3]="\"Act as if what you do makes a difference. It does.\" -William James";
    quotes[4]="\"Action is the foundational key to all success.\" -Pablo Picasso";
    quotes[5]="\"Aim for the moon. If you miss you may hit a star.\" -W. Clement";
    quotes[6]="The minute that you're not learning I believe you're dead.";
    quotes[7]="Leadership and learning are indispensable to each other.";
    quotes[8]="A teacher is one who makes himself progressively unnecessary.";
    quotes[9]="Change is the end result of all true learning.";
    quotes[10]="I am always ready to learn although I do not always like being taught.";

    srand(time(NULL));
    seed=rand();
    int index=seed%11;
    cout<<quotes[index];
    return 0;

}

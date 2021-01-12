#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{

    string textline;
    int count;
    float u;
    float sum=0;
    float mean;
    float SD;
    ifstream source("score.txt");
    while (getline(source, textline))
    {
        sum += atof(textline.c_str());
        u += pow(atof(textline.c_str()),2);
        count++;
    }
    mean = sum / count;
    SD = pow(u/count-pow(mean,2),0.5);
    cout << "Number of data = "<< count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean<<"\n";
    cout << "Standard deviation = "<<SD;
}
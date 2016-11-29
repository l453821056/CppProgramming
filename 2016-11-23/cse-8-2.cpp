#include <iostream>
#include <fstream>
using namespace std;
int strlen(const char text[])
{
    int Length=0;
    for(;;Length++)
    {
        if(text[Length]==0)
            return Length;
    }
}
bool compareLine(int n, const char line1[], const char line2[])
{
    int Length =strlen(line1);
    bool found=false;
    int pos=1;
    string output;
    while(!found&&pos<Length)
    {
        if(line1[pos]==line2[pos])
        {
            output=output+' ';
            pos++;
        }
        else
        {
            output=output+" ^";
            found=true;
            cout <<"At line "<<n<<endl;
            for(int i=pos-20;i<pos+20;i++)
            {
                cout <<line1[i];
            }
            cout <<endl;
            for(int i=pos-20;i<pos+20;i++)
            {
                cout <<line2[i];
            }
            cout <<endl;
            for(int i=pos-20;i<output.length();i++)
            {
                cout <<output[i];
            }
            cout <<endl;
            return found;
        }
    }
    return found;
}
int main()
{
    char FileName1[256];
    cin >>FileName1;
    char FileName2[256];
    cin >>FileName2;
    ifstream File1;
    ifstream File2;
    File1.open(FileName1);
    File2.open(FileName2);
    char line1[512],line2[512];
    int line=1;
    bool found =false;
    while(!found && File1.getline(line1,512) && File2.getline(line2,512))
    {
        found=compareLine(line++,line1,line2);
    }
    return 0;
}

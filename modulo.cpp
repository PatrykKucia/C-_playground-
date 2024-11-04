# include <iostream> 

using namespace std;

int parzysta(int x)
{
 int reszta = x%2;
 if(reszta != 0)
 {
    return 1;
 }
 else 
 return 0; 
}

main()
{
int i = 22;
int o = 21;
int p = 40;
int u = 2;

float t = 21;
float y = 2.2; 

cout<<"i/5: "<<i/5<<"\n";
cout<<"i/5: "<<i%5<<"\n";
cout<<"21/5: "<<o%5<<"\n";
cout<<"40/5: "<<p%5<<"\n";

cout<<"parzysta(21): "<<parzysta(o)<<"\n";
cout<<"parzysta(40): "<<parzysta(p)<<"\n";


cout<<"21/2: "<<t/u<<"\n";

}

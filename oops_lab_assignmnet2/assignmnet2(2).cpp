#include<bits/stdc++.h>
using namespace std;
struct product
{
    string productid;
    float rating;
};
void top_rated(int& top,int& avg,int& low,int n,product p[])
{
    for(int i=0;i<n;i++)
    {
        if(p[i].rating>=4)
                top++;
        else if(p[i].rating>=3 && p[i].rating<=4)
                avg++;
        else
            low++;
    }
}
int main()
{
    int n,top=0,avg=0,low=0;
    cout<<"Enter the number of products : ";
    cin>>n;
    product p[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the product id : ";
        cin>>p[i].productid;
        //cout<<endl;
        cout<<"Enter the rating of product : ";
        cin>>p[i].rating;
        //cout<<endl;

    }
    top_rated(top,avg,low,n,p);
    cout<<"Top rated products are : "<<top<<" Average rated products are : "<<avg<<" Low rated products are : "<<low;
}

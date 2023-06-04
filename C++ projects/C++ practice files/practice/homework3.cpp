//assignment question 2 made by abhijeet 21BCE10074


#include <iostream>
using namespace std;

class purchase_item
{
    public:
    string name;
    double unitprice;
    public:
    purchase_item(){
        name = "no item";
        unitprice = 0;
    }
    double get_price(){
        return unitprice;
    }

    string printstring(){
        cout<<name<<"@"<<unitprice<<"\n";
        return 0;
    }

};

class weighted_item : public purchase_item
{
    private:
    double weight;
    float weight_price;
    string name;
    public:
    
    double get_price(){
        cout<<"input weight"<<endl;
        cin>>weight;
        cout<<"input price"<<endl;
        cin>>unitprice;
        weight_price=weight*unitprice; 
        return weight_price;
    }
    int printstring(){
        cout<<"input name of item \n";
        cin>>name;
        cout<<endl<<name<<"@"<<weight_price<<endl;
        return 0;    
    };
};

class counted_item : public purchase_item
{
    private:
    double quantity;
    float quantity_price;
    public:
    double get_price(){
        cout<<"input the number of items"<<endl;
        cin>>quantity;
        cout<<"input the price of the item"<<endl;
        cin>>unitprice;
        quantity_price=quantity*unitprice;
        return quantity_price;
    }
    int printstring(){
        cout<<"enter the name of item \n";
        cin>>name;
        cout<<endl<<name<<"@"<<quantity_price;
        return 0;
    }
};

int main()
{
    weighted_item w;
    w.get_price();
    w.printstring();
    counted_item c;
    c.get_price();
    c.printstring();
    return 0;
}
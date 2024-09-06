#include<iostream>
using namespace std;

class invoice{
    private:
        string partNumber;
        string partDescription;
        int quantityOfItemPurchased;
        double pricePerItem;

    public:
        invoice(string partNumber, string partDescription, int quantityOfItemPurchased, double pricePerItem){
            this->partNumber=partNumber;
            this->partDescription=partDescription;
            this->quantityOfItemPurchased=quantityOfItemPurchased;
            this->pricePerItem=pricePerItem;
        }

        void setPartNumber(string partNumber){
            this->partNumber=partNumber;
        }

        void setPartDescription(string partDescription){
            this->partDescription=partDescription;
        }

        void setQuantityOfItemPurchased(int quantityOfItemPurchased){
            if(this->quantityOfItemPurchased<0){
                this->quantityOfItemPurchased=0;
            }
            else{
                this->quantityOfItemPurchased=quantityOfItemPurchased;
            }
        }

        void setPricePerItem(double pricePerItem){
            if(this->pricePerItem<0){
                this->pricePerItem=0;
            }
            else{
                this->pricePerItem=pricePerItem;
            }
        }

        double getInvoiceAmmount(){
            return ((this->quantityOfItemPurchased)*(this->pricePerItem));
        }
};

int main(){
    invoice f1("1","turbo",3,11000.11);
    cout<<"amount of first is :- "<<f1.getInvoiceAmmount()<<endl;

    f1.setPartNumber("2");
    f1.setPartDescription("v12 engin");
    f1.setQuantityOfItemPurchased(2);
    f1.setPricePerItem(200000);
    cout<<"amount of second is :- "<<f1.getInvoiceAmmount()<<endl;
    
    return 0;
}
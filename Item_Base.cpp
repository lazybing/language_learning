//Item sold at an undiscounted price
//derived classes will define various discount strategies
class Item_base{
    public:
        Item_base(const std::string &book = " ", 
                  double sales_price = 0.0):
            isbn(book), price(sales_price){}

        std::string book() const{returen isbn;}

        virtual double net_price(std::size_t n) const
                {return n * price};
        virtual ~Item_base() {}

    private:
        std::string isbn;
    
    protected:
        double price;
};

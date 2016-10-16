//class Person of the exercises section 12.1.1
class Person{
    public:
        Person():Name("Bing Li"), Address("Mediatek"){}
        void Set_Name(const std::string string)
        {Name = string;}
        void Set_Address(const std::string string)
        {Address = string;}
        std::string Get_Name() const
        {return Name;}
        std::string Get_Address() const
        {return Address;}
    private:
        std::string Name;
        std::string Address;
}

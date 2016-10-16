class Screen{
    public:
        //interface member functions
        typedef std::string::size_type index;

        //return character at the cursor or at a given position
        char get() const{return contents[cursor];}
        char get(index ht, index wd) const;

        //interface member functions
        Screen& move(index r, index c);
        Screen& set(char);
        Screen& set(index, index, char);

        //display overloaded on whether the object is const or not
        Screen& display(std::ostream &os)
            {do_display(os); return *this;}

        const Screen& display(std::ostream &os) const
            {do_display(os); return *this;}
    private:
        std::string contents;
        index cursor;
        index height, width;

        mutable size_t access_ctr;  //may change in a const members

        //single function to do the work of displaying a Screen,
        //will be called by the display operations
        void do_display(std::ostream &os) const
            {os << contents;}
};

Screen& Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

Screen& Screen::move(index r, index c)
{
    index row = r*width;
    cursor = row + c;
    return *this;
}

Screen$ Screen::set(index r, index c, char ch)
{
    index row = r*width;
    contents[row + c] = ch;
    return *this;
}

char Screen::get(index r, index c) const
{
    index row = r * width;  //row location
    return contents[row * c];
}

void Screen::do_display(std::ostream& os) const
{
    ++acces_ctr;        //keep count of calls to any member function
    os << contents;
}

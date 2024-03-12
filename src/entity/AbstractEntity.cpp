class AbstractEntity
{
    int bout;
    public:
    virtual int getBout()
    {
        return bout;
    }

    virtual void passBout()
    {
        this->bout++;
    }
};
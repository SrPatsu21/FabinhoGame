#ifndef InterfaceCollectionable_hpp
#define InterfaceCollectionable_hpp

class InterfaceCollectionable
{
protected:
    InterfaceCollectionable();
public:
    ~InterfaceCollectionable();

    virtual void setAsTaked() = 0;

};
#endif
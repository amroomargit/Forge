#ifndef TEXTPAGE_H
#define TEXTPAGE_H

class TextPage{
public:
    virtual ~TextPage() = default;
    virtual void setText() const = 0; //must implement in every inherited class
};

#endif // TEXTPAGE_H

#ifndef NO_H
#define NO_H


class No
{
public:
    No();
    ~No();
    int idNo;
    int din;
    int dout;
    float pesoNo;

private:
    No *proxNo;
    Aresta *adj;
};

#endif // NO_H

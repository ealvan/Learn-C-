#ifndef PIXELRGB_H
#define PIXELRGB_H


class PixelRGB
{
public:
    int R{0};
    int V{0};
    int A{0};

public:
    PixelRGB() = default;
    PixelRGB(int r, int v, int a):
        R{r},
        V{v},
        A{a}
    {

    };

    void SetR(const int& r)
    {
            R = r;

    }
    void SetV(const int& v)
    {
            V = v;

    }
    void SetA(const int& a)
    {
            A = a;

    }
    friend  PixelRGB operator+(const PixelRGB& a, const PixelRGB& b);
    friend  PixelRGB operator+(const PixelRGB& a, const int& s);
    friend  PixelRGB operator+(const int& s, const PixelRGB& a);
};

PixelRGB operator+(const PixelRGB& a, const PixelRGB& b)
{
    PixelRGB ret{};
    ret.R = int((a.R+b.R)/2);
    ret.V = int((a.V+b.V)/2);
    ret.A = int((a.A+b.A)/2);

    return ret;

}


PixelRGB operator+(const PixelRGB& a, const int& s)
{

    PixelRGB ret{};
    ret.R = int((a.R+s)/2);
    ret.V = int((a.V+s)/2);
    ret.A = int((a.A+s)/2);

    return ret;

}

PixelRGB operator+(const int& s, const PixelRGB& a)
{
    return a+s;
}

#endif // PIXELRGB_H

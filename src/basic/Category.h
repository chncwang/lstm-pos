#ifndef NEWS_SRC_BASIC_CATEGORY_H
#define NEWS_SRC_BASIC_CATEGORY_H

#include <string>
#include <iostream>

enum Category {
    Ag,
    a,
    ad,
    an,
    Bg,
    b,
    c,
    Dg,
    d,
    e,
    f,
    g,
    h,
    i,
    j,
    k,
    Mg,
    m,
    Ng,
    n,
    NR,
    ns,
    nt,
    nx,
    nz,
    o,
    p,
    Qg,
    q,
    Rg,
    r,
    s,
    Tg,
    t,
    Ug,
    u,
    Vg,
    v,
    vd,
    vn,
    w,
    x,
    Yg,
    y,
    z
};

const int CATEGORY_COUNT = 45;

Category ToCategory(const std::string &str) {
    if (str == "Ag") {
        return Category::Ag;
    } else if (str == "a") {
        return Category::a;
    } else if (str == "ad") {
        return Category::ad;
    } else if (str == "an") {
        return Category::an;
    } else if (str == "Bg") {
        return Category::Bg;
    } else if (str == "b") {
        return Category::b;
    } else if (str == "c") {
        return Category::c;
    } else if (str == "Dg") {
        return Category::Dg;
    } else if (str == "d") {
        return Category::d;
    } else if (str == "e") {
        return Category::e;
    } else if (str == "f") {
        return Category::f;
    } else if (str == "g") {
        return Category::g;
    } else if (str == "h") {
        return Category::h;
    } else if (str == "i") {
        return Category::i;
    } else if (str == "j") {
        return Category::j;
    } else if (str == "k") {
        return Category::k;
    } else if (str == "Mg") {
        return Category::Mg;
    } else if (str == "m") {
        return Category::m;
    } else if (str == "Ng") {
        return Category::Ng;
    } else if (str == "n") {
        return Category::n;
    } else if (str == "nr") {
        return Category::NR;
    } else if (str == "ns") {
        return Category::ns;
    } else if (str == "nt") {
        return Category::nt;
    } else if (str == "nx") {
        return Category::nx;
    } else if (str == "nz") {
        return Category::nz;
    } else if (str == "o") {
        return Category::o;
    } else if (str == "p") {
        return Category::p;
    } else if (str == "Qg") {
        return Category::Qg;
    } else if (str == "q") {
        return Category::q;
    } else if (str == "Rg") {
        return Category::Rg;
    } else if (str == "r") {
        return Category::r;
    } else if (str == "s") {
        return Category::s;
    } else if (str == "Tg") {
        return Category::Tg;
    } else if (str == "t") {
        return Category::t;
    } else if (str == "Ug") {
        return Category::Ug;
    } else if (str == "u") {
        return Category::u;
    } else if (str == "Vg") {
        return Category::Vg;
    } else if (str == "v") {
        return Category::v;
    } else if (str == "vd") {
        return Category::vd;
    } else if (str == "vn") {
        return Category::vn;
    } else if (str == "w") {
        return Category::w;
    } else if (str == "x") {
        return Category::x;
    } else if (str == "Yg") {
        return Category::Yg;
    } else if (str == "y") {
        return Category::y;
    } else if (str == "z") {
        return Category::z;
    } else {
        std::cout << "unknown type:" << str << std::endl;
        abort();
    }
}

#endif

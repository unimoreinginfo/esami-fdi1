#if !defined GEOMETRIA_H
#define GEOMETRIA_H

struct punto {
    double x, y;
};

extern int colineari(struct punto p1, struct punto p2, struct punto p3);

#endif //GEOMETRIA_H
#ifndef A1_FIGURES_FIGUREPRINTER_H
#define A1_FIGURES_FIGUREPRINTER_H


class FigurePrinter {
private:
    int n;
public:
    FigurePrinter(int n);
    virtual void printFigure()=0;
};


#endif //A1_FIGURES_FIGUREPRINTER_H
